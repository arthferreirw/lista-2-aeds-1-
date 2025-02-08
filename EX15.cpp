#include <iostream>

using namespace std;

int PotenciaDeUmNumero(int expoente, int base){

    int resultado=1;
    for(int i=0; i<expoente; i=i+1){

    

     resultado=base*resultado;

    }

    cout<<" o resultado de "<<base<<" elevado a "<<expoente<<  " eh: "<<resultado<<endl;




   return resultado;

}
int main (){

    int base=0;
    cout<<" defina a sua base: ";
    cin>>base;

    int expoente=0;
    cout<<" defina o seu expoente: ";
    cin>>expoente;

    

    PotenciaDeUmNumero( expoente,base);




    return 0;
}