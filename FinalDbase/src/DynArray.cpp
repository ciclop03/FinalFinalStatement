#include "DynArray.h"

template <typename T>
class DynamicArray{
    T *data;
    int size;
    void resize(int newSize) {
        T *arr = new T[size];
        int minSize = (newSize > size ? newSize : newSize);
        for(int i = 0; i < minSize; i++){
            arr[i]=data[i];
        }
        delete[] data;
        this->size = newSize;
        data = arr;
    }
public:
    DynamicArray() {
        data = new T[0];
        this->size = 0;
    }
    DynamicArray(T arr[], int size) {
        this->data = new T[size];
        this->size = size;
        for (int i = 0; i < size; ++i)
            data[i] = arr[i];
    }
    DynamicArray(DynamicArray <T> &o) {
        data = new T[o.size];
        size = o.size;
        for (int i = 0; i < size; ++i)
            data[i] = o.data[i];
    }

    void push_back(T val) {
        resize(size + 1);
        this->data[size-1] = val;
    }

    void insert(const T val, int pos) {
        resize(size + 1);

        for( int i = size; i > pos; i--){
            data[i]= data[i-1];
        }
        data[pos] = val;
    }

    void remove(int pos) {
        if(pos >= 0 && pos < size) {
            for(int i=pos; i<size-1; i++)
            {
                data[i] = data[i+1];
            }
            resize(size - 1);
        }
    }

    void print(void) {
        cout << "[";
        for(int i = 0; i < size; i++){
            cout << data[i] << " ";
        }
        cout <<"] "<< endl;
    }

    int getSize() {
        return size;
    }

    ~DynamicArray() {
        delete[] data;
    }
};
int main() {

DynArray::DynArray()
{
    //ctor
}

DynArray::~DynArray()
{
    //dtor
}
