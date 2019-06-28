#ifndef PLAYERDYNARRAY_H
#define PLAYERDYNARRAY_H
#include "dynarray.h"
#include "player.h"
#include <iostream>
#include "fn.h"

using namespace std;
template <typename T>
class PersonDynArray : public DynArray{
    T *data;
    int size_;

    void resize_(int new_size_){
        T *extra_data = new T [new_size_];
        int minsize=(size_<new_size_)? size_:new_size_;
        for (int i=0; i<minsize;i++){
            extra_data[i]=data[i];
        }
        size_= new_size_;
        delete [] this->data;
        data=extra_data;
    }

public:
    PersonDynArray() {
        this->size_ = 0;
        this->data = new T[0];
    }
    PersonDynArray(T arr[], int size_){
        this->size_ = size_;
        this->data = new T[size_];
        for(int i = 0; i < size_; i++){
            this->data[i] = arr[i];
        }
    }
    void printArray(){
        if (size_ == 0)
            cout << "the array is empty.";
        for(int i=0; i<size_;i++){
            cout << data[i]<<" ,";
        }
        cout <<endl;
    }

    void insertIn(int pos, T a){

        resize_ (size_+1);

        for (int i=size_-1; i>=pos ;i--){
               this->data[i+1]=this->data[i];

        }
        this->data[pos]=a;

    }
    void deleteIn(int pos){
        for (int i=pos;i<size_-1;i++) {
            data[i]=data[i+1];
        }
        resize_(size_-1);
    }

    int getSize(){
        return size_;
    }
     virtual ~PersonDynArray(){
        delete[] this->data;
    }
};


#endif // PLAYERDYNARRAY_H
