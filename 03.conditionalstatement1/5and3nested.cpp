#include<iostream>
using namespace std;

int main(){
    cout<<"enter an integer ";
    int i;
    cin >>i;
    if (i%5==0){
    if( i%3==0){
        cout<<"number is divisible by both ";
    }  
    else{
        cout<<"not matching condition";
    }
    }
    else{
        cout<<"not matching condition";
    }

    return 0;
}