#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: "; // fibonacci series
    cin>>n;
    int f0=0, f1=1;
    cout<< f0 <<" "<< f1<<" ";
    for (int i=3; i<=n; i++){
        int next= f0+f1;
        cout<<next<< " ";
        f0=f1;
        f1=next;
    }
return 0;
}
