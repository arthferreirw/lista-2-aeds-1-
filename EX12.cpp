#include <iostream>

using namespace std;

void TaxaDeCrescimento(float paisa, float paisb, float crescimentoanualpaisa, float crescimentoanualpaisb, float anos){
    
    paisa=80000;
    crescimentoanualpaisa=0.03;
    paisb=200000;
    crescimentoanualpaisb=0.015;
    anos=0;

    while(paisa<=paisb){

    anos=anos+1;
    paisa=(paisa*crescimentoanualpaisa)+paisa;
    paisb=(paisb*crescimentoanualpaisb)+paisb;

    }
    cout<<" a quantidade de anos para que o pais a ultrapasse o pais b eh de: "<<anos<<endl;
   }   
int main (){

float paisa;
 paisa=80000;

 float paisb;
 paisb=200000;

 float crescimentoanualpaisa;
 crescimentoanualpaisa=0.03;

 float crescimentoanualpaisb;
 crescimentoanualpaisb=0.015;

 float anos;
 anos=0;

TaxaDeCrescimento(paisa,  paisb, crescimentoanualpaisa,  crescimentoanualpaisb, anos);






    return 0;
}






