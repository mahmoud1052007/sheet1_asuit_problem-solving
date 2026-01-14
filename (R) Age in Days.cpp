#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<x/365<<" years"<<endl;;
    x%=365;
    cout<<x/30<<" months"<<endl;
    cout<<x%30<<" days"<<endl;
}