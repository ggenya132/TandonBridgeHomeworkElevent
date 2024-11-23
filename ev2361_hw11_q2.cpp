#include <iostream>
using namespace std;
int sumOfSquares(int arr[], int arrSize) {
    if (arrSize == 1) {
        return arr[0] * arr[0];
    } else {
        return arr[arrSize - 1] * arr[arrSize - 1] +
               sumOfSquares(arr, arrSize - 1);
    }
}
bool isSorted(int arr[], int arrSize) {
    if (arrSize == 1 || arrSize == 0) {
        return true;
    }
    return arr[arrSize - 1] > arr[arrSize - 2] && isSorted(arr, arrSize - 1);
}
int main() {
    int arr[] = {2, -1, 3, 10};
    cout << sumOfSquares(arr, 4);
    cout << endl;
    int sortedArray[] = {1, 2, 3, 4};
    int nonSortedArray[] = {2, 1, 9, 3};
    cout << isSorted(sortedArray, 4);
    cout << endl;
    cout << isSorted(nonSortedArray, 4);

    return 1;
}