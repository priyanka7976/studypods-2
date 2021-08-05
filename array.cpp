// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[] = {2,7,8,89};

    // print one by one value
    // cout<<"first number is : "<<marks[0]<<endl;
    //  cout<<"second number is : "<<marks[1]<<endl;
    //   cout<<"third number is : "<<marks[2]<<endl;
    //    cout<<"forth number is : "<<marks[3]<<endl;




//     // using for loop
//     for(int i=0;i<3;i++)
//     {
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }










                           //  array and pointer 
#include<iostream>
using namespace std;
int main()
{
    int marks[] = {5,85,2,0};
    int *p = marks;
    for(int i=0;i<4;i++)
    {
    cout<<"the value of marks is : "<<*(p+i)<<endl;
     }
    return 0;
}

