/**
#ifndef DYNARRAY_H

#define DYNARRAY_H
/// USAR INLINE CON TEMPLATES (?)
#include<Player.h>

template <typename T>
class DynArray
{
    public:
        DynArray(){
            siz=0;

        };

        virtual ~DynArray();
        sor_qck();
        sor_cou();
        ins_end(T a);
        ins(T a, int pos);
        del(int pos);

        ///funciones
        ///comparar jugador con jugador
        void ply_compare<Player>(Player**arr,int pos_a, int pos_b){
            std::cout <<"fths";
            return ;
        }


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
*/
