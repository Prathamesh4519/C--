#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
     if(arr[i]>max){
         max=arr[i];
     }
     else if(arr[i]<min){
         min=arr[i];
     }
    }
    cout<<"The max is "<<max<<" and the min is "<<min;
    return 0;
}