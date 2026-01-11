#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double r;
    cin>>r;
    long double area=3.141592653*r*r;
    cout << fixed << setprecision(9)<<area<<endl;
    return 0;
}