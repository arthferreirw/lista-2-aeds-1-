#include <iostream>
using namespace std;

void IntervaloNumeros(){
    int numeros=0.0;
    int box_0_25=0;
    int box_26_50=0;
    int box_51_75=0;
    int box_76_100=0;
    do{
        cout<<" informe os numeros: ";
        cin>>numeros;
     
        if(numeros>=0 && numeros<=25){
            box_0_25++;//box_0_25=box_0_25+1//

        }else if(numeros>=26 && numeros<=50){
            box_26_50++;


        }else if(numeros>=51 && numeros<=75){
            box_51_75++;


        }else if(numeros>=76 && numeros<=100){
            box_76_100++;


        }

    }while(numeros>=0);
        cout<<" INTERVALO [0-25]: "<<box_0_25<<endl;
        cout<<" INTERVALO [26-50]: "<<box_26_50<<endl;
        cout<<" INTERVALO [51-75]: "<<box_51_75<<endl;
        cout<<" INTERVALO [76-100]: "<<box_76_100<<endl;


}
 int main(){

    IntervaloNumeros();








    return 0;
 }