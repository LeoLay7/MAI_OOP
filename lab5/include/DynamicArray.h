#pragma once
#include <memory_resource>
#include <utility>
#include <cassert>
#include <new>
#include <memory>
#include <iostream>

template <typename T>
class DynamicArray {
private:
    std::pmr::polymorphic_allocator<T> allocator;
    std::shared_ptr<T[]> _array;
    size_t _size;
    size_t _capacity;

    void allocate_new_array(size_t new_capacity) {
        T* new_memory = allocator.allocate(new_capacity);
        auto deleter = [this, new_capacity](T* ptr) { allocator.deallocate(ptr, new_capacity); };
        std::shared_ptr<T[]> new_array(new_memory, deleter);

        for (size_t i = 0; i < _size; ++i) {
            std::construct_at(&new_array[i], std::move(_array[i]));
            std::destroy_at(&_array[i]);
        }

        _array = std::move(new_array);
        _capacity = new_capacity;
    }

public:
    class Iterator {
    private:
        T* ptr;

    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        explicit Iterator(T* p) : ptr(p) {}

        T& operator*() const { return *ptr; }
        T* operator->() const { return ptr; }

        Iterator& operator++() {
            ++ptr;
            return *this;
        }

        Iterator operator++(int) {
            Iterator temp = *this;
            ++ptr;
            return temp;
        }

        bool operator==(const Iterator& other) const { return ptr == other.ptr; }
        bool operator!=(const Iterator& other) const { return ptr != other.ptr; }
    };

    // Методы для итераторов
    Iterator begin() { return Iterator(_array.get()); }
    Iterator end() { return Iterator(_array.get() + _size); }

    explicit DynamicArray(std::pmr::memory_resource* resource = std::pmr::get_default_resource())
        : allocator(resource), _array(nullptr), _size(0), _capacity(0) {}

    ~DynamicArray() {
        clear();
    }

    void push_back(const T& value) {
        if (_size == _capacity) {
            allocate_new_array((_capacity == 0) ? 1 : _capacity * 2);
        }
        std::construct_at(&_array[_size], value);
        ++_size;
    }

    void push_back(T&& value) {
        if (_size == _capacity) {
            allocate_new_array((_capacity == 0) ? 1 : _capacity * 2);
        }
        std::construct_at(&_array[_size], std::move(value));
        ++_size;
    }

    void pop_back() {
        assert(_size > 0);
        --_size;
        std::destroy_at(&_array[_size]);
    }

    void clear() {
        for (size_t i = 0; i < _size; ++i) {
            std::destroy_at(&_array[i]);
        }
        _size = 0;
    }

    size_t size() const { return _size; }
    size_t capacity() const { return _capacity; }

    const T& operator[](size_t index) const {
        assert(index < _size);
        return _array[index];
    }

    T& operator[](size_t index) {
        assert(index < _size);
        return _array[index];
    }
};