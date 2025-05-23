#include<iostream>
using namespace std;

int main(){
    cout<<"enter length: ";
    int l;
    cin>>l;
    cout<<"enter breadth: ";
    int b;
    cin>>b;
    
    int perimeter=  2*(l+b);
    int area= (l*b);
    if(area>perimeter)
    {
        cout<<" area is larger";
    }
    else{
        cout<<" perimeter is larger";
    }
}