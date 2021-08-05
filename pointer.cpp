#include<iostream>
using namespace std;
int main()
{
    int a;
    int *b = &a;
    int ** c = &b;
    cout<<"value of a is : "<<endl;
    cin>>a;
    cout<<"value of a is : "<<a<<endl;
    cout<<"value of a is : "<<*b<<endl;
    cout<<"value of a is : "<<**c<<endl;
    cout<<"value of b is : "<<b<<endl;
    cout<<"address of a is : "<<&a<<endl;
    cout<<"value of address of c is : "<<*c<<endl;
    cout<<"value of c is : "<<c<<endl;
    cout<<"value of c is : "<<&b<<endl;
    return 0;
    
}