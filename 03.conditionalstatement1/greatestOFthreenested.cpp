#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"enter third number: ";
    cin>>c;
    if (a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{// c>a, a>b -> c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{ // b>a
    if(b>c){
        cout<<b<<" is greatest";
    }
    else{// c>b>a
         cout<<c<< " is greatest";
    }
    }
return 0;
}