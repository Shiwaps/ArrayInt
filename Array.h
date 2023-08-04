#pragma once

#include <vector>
#include <stdexcept>

template <typename T>
class Array {
private:
    std::vector<T> data_;

public:
    explicit Array(size_t size);
    Array(const Array& other);
    size_t getSize() const;
    T& operator[](size_t index);
    const T& operator[](size_t index) const;
    void resize(size_t new_size);
    void insert(size_t index, const T& value);
    void remove(size_t index);
    void pushFront(const T& value);
    void pushBack(const T& value);
    bool find(const T& value) const;
};

#include "Array.tpp"
