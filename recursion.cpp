#include <iostream>
using namespace std;

// Recursive function to find sum of array elements
int arraySum(int arr[], int n) {
    // 1. Base Case: Agar array ka size 0 ho gaya, sum 0 hai
    if (n <= 0) {
        return 0;
    }
    // 2. Recursive Case: Last element + sum of remaining (n-1) elements
    return arr[n - 1] + arraySum(arr, n - 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    cout << "Sum of array: " << arraySum(arr, n) << "\n"; // Output: 30
    return 0;
}
