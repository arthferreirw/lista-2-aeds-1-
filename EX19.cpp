#include <iostream>

using namespace std;

int FatorialNumero(int num, int f){

   
    cout<<" qual numero voce deseja ver o fatorial?   ";
    cin>>num;
    

    cout<<"fatorial de: "<<num<<endl;
    cout<<num<<"!"<<" = ";

    for (int i=1; i<=num; i=i+1){
    f*= i;
    cout<<i<<".";
  
}
    cout<<" = "<<f;
    
return f;
}
int main(){

int num=0;
int f=1;

FatorialNumero(num, f);



return 0;
}