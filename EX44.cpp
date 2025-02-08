#include<iostream>
using namespace std;

void imprimeCedula(){
		cout << "------------------------- " << endl;
		cout << "       Cedula digital     " << endl;
		cout << "------------------------- " << endl;
		cout << "1 - Candidato A " << endl;
		cout << "2 - Candidato B " << endl;
		cout << "3 - Candidato C " << endl;
		cout << "4 - Voto Nulo   " << endl;
		cout << "5 - Voto Branco   " << endl;
		cout << "0 - Sair   " << endl;
		cout << "------------------------- " << endl;
		cout << "Escolha uma opção:";
}
int main (){
    float a=0;
    float b=0;
    float c=0;
    float nulos=0;
    float brancos=0;
    int opcao=0;
    do{
        imprimeCedula();
        cin>>opcao;

        switch(opcao){
            case 1:
            a=a+1;

            case 2:
            b=b+1;

            case 3:
            c=c+1;

            case 4:
            nulos=nulos+1;

            case 5:
            brancos=brancos+1;

            default:
            cout<<" Voce escolheu uma opcao invalida ";
            nulos=nulos+1;

        }

    }while(opcao != 0);
    float totalvotos=a+b+c+brancos+nulos;
    	cout << "------- Resultado final --------" << endl;
		cout << "- Candidato A: " << a << " votos" << endl;
		cout << "- Candidato B: " << b << " votos" << endl;
		cout << "- Candidato C: " << c << " votos" << endl;
		cout << "- Total nulos: " << nulos << " votos" << endl;		
		float percentualNulos = (nulos/totalvotos) * 100.0;
		cout << "- Percentual de votos nulos:" << percentualNulos << endl;
		float percentualBrancos = (brancos/totalvotos) * 100.0;
		cout << "- Percentual de votos brancos:" << percentualBrancos << endl;

		return 0;
}






        







    




