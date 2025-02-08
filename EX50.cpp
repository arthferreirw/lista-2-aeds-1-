#include <iostream>

using namespace std;

int main (){
    float s=0;
    float soma=0.0;
    float n=0.0;
    cout<<" n: ";
    cin>>n;

    for(int i=1; i<=n; i=i+1){
        s=i/(2*i-1);
        soma=soma+s;
        cout<<soma;


    }





    return 0;
}