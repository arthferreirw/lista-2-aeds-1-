#include <iostream>

using namespace std;

void CalculoFatorial(){
    int n=0.0;
    int produto=1;
    cout<<" FATORIAL DE: ";
    cin>>n;
    cout<<n<<"!"<<" = ";
    for(int i=1; i<=n; i=i+1){
        produto=produto*i;
        cout<<i<<".";
        
        
    }
     cout<<" = "<<produto<<endl;
}
int main(){
    CalculoFatorial();


    return 0;
}



