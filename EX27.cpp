#include <iostream>

using namespace std;

void VotadoresEleicao(int votoscandidato1, int votoscandidato2, int votoscandidato3, int eleitores, int voto){
    cout<<"---VOTACAO---"<<endl;
    cout<<" digite o numero de eleitores: ";
    cin>>eleitores;

    for(int i=0; i<=eleitores; i=i+1){
        cout<<" digite o numero (1/2/3) do canditado que o eleitor quer votar: ";
        cin>>voto;
        if(voto==1)
            votoscandidato1 += 1;
        else if(voto==2){
            votoscandidato2+= 1;
        }    
        else if(voto==3){
            votoscandidato3+= 1;

        }

        }
        cout<<" votacao encerrada, aguarde o resultado... "<<endl;
        cout<<" o numero de votos do candidato 1 eh: "<<votoscandidato1;
        cout<<" o numero de votos do candiato 2 eh: "<<votoscandidato2;
        cout<<" o numero de votos do candidato 3 eh: "<<votoscandidato3;

    }

int main(){
    int votoscandidato1=0;
    int votoscandidato2=0;
    int votoscandidato3=0;
    int eleitores=0;
    int voto=0;
    VotadoresEleicao( votoscandidato1,  votoscandidato2,  votoscandidato3,  eleitores, voto);




    return 0;
}




