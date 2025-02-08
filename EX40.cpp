#include <iostream>

using namespace std;

void EstatisticaDeCincoCidades(int cidade, int codigocidade){
    int media;
    media=0;
    int media2;
    media2=0;
    int veiculos1, veiculos2, veiculos3, veiculos4, veiculos5;
    int acidentes1, acidentes2, acidentes3, acidentes4, acidentes5;
    for(int i=1; i<=5; i=i+1){
        cout<<" qual é o codigo da cidade? ";
        cin>>codigocidade;
       
        if(codigocidade == 1){
            veiculos1=1.000;
            acidentes1=50;
        }
        if(codigocidade == 2){
            veiculos2=3.000;
            acidentes2=1.000;
        }
        if(codigocidade == 3){
            veiculos3=2.000;
            acidentes3=1.500;
        }
        if(codigocidade == 4)
            veiculos4=7.000;
            acidentes4=4.000;

        if(codigocidade==5){
            veiculos5=10.000;
            acidentes5=987;

        }
       
    }

    media=veiculos1+veiculos2+veiculos3+veiculos4+veiculos5/5;
    media2=acidentes1+acidentes3/2;
    cout<<" o menor indice de acidentes eh a cidade 1 e o maior indice de acidentes eh a cidade 4 "<<endl;
    cout<<" a media dos veiculos das 5 cidades eh: "<<media<<endl;
    cout<<" a media de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio eh: "<<media2<<endl;

}
int main(){
    int cidade=0;
    int codigocidade=0;
    
    EstatisticaDeCincoCidades(cidade, codigocidade);







    return 0;
}