#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for (int i = 0; i <n; i++)
 {
     cout<<arr[i]<<" ";
 }
}
int main(){
     int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubblesort(arr,n);
}
