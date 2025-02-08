#include <iostream>

using namespace std;

int InformadorDeNotas (int nota){

    cout<<" informe uma nota (0-10): ";
    cin>>nota;

    switch (nota){
    
    case 0:
    cout<<" nota válida! "<<endl;
    break;

    case 1:
    cout<<" nota válida!"<<endl;
    break;

    case 2:
    cout<<" nota válida!"<<endl;
    break;

    case 3:
    cout<<" nota válida!"<<endl;
    break;

    case 4:
    cout<<" nota válida!"<<endl;
    break;

    case 5:
    cout<<" nota válida!"<<endl;
    break;

    case 6:
    cout<<" nota válida!"<<endl;
    break;

    case 7:
    cout<<" nota válida!"<<endl;
    break;

    case 8:
    cout<<" nota válida!"<<endl;
    break;

    case 9:
    cout<<" nota válida!"<<endl;
    break;

    case 10:
    cout<<" nota válida!"<<endl;
    break;

    case 11:
    cout<<" nota válida!"<<endl;
    break;

    default:
    cout<<" ERRO: informe uma nota entre (0-10) "<<endl;
    break;

    }
    return nota;
}
int main (){

    int nota;
    nota=0;
    InformadorDeNotas (nota);






    return 0;
}


