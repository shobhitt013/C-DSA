#include<iostream>
using namespace std;

int main(){
    cout<<"enter a positive integer: ";
    int i;
    cin>>i;
    if (i%5==0 || i%3==0) 
    //if condition1 is already true, then compiler won't check for condition2
    {
        cout<<"divisible";
    }
    else{
        cout<<"not divisible";
    }
    

return 0;
}