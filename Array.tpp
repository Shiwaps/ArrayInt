template <typename T>
Array<T>::Array(size_t size) : data_(size) {}

template <typename T>
Array<T>::Array(const Array& other) : data_(other.data_) {}

template <typename T>
size_t Array<T>::getSize() const {
    return data_.size();
}

template <typename T>
T& Array<T>::operator[](size_t index) {
    if (index >= data_.size()) {
        throw std::out_of_range("Out of range");
    }
    return data_[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const {
    if (index >= data_.size()) {
        throw std::out_of_range("Out of range");
    }
    return data_[index];
}

template <typename T>
void Array<T>::resize(size_t new_size) {
    data_.resize(new_size);
}

template <typename T>
void Array<T>::insert(size_t index, const T& value) {
    if (index > data_.size()) {
        throw std::out_of_range("Out of range");
    }
    data_.insert(data_.begin() + index, value);
}

template <typename T>
void Array<T>::remove(size_t index) {
    if (index >= data_.size()) {
        throw std::out_of_range("Out of range");
    }
    data_.erase(data_.begin() + index);
}

template <typename T>
void Array<T>::pushFront(const T& value) {
    data_.insert(data_.begin(), value);
}

template <typename T>
void Array<T>::pushBack(const T& value) {
    data_.push_back(value);
}

template <typename T>
bool Array<T>::find(const T& value) const {
    return std::find(data_.begin(), data_.end(), value) != data_.end();
}
