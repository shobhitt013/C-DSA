#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"No of Rows: ";
    cin>>size;
    
    for(int i=0; i<size; ++i){
        for(int j=0; j<size-i-1; ++j){
        cout<<" ";
        }
            for(int j=1; j<=i+1; ++j){
            cout<<(char)('A'+j-1)<<" ";
        }
        cout<<endl;
    }

return 0;
}