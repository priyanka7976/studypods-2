#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age : "<<endl;
    cin>>age;

    if(age>18)
    {
        cout<<"you can go to party ";
    }
    else{
        if(age==18)
        {
            cout<<"you can go to party by a special pass";
        }
        else
        {
            cout<<"you can not go to party";
        }
    }
    return 0;
}