#include <iostream>

using namespace std;

void CalcularMediaESoma(float n){

    float soma=0;

    float media=0;

    float i=0;

    for(i=1; i<=n; i=i+1){
        soma=i+n;
        media=soma/n;
    }

    cout<<" o valor da soma eh: "<<soma<<endl;

    cout<<" o valor da media eh: "<<media<<endl;


}
int main(){

    float n=0;
    cout<<" digite o valor de n: ";
    cin>>n;

    CalcularMediaESoma(n);





    return 0;
}