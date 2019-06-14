#include "DynArray.h"
template <typename T>
DynArray::resize_(int newSize) {
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
DynArray::DynArray() {
        data = new T*[0];
        this->size_ = 0;
    }
template <typename T>
DynArray::DynArray(T arr[], int size_) {
        this->data = new T*[size_];
        this->size_ = size_;
        for (int i = 0; i < size_; ++i)
            data[i] = arr[i];///es un ptr deberia ser *(data[i]) ........?
    }
template <typename T>
DynArray::DynArray(DynArray <T> &a) {///estaok?
        data = new T*[a.size_];
        size_ = a.size_;
        for (int i = 0; i < size_; ++i)
            data[i] = a.data[i];
    }
template <typename T>
void DynArray::push_back_(T *val) {
        resize_(size_ + 1);
        this->data[size_-1] = val;
    }
template <typename T>
void DynaArray::insert_(const T *val, int pos) {
        resize_(size_ + 1);

        for( int i = size_; i > pos; i--){
            data[i]=data[i-1];
        }
        data[pos] = val;
    }

void DynArray::remove_(int pos) {
        if(pos >= 0 && pos < size_) {
            for(int i=pos; i<size_-1; i++)
            {
                data[i] = data[i+1];
            }
            resize_(size_ - 1);
        }
    }

void DynArray::print(void) {
        std::cout << "[";
        for(int i = 0; i < size_; i++){
            std::cout << data[i] << " ";
        }
        std::cout <<"] "<< std::endl;
    }

int DynArray::getSize() {
        return size_;
    }

    DynArray::~DynamicArray() {
        delete[] data;
    }


