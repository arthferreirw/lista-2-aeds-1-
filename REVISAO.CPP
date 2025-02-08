#include <iostream>
using namespace std;

void CedulaDigital(){
    cout<<"--- CEDULA DIGITAL ---"<<endl;
    cout<<" 1 - Candidato A "<<endl;
    cout<<" 2 - Canditado B "<<endl;
    cout<<" 3 - Candidato C " <<endl;
    cout<<" 5 - Voto nulo "<<endl;
    cout<<" 6 - Voto em Branco "<<endl;
    cout<<" 0 - sair "<<endl;
    int canditadoA=0;
    int canditadoB=0;
    int canditadoC=0;
    int votonulo=0;
    int votoembranco=0;
    int votos=0.0;
    int totalvotos=0;
    float percentagemvotosnulototal;
    float  percentagemvotosbrancototal;
   

    do{
        cout<<" informe o numero do seu candidato: ";
        cin>>votos;
        if(votos == 1){
            canditadoA++;
            totalvotos++;

        }else if(votos == 2){
            canditadoB++;
            totalvotos++;

        }else if(votos == 3){
            canditadoC++;
            totalvotos++;

        }else if(votos == 5){
            votonulo++;
            totalvotos++;

        }else if( votos == 6){
            votoembranco++;
            totalvotos++;

        }
    
    }while(votos>0);
        percentagemvotosnulototal=(votonulo/totalvotos)*100;
       percentagemvotosbrancototal=(votoembranco/totalvotos)*100;
        cout<<" O total de votos para o canditato A: "<<canditadoA<<endl;
        cout<<" O total de votos para o canditato B: "<<canditadoB<<endl;
        cout<<" O total de votos para o canditato C: "<<canditadoC<<endl;
        cout<<" O total de votos nulos: "<<votonulo<<endl;
        cout<<" O total de votos em branco: "<<votoembranco<<endl;
        cout<<" o total de votos da eleicao: "<<totalvotos<<endl;
        cout<<" A percentagem de votos nulos sobre o total de votos: "<<percentagemvotosnulototal<<endl;
        cout<< "A percentagem de votos em branco sobre o total de votos: "<<percentagemvotosbrancototal<<endl;
        


}  
int main(){

    CedulaDigital();









    return 0;
}