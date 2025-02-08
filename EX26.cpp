#include <iostream>

using namespace std;


void CalcularMediaIdadeNPessoas(int media, int idade){
    //10 eh o numero de pessoas (n)

    for(int i=1; i<=5; i=i+1){
    cout<<" informe a idade: ";
    cin>>idade;

    }
    media=idade/5;
    if(media>=0 && media<=25){
        cout<<"a turma eh jovem "<<endl;
        cout<<"a media eh: "<<media;

    }else if(media>=26 && media<=50){
        cout<<"a turma eh adulta "<<endl;
        cout<<"a media eh: "<<media;

    }else if(media>=60){
        cout<<"a turma eh idosa "<<endl;
         cout<<"a media eh: "<<media;


    }

}
int main(){
    int media=0;
    int idade=0;
    CalcularMediaIdadeNPessoas(media, idade);



    return 0;
}