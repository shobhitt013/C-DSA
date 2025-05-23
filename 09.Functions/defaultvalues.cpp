#include<iostream>
using namespace std;
void fun(int x=7, int y=8){ // default values of x and y are 7 & 8
     cout<<x<<" "<<y; 
}

int main(){
    int x=4; // but updated here in this call
    int y=8;
    fun(x,y);
return 0;
}