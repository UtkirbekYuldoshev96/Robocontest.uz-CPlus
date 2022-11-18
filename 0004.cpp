#include <iostream>

using namespace std;

int Galam(int n, int p){
    float z;
    z = n * p;
    cout<< "Siz xaridingiz summasi : "<<z<<" so'm"<<endl;
}
int main()
{
    int a,b;
    cout<<"Metrdi kiriting: "; cin>>a;
    cout<<"Galamni narxi kiriting: "; cin>>b;
    Galam(a,b);
    return 0;
}
