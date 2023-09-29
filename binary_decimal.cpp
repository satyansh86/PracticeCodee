#include<bits/stdc++.h>
using namespace std;
vector<int> d_binary(int n){
    vector<int> bin;
    while(n>0){
        bin.push_back(n%2);
        n=n/2;
    }
    for(int i=bin.size()-1;i>=0;i--){
        //here if we are starting from i=bin.size(),then error occurs maybe due to last garbage value or something
        cout<<bin[i];
    }
    cout<<endl;
    return bin;
}
void b_decimal(vector<int> bin){
    for(int i=bin.size();i<32;i++){
        bin.push_back(0);
    }
     for(int i=0;i<bin.size();i++){
        cout<<bin[i];
    }
    int dec=0;
    for(int i=31,j=0;i>=0,j<32;i--,j++){
        
        dec+=bin[i]*pow(2,j);
    }
    cout<<endl<<dec;
}

int main(){
    int n;
    cout<<"Enter deciaml number:";
    cin>>n;
    //d_binary(n);
    b_decimal(d_binary(n));
    
}