#include <memory_resource>
#include <memory>
#include <list>
#include <vector>
#include <iostream>
#include <cstddef>
#include <stdexcept>

class MemoryResource : public std::pmr::memory_resource {
private:
    size_t block_size;
    size_t block_count;
    std::unique_ptr<uint8_t[]> pool;
    std::list<void*> free_blocks;

    void* do_allocate(size_t bytes, size_t alignment) override {
        if (bytes > block_size) {
            throw std::bad_alloc();
        }
        if (free_blocks.empty()) {
            throw std::bad_alloc();
        }
        void* block = free_blocks.front();
        free_blocks.pop_front();
        return block;
    }

    void do_deallocate(void* p, size_t bytes, size_t alignment) override {
        free_blocks.push_back(p);
    }

    bool do_is_equal(const std::pmr::memory_resource& other) const noexcept override {
        return this == &other;
    }

public:
    MemoryResource(size_t block_size, size_t block_count)
        : block_size(block_size), block_count(block_count),
          pool(std::make_unique<uint8_t[]>(block_size * block_count)) {
        for (size_t i = 0; i < block_count; ++i) {
            free_blocks.push_back(pool.get() + i * block_size);
        }
    }

    ~MemoryResource() override {
        free_blocks.clear();
        pool.reset();
    }
};