#include <iostream>

using namespace std;

int bolshoy(int a, int b){
    if(a>b){
        cout<<"x katta >"<<endl;
    }else if(a == b){
        cout<<"x = y teng"<<endl;
    }else {
        cout<<"y katta <"<<endl;
    }
}

int main(){
    int x,y,z;
    cout<<" X = "; cin>> x;
    cout<<" Y = "; cin>> y;
    z=bolshoy(x,y);
    return 0;
}
