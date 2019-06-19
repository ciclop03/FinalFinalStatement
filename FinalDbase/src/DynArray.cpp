#include "DynArray.h"
#include <iostream>

template <typename T>
void DynArray<T>::resize_(int newSize) {
        T **arr = new T*[size_];
        int minSize = (newSize > size_ ? newSize : newSize);
        for(int i = 0; i < minSize; i++){
            arr[i]=data[i];
        }
        delete[] data;
        this->size_ = newSize;
        data = arr;
}


template <typename T>
DynArray<T>::DynArray() {
        data = new T*[0];
        this->size_ = 0;
}


template <typename T>
DynArray<T>::DynArray(T arr[], int size_) {
        this->data = new T*[size_];
        this->size_ = size_;
        for (int i = 0; i < size_; ++i)
            data[i] = arr[i];///es un ptr deberia ser *(data[i]) ........?
}


template <typename T>
DynArray<T>::DynArray(DynArray <T> &a) {///estaok?
        data = new T*[a.size_];
        size_ = a.size_;
        for (int i = 0; i < size_; ++i)
            data[i] = a.data[i];
}


template <typename T>
void DynArray<T>::push_back_(T *val) {
        resize_(size_ + 1);
        this->data[size_-1] = val;
}


template <typename T>
void DynaArray<T>::insert_(const T *val, int pos) {
        resize_(size_ + 1);

        for( int i = size_; i > pos; i--){
            data[i]=data[i-1];
        }
        data[pos] = val;
}
#include "DynArray.h"

template <typename T>
void DynArray<T>::remove_(int pos) {
        if(pos >= 0 && pos < size_) {
            for(int i=pos; i<size_-1; i++)
            {
                data[i] = data[i+1];
            }
            resize_(size_ - 1);
        }
}
template <typename T>
void DynArray<T>::print(void) {
        std::cout << "[";
        for(int i = 0; i < size_; i++){
            std::cout << data[i] << " ";
        }
        std::cout <<"] "<< std::endl;
}
template <typename T>
int DynArray<T>::getSize() {
        return size_;
}
template <typename T>
DynArray<T>::~DynamicArray() {
        delete[] data;
    }


