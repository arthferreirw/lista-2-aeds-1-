#include <iostream>

using namespace std;

void QuitamentoDivida(float parcelas, float divida, float juros, float valorfinal, int valordaparcela){
    cout<<" qual eh o valor da sua divida? ";
    cin>>divida;
    cout<<" quantas vezes voce quer parcelar a sua divida? ";
    cin>>parcelas;

        if(parcelas==1){
            juros=0;
            valorfinal=divida;
            valordaparcela=valorfinal/1;
            cout<<" o valor final a ser pago na parcela de 1 vai ser de: "<<valorfinal<<endl;
            cout<<" o valor da parcela vai ser de: "<<valordaparcela<<endl;

        }else if(parcelas==3){
            juros=0.1;
            valorfinal=(divida*juros)+divida;
            valordaparcela=valorfinal/3;
            cout<<" o valor a ser pago na parcela de 3 eh de: "<<valorfinal<<endl;
            cout<<" o valor de cada parcela vai ser de: "<<valordaparcela<<endl;

        }else if(parcelas==6){
            juros=1.5;
            valorfinal=(divida*juros)+divida;
            valordaparcela=valorfinal/6;
            cout<<" o valor a ser pago em parcelas de 6 eh de: "<<valorfinal<<endl;
            cout<<" o valor da parcela vai ser de: "<<valordaparcela<<endl;

        }else if(parcelas==9){
            juros=0.2;
            valorfinal=(divida*juros)+divida;
            valordaparcela=valorfinal/9;
            cout<<"o valor final a ser pago em parcelas de 9 eh de: "<<valorfinal<<endl;
            cout<<" o valor da parcela vai ser de: "<<valordaparcela<<endl;

        }else if(parcelas==12){
            juros=0.25;
            valorfinal=(divida*juros)+divida;
            valordaparcela=valorfinal/12;
            cout<<" o valor final a ser pago em parcelas de 12 eh de: "<<valorfinal<<endl;
            cout<<" o valor da parcela vai ser de: "<<valordaparcela<<endl;

        }


    }
int main(){
    float parcelas=0;
    float divida=0;
    float juros=0;
    float valorfinal=0;
    float valordaparcela=0;
    QuitamentoDivida( parcelas,  divida, juros, valorfinal, valordaparcela);



    return 0;
}