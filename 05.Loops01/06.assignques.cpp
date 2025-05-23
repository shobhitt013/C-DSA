//#include<iostream>
//using namespace std;

//int main(){
  //  for(int i=65; i<=90; i++){
   //     cout<<(char)i<<" "<<i<<endl;
    //}
//return 0;
//}
#include <iostream>
using namespace std;
int main() {
int i=0;
while (i < 26) {
cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << 
endl;
i++;
}
}