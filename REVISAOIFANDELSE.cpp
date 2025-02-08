#include <iostream>

using namespace std;

void CompararNumerosColocarEmOrdem(){
    int i=0;
    float a=0.0;
    float b=0.0;
    float c=0.0;
   
    cout<<" defina o valor de i: ";
    cin>>i;
   
    
    cout<<" defina o valor de a: ";
    cin>>a;
    
    cout<<" defina o valor de b: ";
    cin>>b;

    cout<<" defina o valor de c: ";
    cin>>c;


    if(i==1){
        cout<<" Ordem crescente "<<endl;
        if(a<b && b<c){
            cout<<a<<b<<c;
        }
        if(b<a && a<c){
            cout<<b<<a<<c;
        }
        if(c<b && b<a){
            cout<<c<<b<<a;
        }
        if(c<a && a<b){
            cout<<c<<a<<b;
        }
        if(a<c && c<b){
            cout<<a<<c<<b;
        }
        if(b<c && c<a){
            cout<<b<<c<<a;
        }
    }
    if(i==2){
        cout<<" Ordem Decrescente" <<endl;
        if(a>b && b>c){
            cout<<a<<b<<c;
        }
        if(b>a && a>c){
            cout<<b<<a<<c;
        }
        if(c>b && b>a){
            cout<<c<<b<<a;
        }
        if(c>a && a>b){
            cout<<c<<a<<b;
        }
        if(a>c && c>b){
            cout<<a<<c<<b;
        }
        if(b>c && c>a){
            cout<<b<<c<<a;
        }
    }
    if(i==3){
        cout<<" O maior numero fica no meio "<<endl;
        if(b<a && a>c){
            cout<<b<<a<<c<<endl;
        }
        if(a<b && b>c){
            cout<<a<<b<<c<<endl;
        }
        if(a<c && c>b){
            cout<<a<<c<<b<<endl;
        }


    }
}
int main(){

    CompararNumerosColocarEmOrdem();






    return 0;
}






