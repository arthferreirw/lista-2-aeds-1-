#include <iostream>

using namespace std;

int GerarNumeroIntervalo( int num1, int num2){
    for(int i=num1; i<=num2; i=i+1){
        cout<<i<<endl;



    }




}
int main(){
        int num1=0;
        cout<<" informe num1: ";
        cin>>num1;

        int num2=0;
        cout<<" informe n2: ";
        cin>>num2;

     GerarNumeroIntervalo (num1,num2);




    return 0;
}