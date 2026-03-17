#include<iostream>
using namespace std;

main()
{
    int num=0,sum=0;

    while (num >=0)
    {
        cout<<"enter a number";
        cin>>num;

        if( num>=0)
        sum +=num;

    }
    cout << "sum:"<< sum<<endl;
}