#include<iostream>
using namespace std;

int main(){
    cout<<"enter first number: ";
    int a;
    cin>>a;
    cout<<"enter second number: ";
    int b;
    cin>>b;
    cout<<"enter third number: ";
    int c;
    cin>>c;
    if (a>b && a>c)
    {
       cout<<a<<" is largest";
    }
    if (b>a &&b>c)
    {
        cout<<b<<" is largest";
    }
    if (c>a && c>b)
    {
        cout<<c<<" is largest";
    }
return 0;
}