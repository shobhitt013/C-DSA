#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"No of Rows: ";
    cin>>size;
    
    for(int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){7
            cout<<j;
        }
        cout<<endl;
    }

return 0;
}