#include <iostream>
#include <vector>

// Merge function to merge two sorted subarrays into one sorted array
void merge(std::vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1; // Size of the left subarray
    int n2 = high - mid;    // Size of the right subarray

    // Create temporary arrays to hold the left and right subarrays
    std::vector<int> left(n1);
    std::vector<int> right(n2);

    // Copy data to temporary arrays left[] and right[]
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[low..high]
    int i = 0; // Initial index of left subarray
    int j = 0; // Initial index of right subarray
    int k = low; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Merge Sort function to sort the array
void mergeSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        // Find the middle point
        int mid = low + (high - low) / 2;

        // Recursively sort the left and right halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the sorted halves
        merge(arr, low, mid, high);
    }
}

// Utility function to print an array
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 8, 5, 14, 7, 3, 9};

    std::cout << "Original array: ";
    printArray(arr);

    // Perform Merge Sort
    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
