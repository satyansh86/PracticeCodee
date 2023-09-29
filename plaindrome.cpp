#include<bits/stdc++.h>
using namespace std;

string check(string str){
    int s=0;
    int e=str.size()-1;
    while(e>s){
        if(str[e]!=str[s]){
            return "Not Palindrome";
        }
        s++;
        e--;
    }
    return "Palindrome";
}
int main(){
    int n;
    cin>>n;
    string str=to_string(n);
    cout<<check(str);
}
