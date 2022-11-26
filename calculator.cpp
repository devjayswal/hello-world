#include<iostream>
#include<cmath>
using namespace std;

int main(){
  label:
  clr
    cout<<"enter number A"<<endl;
    int a;
    cin>>a;
    cout<<"enter oprator like +,-,*,/"<<endl;
    char c;
    cin>>c;
        cout<<"enter number B"<<endl;
    int b;
    cin>>b;
    switch (c)
    {
    case '+':{cout<<"the sum of A and B is ="<<a+b<<endl; break;}
    case '-':{cout<<"the difference between A and B is"<<a-b<<endl; break;}
    case '*':{cout<<"the multiple of these to number is"<<a*b<<endl;break;}
    case '/':{cout<<"A divide by B is equal to "<<a/b<<endl;break;}
    case '^':{cout<<"A to the power of B is "<<pow(a,b)<<"\n"<<endl; break;}
    
    default: cout<<"invalid oprator plese choose another one "<<endl;
        break;
    }

 goto label;
    return 0;
}