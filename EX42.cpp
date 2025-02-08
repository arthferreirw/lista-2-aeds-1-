#include <iostream>


using namespace std;

void SequenciaDeNumeros( int contador1, int contador2, int contador3, int contador4){

    for(int i=0; i<=25-1; i=i+1){
        contador1+=1;
        
    }
        cout<<" quantidade de numeros (0-25): "<<contador1<<endl;

    for(int i=26; i<=50-1; i=i+1){
        contador2+=1;
    }
        cout<<" a quantidade de numeros (26-50): "<<contador2<<endl;

    for(int i=51; i<=75-1; i=i+1){
        contador3+=1;
    }
        cout<<" a quantidade de numeros(51-75): "<<contador3<<endl;

    for(int i=76; i<=100-1; i=i+1){
        contador4+=1;
        
    }
        cout<<" a quantidade de numeros(76-100): "<<contador4<<endl;
}
int main(){

int contador1=0;
int contador2=0;
int contador3=0;
int contador4=0;

SequenciaDeNumeros(contador1, contador2, contador3, contador4);


    
}