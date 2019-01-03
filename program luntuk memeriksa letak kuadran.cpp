#include <iostream>
using namespace std;
int main ()
{
    int x,y;
    cout<<"Program untuk menentukan letak kuadran dari nilai x dan y yang diinputkan"<<endl;
    cout<<"masukan nilai x : " ;
    cin>>x;
    cout<<"masukan nilai y : " ;
    cin>>y;
    if (x>0 && y>0)
        cout<<"KUADAN I"<<endl;
    if (x<0 && y>0)
        cout<<"KUADRAN II"<<endl;
    if (x<0 && y<0)
        cout<<"KUADRAN III"<<endl;
    if (x>0 && y<0)
        cout<<"KUADRAN IV"<<endl;
    return 0;
}
