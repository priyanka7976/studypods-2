#include<iostream>
using namespace std;

class employee{
    int id;
    public:
    void setId() {
        // salary = 122;
        cout<<"enter your employee id "<<endl;
        cin>>id;
    }

    void getId() {
        cout<<"this is the id of employee "<<id<<endl;
    }
};

int main()
{
    employee fb[12];

    // can also do by using for loop
    fb[0].setId();
    fb[0].getId();

    fb[1].setId();
    fb[1].getId();
    
    fb[2].setId();
    fb[2].getId();

    fb[3].setId();
    fb[3].getId();

    fb[4].setId();
    fb[4].getId();

    fb[5].setId();
    fb[5].getId();

    return 0;
}