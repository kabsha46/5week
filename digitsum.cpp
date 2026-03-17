#include<iostream>
using namespace std;
main()
{
    int number, sum=0, digitsum;
    cout << "enter number";
    cin>>number;
    if ( number < 0){
        number = -number;
    }
while ( number>0){
    sum +=number%10;
    number = number /10;
}
cout <<"sum of digits is:"<<digitsum<<endl;
}