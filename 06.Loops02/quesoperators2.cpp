#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int lastdigit=0;
    int sum=0;
    while(n>0){
        lastdigit= n%10;
        sum += lastdigit;
        n/=10;

    }
    cout<<sum;
return 0;
}