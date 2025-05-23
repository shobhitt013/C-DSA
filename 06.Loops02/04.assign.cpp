#include<iostream>
using namespace std;

int main(){
    int x=10, y=0;
    while(x>=y){
        x--;
        y++;  //10,0; 9,1; 8,2; 7,3; 6,4; 5,5 (6 times)
        cout<<x<<" "<<y<<endl;
    }
return 0;
}