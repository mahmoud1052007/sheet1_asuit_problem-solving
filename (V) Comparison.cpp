#include <bits/stdc++.h>
using namespace std;
int main(){
    char s;
    int x,y;
    cin>>x>>s>>y;
    if(x>y && s=='>'){
        cout<<"Right";
    }
    else if(x>y && s=='<'){
        cout<<"Wrong";
    }
    else if(x<y && s=='>'){
        cout<<"Wrong";
    }
    else if(x<y && s=='<'){
        cout<<"Right";
    }
    else if(x==y && s=='='){
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
    return 0;
}