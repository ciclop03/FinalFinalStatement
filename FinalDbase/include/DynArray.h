#ifndef DYNARRAY_H
#define DYNARRAY_H
/// USAR INLINE CON TEMPLATES (?)

template <typename T>
class DynArray
{
public:

        DynArray();
        DynArray(T arr[], int size_);
        DynArray(DynArray <T> &a);
        void push_back_(T *val);
        void insert_(const T *val, int pos);
        void remove_(int pos);
        void print(void);
        int getSize;
        ~DynArray();

protected:

private:
    T **data;
    int size_;
    void resize_(int newSize);

};

#endif // DYNARRAY_H
