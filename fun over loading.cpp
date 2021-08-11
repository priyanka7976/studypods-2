/* #include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    cout<<"this is 3 terminal device"<<endl;
    return a*b*c;
}
int sum(int p,int q)
{
    cout<<"this is 2 terminal device"<<endl;
    return p*q;
}
int main()
{
    cout<<"the sum of 4 & 5 is : "<<sum(4,5)<<endl;
    cout<<"the sum of 2,5 and 4 is : "<<sum(2,5,4);
    return 0;
}
*/










#include<iostream>
using namespace std;
int si(int money, float rate = 1.0)
{
    return money*rate;
}
int main()
{
    int money;
    cout<<"total money is : ";
    cin>>money;
    cout<<"if you are a simple people then your sipmle interest is : "<<si(money)<<endl;
    cout<<"if you are a rich people then your sipmle interest is : "<<si(money,1.2); 
    return 0;
}
