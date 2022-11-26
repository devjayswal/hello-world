/*here is a solution of problem name two pointer three sum 
problem:- given an array and a vcalaue ,
 find if there exists three numbers 
 whose sum id equal to the given value*/
 #include<bits/stdc++.h>
 using namespace std;
  int main(){cout<<"input size of array"<<endl;
     int n; cin>>n;
     cout<<"input element of array"<<endl;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     };
     int target;
     cout<<"plese enter target"<<endl;
     cin>>target;
     
    
    bool ans=false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n; j++){
         for(int k=j+1;k<n;k++){
       if(arr[i]+arr[j]+arr[k]==target){ ans=true;}
    }}}
    if(ans==true){cout<<"yes these value sum is  in array";}
    
    else{cout<<"no these value sum is not found in array";}

  



  }