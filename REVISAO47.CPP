#include <iostream>

using namespace std;

void SumulaDigital(){
    float nota=0;
    float melhor_nota=0;
    float pior_nota=999;
    for(int i=1; i<=7; i=i+1){
        cout<<" nota: ";
        cin>>nota;
        if(nota>melhor_nota){
            melhor_nota=nota;
        }
        if(nota<pior_nota){
            pior_nota=nota;
        }
    }
    float media=0;
    media=nota/7;
    cout<<"--- RESULTADO FINAL---"<<endl;
    cout<<" melhor nota: "<<melhor_nota<<endl;
    cout<<" pior nota: "<<pior_nota<<endl;
    cout<<" media: "<<media<<endl;

}
int main(){




    SumulaDigital();




    return 0;
}