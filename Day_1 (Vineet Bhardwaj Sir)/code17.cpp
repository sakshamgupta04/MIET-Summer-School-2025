/*Implement various sorting algorithms (eg. bubble sort, selection sort, insertion sort, merge sort, quick sort) to sort elements in a vector in ascending order*/
#include <iostream>
#include <vector>
using namespace std;

// Utility function to print a vector
void printVector(const vector<int>& arr) {
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

// 1. Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

// 2. Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// 3. Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// 4. Merge Sort Helpers
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid+1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= right)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[left + k] = temp[k];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = (left + right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

// 5. Quick Sort Helpers
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // pivot element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n, choice, value;
    vector<int> arr, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        arr.push_back(value);
    }

    cout << "\nChoose Sorting Algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "Enter choice (1-5): ";
    cin >> choice;

    // Make a copy of original array
    temp = arr;

    switch (choice) {
        case 1:
            bubbleSort(temp);
            break;
        case 2:
            selectionSort(temp);
            break;
        case 3:
            insertionSort(temp);
            break;
        case 4:
            mergeSort(temp, 0, n-1);
            break;
        case 5:
            quickSort(temp, 0, n-1);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "\nSorted Array:\n";
    printVector(temp);

    return 0;
}
