#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
        void setData(){
            cout<<"Enter id of employee is : "<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"the id of employee is : "<<id<<" and this is employee number "<<count<<endl;

        }
        static void getCount(){
            cout<<"the value of count is : "<<count<<endl;  //there is only static variables decalaration
        }
};

int employee :: count; // default static variable is intialize by 0

int main()
{
    employee p,r,s;
    p.setData();
    p.getData();
    employee ::getCount();

    r.setData();
    r.getData();
    employee ::getCount();
    
    s.setData();
    s.getData();
    employee ::getCount();
    
    return 0;
}
