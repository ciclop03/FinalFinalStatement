#ifndef ARR_H
#define ARR_H

template <typename T>
class arr
{
    public:
        arr();
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
        re_siz(int new_siz){
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

#endif // ARR_H
