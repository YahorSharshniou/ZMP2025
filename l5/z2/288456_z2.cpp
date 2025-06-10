#include <iostream>
using namespace std;

void merge(int* arr, int left, int mid, int right) {
    int n = right - left;
    int temp[n];
    
    int i = left;
    int j = mid;
    int k = 0;

    while (i < mid && j < right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    while (i < mid) {
        temp[k++] = arr[i++];
    }
    while (j < right) {
        temp[k++] = arr[j++];
    }

    for (int l = 0; l < n; ++l) {
        arr[left + l] = temp[l];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int width = 1; width < n; width *= 2) {
        for (int i = 0; i < n; i += 2 * width) {
            int left = i;
            int mid = min(i + width, n);
            int right = min(i + 2 * width, n);
            merge(arr, left, mid, right);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    cout << "\n";
}