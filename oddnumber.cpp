#include<iostream>
using namespace std;
 int main(){
    cout<<"plese enter lower and upper limits\n";
    int u,l;
    cin>>u>>l;
    for(int i=u;i<=l;i++){
        if(i%2==0){continue;}
        else{cout<<i<<" , ";}
    }
    return 0;
 }