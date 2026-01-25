#include <bits/stdc++.h>
using namespace std;
int main(){
    char s,q;
    int a,b,c;
    cin>>a>>s>>b>>q>>c;
    int w=a+b ,e=a-b ,r=a*b;
    if(s=='+'){
        if(c==w){
            cout<<"Yes";
        }else{
            cout<<w;
        }
    }
    else if(s=='-'){
        if(c==e){
            cout<<"Yes";
        }else{
            cout<<e;
        }
    }
    else if(s=='*'){
        if(c==r){
            cout<<"Yes";
        }else{
            cout<<r;
        }
    }
    return 0;
}