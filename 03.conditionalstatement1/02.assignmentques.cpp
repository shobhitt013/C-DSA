#include<iostream>
using namespace std;

int main(){
    cout<<"enter radius: ";
    float r;
    cin>>r;
    float pi=3.14;
    float circumference=2*pi*r;
    float area= pi*r*r;
    if(area>circumference)
    {
        cout<<area<<" area is larger";
    }
    else{
        cout<<circumference<<" circumference is larger";
    }
}