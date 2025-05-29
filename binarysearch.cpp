#include <iostream>
using namespace std;
int binarysearch(int a[],int l,int r,int x){
    while(l<=r){
        int m=l+r/2;
        if(a[m]==x){
            return m;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else if(a[m]<x){
            l=m-1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout<<"Enter the number to be searched";
    cin>>x;
    int result=binarysearch(arr,0,n-1,x);
    (result==-1)?cout<<"The number is not present in the array":cout<<"The number is present at "<<result;

    return 0;
}
