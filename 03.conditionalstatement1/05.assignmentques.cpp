#include<iostream>
using namespace std;

int main(){
    int s1, s2, s3;
cout<<" enter s1, s2 and s3: ";
cin>>s1>>s2>>s3;
if(s1==s2 && s2==s3) {
    cout<<"triangle is equilateral";
}
else if(s1==s2 || s2==s3 || s1==s3){
    cout<<"triangle is isosceles";
}
else
    cout<<"triangle is scalene";

return 0;
}