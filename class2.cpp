#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter()  { counter = 0; }
        void setPrice();
        void displayPrice();

};
void shop :: setPrice()
{
    cout<<"enter yuor item number and Id : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter your itam price : "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void shop :: displayPrice() {
    for( int i = 0; i< counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i];
    }

}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}
