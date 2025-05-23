#include<iostream>
using namespace std;

int main(){
    cout<<"enter a positive integer: ";
    int n;
    cin>>n;
    if (n%5==0 && n%3==0) // dono condition true hogi tbhi && kaam krega nahi toh code run nahi krega!!
    //if 1st condition is false then compiler won't check for condition2
    {
       cout<<"divisible by both";
    }
    else {
        cout<<"not divisble by both";
    }
    
return 0;
}