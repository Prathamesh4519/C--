#include <iostream>
#include <string>
using namespace std;


int main(){
int n;
cout<<"Enter the number of rows:";
cin>>n;
for(int i=0;i<n;i++){
     for(int j=0;j<n-i+1;j++){
        cout<<" ";
    }
    for(int k=0;k<=2*i;k++){
        cout<<"*";
    }
    cout<<"\n";
}
    return 0;
}