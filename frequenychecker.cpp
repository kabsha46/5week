#include<iostream>
using namespace std;
main()
{
    int number ,digit,count=0;
    if( number<0)
    {
        number =-number;
    }
    if(number==0){
        if(digit ==0)
        return 1;
else 
return 0;
    }
 while( number>0){
    int  lastdigit = number %10;
    if( lastdigit = digit)
    count++;
 }
}