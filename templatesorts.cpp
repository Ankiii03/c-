#include <iostream>
#include <vector>

// Template function to perform the Bubble Sort algorithm
    template <typename T>
void bubbleSort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to perform the Selection Sort algorithm
template <typename T>
void selectionSort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);

    }
}

// Template function to print the elements of a vector
template <typename T>
void printVector(const std::vector<T>& arr) {
    for (const T& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}


             
int main() {
    // Example usage of sorting algorithms with integers
    std::vector<int> intArr = {64, 25, 12, 22, 11};
    
    std::cout << "Original array: ";
    printVector(intArr);
    // Bubble Sort
    bubbleSort(intArr);
    std::cout << "Array after Bubble Sort: ";
    printVector(intArr);

    // Selection Sort
    selectionSort(intArr);
    std::cout << "Array after Selection Sort: ";
    printVector(intArr);

    return 0;
}
