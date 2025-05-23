//a=97,  A=65,  0=48
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    //a to z= 97 to 122
    //Ato Z= 65 to 90
    //cout<<ch<<endl;
    //cout<<(int)ch;
    int ascii= (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
        cout<<"The character is an alphabet";
    }
    else{
        cout<<"The character is not an alphabet";
   
}
}