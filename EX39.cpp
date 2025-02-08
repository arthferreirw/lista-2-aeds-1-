#include <iostream>

using namespace std;
void ConjuntoDeDoisValores(int aluno, int altura, int maisalto, int maisbaixo, int codigoalunomaisalto, int codigoalunomaisbaixo){

    cout<<" (NUMERO ALUNO, ALTURA ) "<<endl;

    for(int i=1; i<=10; i=i+1){
        cout<<" digite o numero do aluno: ";
        cin>>aluno;
        cout<<" digite a altura do aluno (cm): ";
        cin>>altura;
        if(altura>maisalto){
            maisalto=altura;


        }
        if(altura<maisbaixo){
            maisbaixo=altura;
    }
    if(maisalto==altura){
        codigoalunomaisalto=aluno;


    }
    if(maisbaixo==altura){
        codigoalunomaisbaixo=aluno;

    }
  
    }
    cout<<" o numero do aluno mais alto eh: "<<codigoalunomaisalto<<endl;
    cout<<" a altura do aluno mais alto eh: "<<maisalto<<endl;
    cout<<" ( "<<codigoalunomaisalto<<" , "<<maisalto<<" ) "<<endl;
    cout<<" o numero do aluno mais baixo eh: "<<codigoalunomaisbaixo<<endl;
    cout<<" a altura do aluno mais baixo eh: "<<maisbaixo<<endl;
    cout<<" ( "<<codigoalunomaisbaixo<<" , "<<maisbaixo<<" ) "<<endl;

}
int main(){
    int aluno=0;
    int altura=0;
    int maisalto=0;
    int maisbaixo=999;
    int codigoalunomaisalto=0;
    int codigoalunomaisbaixo=0;
    ConjuntoDeDoisValores(aluno,  altura,  maisalto,  maisbaixo, codigoalunomaisalto, codigoalunomaisbaixo);






    return 0;
}