#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    int m=n;
    if(n==m){
        cout<<"int "<<m;
    }
    else{
        cout<<"float "<<m<<" "<<n-m;
    }
}