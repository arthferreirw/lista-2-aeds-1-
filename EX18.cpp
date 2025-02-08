#include <iostream>

using namespace std;

void SequenciaFibonacci(int num, int num2, int antigonum2){
   
        cout<<" 0, "<<num<<", ";
        for (int i=1; i<=500-1; i=i+1){
            cout<<num2<< ",  "; 
            antigonum2=num2;
            num2=num2+num;
            num=antigonum2;

           


        }


}
int main (){
    int num=1;
    int num2=1;
    int antigonum2=0;
    SequenciaFibonacci(num,num2,antigonum2);







    return 0;
}