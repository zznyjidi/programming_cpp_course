#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int i2 = 0; i2 < n - 1; i2++) {
            if (arr[i2] > arr[i2 + 1]) {
                int temp = arr[i2];
                arr[i2] = arr[i2 + 1];
                arr[i2 + 1] = temp;
            }
        }
    }
}

int main() {
    int maxTime, taskCount;
    cin >> maxTime >> taskCount;
    int times[taskCount];
    for (int i = 0; i < taskCount; i++) {
        cin >> times[i];
    }
    bubbleSort(times, taskCount);
    int index = 0, timeTaken = 0;
    while (timeTaken < maxTime) {
        timeTaken += times[index];
        index++;
    }

    cout << index << endl;
}
