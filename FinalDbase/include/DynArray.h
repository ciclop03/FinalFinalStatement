#ifndef DYNARRAY_H
#define DYNARRAY_H
/// USAR INLINE CON TEMPLATES (?)


template <typename T>
class arr
{
    public:
        arr(){
            siz=0;

        };

        virtual ~arr();
        sor_qck();
        sor_cou();
        ins_end(T a);
        ins(T a, int pos);
        del(int pos);
    protected:

    private:
        T**dat;
        int siz;
        void re_siz(int new_siz){
            T **e_dat = new T* [new_siz];
            int min_siz=(new_siz > siz)?siz:new_siz;
            for(int i=0;i<min_siz;i++){
                e_dat[i]=this->dat[i];
            }
        this->siz=new_siz;
        delete[] this->dat;
        dat=e_dat;

        }





};


#endif // DYNARRAY_H
