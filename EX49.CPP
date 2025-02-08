#include <iostream>

using namespace std;

void CalcularValorDeH(){
    float h=0.0;
    float n=0.0;
    cout<<" qual eh o termo desejado: ";
    cin>>n;
    for(float i=1; i<=n; i=i+1){
        h=1/i;
        cout<<h<<endl;



    }
}

int main(){
    CalcularValorDeH();






    return 0;
}
