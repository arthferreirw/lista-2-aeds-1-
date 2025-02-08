#include <iostream>

using namespace std;

void TaxaDeCrescimento(float paisa, float paisb, float crescimentoanualpaisa, float crescimentoanualpaisb, float anos){
    
   cout<<" informe a populacacao a: ";
   cin>>paisa;
   cout<<" informe a populacao pais b: ";
   cin>>paisb;

   cout<<" informe o crescimento anual do pais a (em decimal): ";
   cin>>crescimentoanualpaisa;

   cout<<" informe o crescimento anual do pais b (informe em decimal): ";
   cin>>crescimentoanualpaisb;

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
 paisa=0;

 float paisb;
 paisb=0;

 float crescimentoanualpaisa;
 crescimentoanualpaisa=0;

 float crescimentoanualpaisb;
 crescimentoanualpaisb=0;

 float anos;
 anos=0;
 

TaxaDeCrescimento(paisa,  paisb, crescimentoanualpaisa,  crescimentoanualpaisb, anos);






    return 0;
}

