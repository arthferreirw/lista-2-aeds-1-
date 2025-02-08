#include <iostream>

using namespace std;

void GeradorTabuada(int num, int comeca, int termina, int resultado2){
    cout<<" ---- GERADOR DE TABUADA ---- "<<endl;

    cout<<" deseja a tabuada de qual numero? ";
    cin>>num;

    cout<<" qual numero voce deseja de inicio? ";
    cin>>comeca;

    cout<<" Começar por: "<<comeca<<endl;

    cout<<" qual numero ira terminar? ";
    cin>>termina;

    cout<<" Terminar em: "<<termina<<endl;
    
    cout<<" sera montada a tabuada de, "<<num<<" comecando em "<<comeca<<" e terminando em "<<termina<<" : "<<endl;
    for(int i=comeca; i<=termina; i=i+1){
        resultado2=num*i;
        cout<<num<<" X "<<i<<" = "<<resultado2<<endl;





    }





}
int main(){
    int num=0;
    int comeca=0;
    int termina=0;
    int resultado2=0;
    GeradorTabuada( num, comeca, termina, resultado2);







    return 0;
}