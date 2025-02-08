#include <iostream>

using namespace std;

void GeradorDeTabuada(){
    int n=0.0;
    int produto=0.0;
    do{
        cout<<" TABUADA DE: ";
        cin>>n;
        if(n>10 || n<0){
        cout<<" TABUADA DE (0-10): ";
        cin>>n;
        }


    }while(n>10 || n<0);

   
    for(int i=1; i<=10; i=i+1){
        produto=n*i;
        
        cout<<n<<" X "<<i<<" = "<<produto<<endl;
        


    }
}
int main(){

    GeradorDeTabuada();




    return 0;
}




