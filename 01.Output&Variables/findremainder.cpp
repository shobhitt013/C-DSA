#include<iostream>
using namespace std;

int main(){
    int a=16; // a means dividend
    int b=3;//b means divisor
    int r;//r means remainder
    int q;//q means quotient
    q=a/b;
    //a=(b*q)+r
    r=a-(b*q);
    cout<<r;


return 0;
}