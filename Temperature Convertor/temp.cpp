#include<iostream>
using namespace std;
int main()
{
    float frh,cel;
    cout<<"Enter the temperature in Fahrenheit : ";
    cin>>frh;
    cel=(frh-32)*5/9;
    cout<<"\nThe temperature in Fahrenheit:"<<frh;
    cout<<"\nThe temperature in Celsius:"<<cel;
    cout<<endl;
    return 0;
    }