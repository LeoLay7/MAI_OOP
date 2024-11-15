#ifndef FIGUREARRAY_H
#define FIGUREARRAY_H

#include <iostream>
#include <memory>

template<typename T>
class FigureArray {
private:
    std::shared_ptr<T[]> _array;
    size_t _size;
    size_t _capacity;

    void resize(size_t newCapacity) {
        if (newCapacity <= _capacity) return;

        std::shared_ptr<T[]> newArray(new T[newCapacity]);
        for (size_t i = 0; i < _size; ++i) {
            newArray[i] = std::move(_array[i]);
        }
        _array = std::move(newArray);
        _capacity = newCapacity;
    }

public:
    explicit FigureArray(size_t capacity)
        : _size(0), _capacity(capacity), _array(std::shared_ptr<T[]>(new T[capacity])) {}

    void append(T element) {
        if (_size >= _capacity) resize(_capacity * 2);
        _array[_size++] = std::move(element);
    }

    void set(size_t index, T element) {
        if (index >= _size) throw std::out_of_range("Index out of range");
        _array[index] = std::move(element);
    }

    T get(size_t index) const {
        if (index >= _size) throw std::out_of_range("Index out of range");
        return _array[index];
    }

    int size() const {
        return _size;
    }

    void printCoordinates(std::ostream& os) const {
        for (size_t i = 0; i < _size; ++i) {
            if constexpr (std::is_pointer_v<T>) {
                if (_array[i]) _array[i]->print(os);
            } else {
                _array[i].print(os);
            }
            os << "\n";
        }
    }

    double getTotalArea() const {
        double totalArea = 0.0;
        for (size_t i = 0; i < _size; ++i) {
            if constexpr (std::is_pointer_v<T>) {
                if (_array[i]) totalArea += static_cast<double>(*_array[i]);
            } else {
                totalArea += static_cast<double>(_array[i]);
            }
        }
        return totalArea;
    }

    void remove(int index) {
        if (index < 0 || index >= _size) {
            throw std::out_of_range("Index out of range");
        }

        if constexpr (std::is_pointer<T>::value) {
            delete _array[index];
            _array[index] = nullptr;
        } else {
            _array[index] = T();
        }

        for (int i = index; i < _size - 1; ++i) {
            _array[i] = std::move(_array[i + 1]);
        }

        --_size;
    }


    ~FigureArray() = default;
};

#endif
