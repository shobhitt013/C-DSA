#include<iostream>
using namespace std;

int main(){
    int c;
    cout<<"enter the number: ";
    cin>>c;
    bool flag= true; //true means prime
    for(int i=2; i<=c-1; i++){
        if(c%i==0){ //i is a factor of c
            flag= false; // false means composite
            //break;
        }
    }
    if(c==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<c<<" is a prime number";
    else cout<<c<<" is a composite";
    
return 0;
}