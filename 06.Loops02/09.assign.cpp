#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=500; i++){
        int x=0, temp=i;
        while(temp>0){
            int m= temp%10;
            x += m*m*m;
            temp/=10;
        }
        if(x==i){
            cout<<i<<endl;
        }

    }
return 0;
}