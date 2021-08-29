#include<iostream>
using namespace std;

class employee {
    public:
    float salary;
    int id;
        employee(int inpid) {
            id = inpid;
            salary = 34.0;
        }
        employee() {}
};

class programmer : public employee {
    public :
    programmer(int inpid) {
        id = inpid;
    }
    int language = 9;
    void getdata() {
        cout<<id<<endl;
    }
};

int main() {
  employee harry(56),merry(9);
  cout<<harry.salary<<endl;
  cout<<merry.salary<<endl;  

  programmer skillf(5);
  cout<<skillf.language<<endl;
    cout<<skillf.id<<endl;
  skillf.getdata();
    return 0;
}