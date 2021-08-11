#include<iostream>
using namespace std; 
void swappoint(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    // cout<<"hello";
    
}
int main()
{
    int a=2,b=8;
    // cout<<"enter values : "<<endl;
    // cin>>a;
    // cin>>b;
    cout<<"before swap value is : "<<a<<endl<<b<<endl;
    swappoint(&a,&b);
    cout<<"after swap vaalue is : "<<a<<endl<<b;
    return 0;
}
