#include <iostream>

using namespace std;




int InformadorDeNotas1(int nota){

    for(int i=0; i<=nota; i=i+1){
        if(nota<0){
            
        cout<<" nota invalida "<<endl;


        }else{



        }
        cout<<" informe a nota: ";
        cin>>nota;
}
}




int main (){
    int nota;
    InformadorDeNotas1(nota);





    return 0;
}