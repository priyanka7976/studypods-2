#include<iostream>
using namespace std;
typedef struct employee
{
    int sno;
    char name;
    float money;
};
int main()
{
    struct employee shubam;
    struct employee rohan;
    shubam.sno = 1;
    shubam.name = 's';
    shubam.money = 20.85;
    rohan.sno = 2;
    rohan.name = 'e';
    rohan.money = 80.45;
    cout<<"the value of s no. is : "<<shubam.sno<<endl;
    cout<<"the value of name is : "<<shubam.name<<endl;
    cout<<"the value of money is : "<<shubam.money<<endl;
    cout<<"the value of s no. is : "<<rohan.sno<<endl;
    cout<<"the value of name is : "<<rohan.name<<endl;
    cout<<"the value of money is : "<<rohan.money<<endl;
    return 0;
}
