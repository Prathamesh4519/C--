#include <iostream>
#include <string>
using namespace std;
int main(){
 int n,x=0,y=1,z;
 cout<<"Enter a number \n";
 cin>>n;
 if(n==1){
     cout<<x;
 }
else if(n==2){
     cout<<x<<" "<<y;
 }
 
 else{
     cout<<x<<" "<<y;
for(int i=0;i<n;i++){
    z=x+y;
    x=y;
    y=z;
    cout<<" "<<z;
}
}
 return 0;
}