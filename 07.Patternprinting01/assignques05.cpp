#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"No of Rows: ";
    cin>>n;
    //printing upper triangle
    for(int i=0; i<n; ++i){
        for(int j=0; j<=i; ++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    
    // prnting lower triangle
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i-1; ++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }}
