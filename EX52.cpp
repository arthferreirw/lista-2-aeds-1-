#include <iostream>

using namespace std;

void CalcularFatorialE(){
    float e=0;
    float produto=1.0;
    float n=0.0;
    float soma=0.0;
    cout<<" N: ";
    cin>>n;

    for(int i=1; i<=n; i=i+1){
        produto=produto*i;
        e= 1+ (i/produto);
        soma=soma+e;
        cout<<soma;



    }

}
int main(){
    CalcularFatorialE();





    return 0;
}