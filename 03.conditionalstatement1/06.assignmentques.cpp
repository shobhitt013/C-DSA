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
    if (a<b){
        if(a<c){
            cout<<"a has the least marks";
        }
        else{// c>a, a>b -> c>a>b
            cout<<"c has the least marks";
        }
    }
    else{ // b>a
    if(b<c){
        cout<<"b has the least marks";
    }
    else{// c>b>a
         cout<< "c has the least marks";
    }
    }
return 0;
}