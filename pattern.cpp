#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        int spc=(n-i)*2;
        for(int j=spc;j>=1;j--){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<" ";
            cout<<k;
            k+=1;
        }
        cout<<endl;
    }
     

}
