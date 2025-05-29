#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
 string n;
 cout<<"Enter a word \n";
 getline(cin,n);
 int x=n.length();
 for(int i=x-1;i>=0;i--){
     cout<<n[i];
 }
reverse(n.begin(),n.end());
cout<<"\n"<<n;
 return 0;
}