#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf=1;
    // 24 60
    // i=24, 23, 22, 21,......1
    for(int i=min(a,b); i>=1; i--){
        if(a%i==0 && b%i==0){ // i is a common factor
            hcf=i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a;
    cout<<"enter first number: ";
    cin>>a;
    int b;
    cout<<"enter second number: ";
    cin>>b;
    cout<<gcd(a,b);
return 0;
}