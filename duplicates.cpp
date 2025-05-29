#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newSize = n;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; ) {
            if (arr[i] == arr[j]) {
              
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;  
            } else {
                j++;
            }
        }
    }
    for(int i=0;i<newSize;i++){
        cout<<arr[i];
    }
    return 0;
}
