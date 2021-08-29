#include<iostream>
using namespace std;

class point{
    int a,b;
    public:
        point(int x, int y) {
            a = x;
            b = y;
        }
        void display(){
            cout<<"the point is : ("<<a<<","<<b<<")"<<endl;
        }
}; 

int main() {
    point p(8,6),r(9,0);
    r.display();
    p.display();
    return 0;
}