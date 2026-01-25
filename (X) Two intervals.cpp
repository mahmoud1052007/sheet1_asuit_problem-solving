#include <bits/stdc++.h>
using namespace std;
int main(){
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    int L,R;
    L=max(l1,l2);
    R=min(r1,r2);
    if(L<=R){
        cout<<L<<" "<<R;
    }
    else{
        cout<<"-1";
    }
    
    return 0;
}