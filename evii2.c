#include <stdio.h>

int hIndex(int citations[], int n) {
    int left = 0, right = n - 1, hIndex = 0;
    
    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (citations[mid] >= n - mid) {
            hIndex = n - mid;  // Update h-index if condition holds
            right = mid - 1;   // We look for smaller possible h-index values
        } else {
            left = mid + 1;    // Move to the right half
        }
    }
    
    return hIndex;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int citations[n];
    
    // Input citations array
    for (int i = 0; i < n; i++) {
        scanf("%d", &citations[i]);
    }
    
    // Calculate and print the h-index
    int result = hIndex(citations, n);
    printf("%d\n", result);
    
    return 0;
}