#include<iostream>
using namespace std;
main()
{
    int n, num;
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    cout<<" enter ciunt of number :";
    cin >> n;
    for (int i =0;i<n; i++){
        cout <<"enter num";
        cin >>num;
        {if(num< 200){
            c1++;
        }
        else if(num<400){
            c2++;
        }
         else if(num<600){
            c3++;
    } else if(num<800){
            c4++;}
    }
   else {
            c5++;
        }} int setperision(2);
cout << "fixed "<< setperision(2);
cout  <<"p1"<<(c1*100.0 / n )<<"%"<<endl;
cout  <<"p2"<<(c2*100.0 / n )<<"%"<<endl;
cout  <<"p3"<<(c3*100.0 / n )<<"%"<<endl;
cout  <<"p4"<<(c4*100.0 / n )<<"%"<<endl;
cout  <<"p5"<<(c5*100.0 / n )<<"%"<<endl;
    }