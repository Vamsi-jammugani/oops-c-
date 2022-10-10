#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,i,sum=0;      
    cout<<"Enter a positive integer: ";
    cin>>num;              
    i=1;
do{     
    sum+=i;
     i++;
}
    while(i<=num);
cout<<"Sum of natural numbers are: "<<sum;      
    getch();
    return 0;
}