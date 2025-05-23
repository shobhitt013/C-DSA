#include<iostream>
using namespace std;

int main(){
    cout<<"enter a number: ";
    int n;
    cin>>n;
    if (n>=100 && n<=999)//&& called logical and, used to give multiple conditions
    
    {
        cout<<"three digit number";
    }
    else{
        cout<<"not a three digit number";
    }

return 0;
}