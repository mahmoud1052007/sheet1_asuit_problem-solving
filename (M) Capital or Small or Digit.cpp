#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cin>>x;
    if(x>=65 && x<97){
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }
    else if(x>=97 && x<123){
        cout<<"ALPHA\nIS SMALL"<<endl;
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }
}
