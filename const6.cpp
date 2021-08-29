#include<iostream>
using namespace std;

class deposite{
    int principal;
    int year;
    float interestRate,returnValue;

    public:
    deposite(){}
    deposite(int p,int y,float r);
    deposite(int p,int y,int R);
    void show();

};

deposite :: deposite(int p,int y,float r) {
    principal = p;
    year = y;
    interestRate = r;

    returnValue = principal;
    for(int i =0; i<y; i++) {
        returnValue = returnValue*(1+r); 
    }
}

deposite :: deposite(int p,int y,int R) {
    principal = p;
    year = y;
    interestRate = R/100;

    returnValue = principal;
    for(int i =0; i<y; i++) {
        returnValue = returnValue*(1+interestRate); 
    }
}

void deposite :: show() {
    cout<<"principal amount was :  "<<principal<<"  return value after  "<<year<<"  years is :  "<<returnValue<<endl;
}

int main() {
    deposite d1,d2,d3;
    int p,y;
    float r;
    int R;
    cout<<"enter valve of principal,years and rate  "<<endl;
    cin>>p>>y>>r;
    d1 =deposite(p,y,r);
    d1.show();

    cout<<"enter valve of principal,years and rate  "<<endl;
    cin>>p>>y>>R;
    d2 =deposite(p,y,R);
    d2.show();
    return 0;
}














