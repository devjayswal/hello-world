/*here is a solution of problem name two pointer three sum 
problem:- given an array and a vcalaue ,
 find if there exists three numbers 
 whose sum id equal to the given value*/
 #include<bits/stdc++.h>
 using namespace std;
  int main(){cout<<"input size of array"<<endl;
     int n; cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     label:
     int m; 
    cout<<"plese enter set size after that \n plese enter value which you want to cheak"<<endl;
    cin>>m;
    int brr[m];
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
        if(arr[i]==brr[j]){ans++;}
    }}
    if(ans==m){cout<<"yes these value in array";}
    
    else{cout<<"no these is not found in array";}

  



  }