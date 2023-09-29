#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count=0;
    int a[]={8,8,6,7,9,8,6,7,1};
    cout<<a.size();
    for(int i=0;i<9;i++){
        for(int j=1;j<9;j++){
            if(a[i]==a[j]){
                count+=1;
                if(count>2){
                    a[i]=a[j];
                }
            }
        }
        count=0;
    }
    for(auto i:a){
        cout<<i;
    }
    

    return 0;
}

