#include <iostream>
#include <string>
using namespace std;
int main(){
 int n,x=0,y,z;
 cout<<"Enter a number \n";
 cin>>n;
 z=n;
while(n!=0){
    y=n%10;
    x=x+(y*y*y);
    n=n/10;
}
if(x==z){
    cout<<"Its a armstrong number";
}
else{
    cout<<"Its not a armstrong number";
}
 return 0;
}