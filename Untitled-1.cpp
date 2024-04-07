#include <iostream>
#include <string>
using namespace std;
int main() 
{
    float temp;
    char choice;
    cout<<"Enter the temperature value:";
    cin>>temp;
    cout<<"Enter 'c' for Celsius or 'f' for Fahrenheit:";
    cin>>choice;
    if (choice=='c')
    {
        float celsius=(temp-32)*5/9;
        cout<<"Temperature in Celsius:"<<celsius<<" c"<<endl;
    } 
    else if (choice=='f') 
    {
        float fahrenheit=(temp*9/5)+32;
        cout<<"Temperature in Fahrenheit:"<<fahrenheit<<" f"<<endl;
    } 
else 
{
        cout<<"Invalid choice! Please enter 'c' for Celsius or 'f' for Fahrenheit."<<endl;
    }
    return 0;
}
