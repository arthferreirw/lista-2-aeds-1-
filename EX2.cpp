#include <iostream>

using namespace std;

float LeitorDeNumeros(float n){
    int i=0;
    for(i=0; i<=n;i=i+1){

        cout<<"i: "<<i<<endl;


    }
    cout<<" o maior numero eh: "<<n<<endl;

}

int main (){

    float n=0;
    cout<<" defina o valor de n: ";
    cin>>n;

    LeitorDeNumeros(n);






    return 0;
}