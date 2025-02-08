#include <iostream>

using namespace std;

void SequenciaFibonacci(){
    int proxnum=0.0;
    int antigonum1=1.0;
    int antigonum2=1.0;
    int n=0.0;
    cout<<" decida ate qual numero a sequencia ira: ";
    cin>>n;
    cout<<" 1 , 1 ";
    for(int i=1; i<=n; i=i+1){
        proxnum=antigonum1+antigonum2;
        antigonum1=antigonum2;
        antigonum2=proxnum;
        cout<<proxnum<<" , ";
    }
    

}
int main(){
    SequenciaFibonacci();




    return 0;
}