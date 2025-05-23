#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int temp=n, x=0;
    while(temp>0){
        x*=10;
        x+= (temp%10);
        temp/=10;
    }
    cout<<n+x<<endl;

return 0;
}