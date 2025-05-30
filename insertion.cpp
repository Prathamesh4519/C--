#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
     for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

for(int i = 0; i <n; i++)
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
    insertionsort(arr,n);
}
