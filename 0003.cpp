#include <iostream>

using namespace std;

class AddPlas{
public:
    int a;
    int b;

    void Plus(int x, int y){
        a=x;
        b=y;

        cout<<" OPP bilan ishlaydi ( Qo'shish ) = "<< a + b<<endl;
    }
};


int main()
{
    AddPlas A;

    int a1,b1;
    cout<< " Son kiriting : "; cin>> a1;
    cout<< " Son kiriting : "; cin>> b1;
    A.Plus(a1,b1);
    return 0;
}
