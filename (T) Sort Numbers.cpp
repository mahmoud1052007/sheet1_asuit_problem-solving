#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min({a,b,c});
    int mx=max({a,b,c});
    int md;
    md=a+b+c-mn-mx;
    cout<<mn<<endl;
    cout<<md<<"\0"<<endl;
    cout<<mx<<endl;
    cout<<"\n";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}