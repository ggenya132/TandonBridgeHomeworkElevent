#include <iostream>
using namespace std;

int getCheapestPath(int arr[], int currentStep, int arrSize) {
    if (currentStep == arrSize - 1) {
        return arr[currentStep];
    }
    int costOfCurrentSpace = arr[currentStep];
    int resultOne =
        costOfCurrentSpace + getCheapestPath(arr, currentStep + 1, arrSize);
    if (currentStep + 2 >= arrSize) {
        return resultOne;
    }
    int resultTwo =
        costOfCurrentSpace + getCheapestPath(arr, currentStep + 2, arrSize);
    return resultOne < resultTwo ? resultOne : resultTwo;
}

int main() {
    int board[6] = {0, 3, 80, 6, 57, 10};
    int cost = getCheapestPath(board, 0, 6);
    cout << cost;
    return 0;
}