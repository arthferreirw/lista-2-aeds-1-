#include <iostream>

using namespace std;

void InformeTemperaturasMediaTemperaturas(int temp,int media, int quantidadetemp, int maior, int menor){
    

    cout<<" qual eh a quantidade de temperaturas desejadas? ";
    cin>>quantidadetemp;

    for(int i=1; i<=quantidadetemp;i=i+1){
        cout<<" informe a medida das temperaturas: ";
        cin>>temp;

        if(temp>maior){
            maior=temp;

        }
        if(temp<menor){
            menor=temp;
        }
        media=(maior+menor)/quantidadetemp;



    }
    cout<<" a menor temperatura eh: "<<menor<<endl;
    cout<<" a maior temperatura eh: "<<maior<<endl;
    cout<<" a media das temperaturas eh: "<<media<<endl;
    


}
int main(){
int temp=0;
int media=0;
int quantidadetemp=0;
int maior=0;
int menor=999;
InformeTemperaturasMediaTemperaturas( temp, media,  quantidadetemp,  maior,  menor);






    return 0;
}