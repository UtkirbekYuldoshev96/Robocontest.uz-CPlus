#include <iostream>

using namespace std;


int addPlus(int a, int b){
    int r;
    r=a+b;
    return r;
}
int main()
{
    int n,m,a;
    cout<<" A = "; cin>> n;
    cout<<" B = "; cin>> m;
    a=addPlus(n,m);
    cout<<"a + b = "<<a<<endl;
    return 0;
}
