#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"no. of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //hashes
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // stars
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }
return 0;
}