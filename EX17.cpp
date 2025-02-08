#include <iostream>

using namespace std;

void SequenciaFibonacci(int num, int num2, int vezes, int antigonum2){
    
    cout<<" quantas vezes (numericamente) voce deseja ver a sequencia de fibonacci? ";
    cin>>vezes;

    if(vezes>=3){
        cout<<" 0, "<<num<<", ";
        for (int i=1; i<=vezes-2; i=i+1){
            cout<<num2<< ",  "; 
            antigonum2=num2;
            num2=num2+num;
            num=antigonum2;

           


        }


    }else{
        cout<<" a quantidade de vezes (numero) precisa ser maior que 3 "<<endl;

    }




}
int main (){
    int num=1;
    int num2=1;
    int vezes=0;
    int antigonum2=0;
    SequenciaFibonacci(num,  num2, vezes,  antigonum2);







    return 0;
}