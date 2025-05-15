#include <stdio.h>
#include <stdlib.h>

#define MAX_HEIGHT 1000000  // Max possible height according to the problem constraints

int main() {
    int n;
    scanf("%d", &n);  // Read the number of people

    int heights[n];
    int frequency[MAX_HEIGHT + 1] = {0};  // Frequency array to store count of each height

    // Input the heights of the people
    for (int i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
        frequency[heights[i]]++;
    }

    int maxCircleSize = 1;  // Minimum balanced circle is 1 (a single person)

    // Iterate through each possible height to find the largest balanced circle
    for (int i = 1; i <= MAX_HEIGHT; i++) {
        int currentCircleSize = frequency[i] + frequency[i - 1] + frequency[i + 1];
        if (currentCircleSize > maxCircleSize) {
            maxCircleSize = currentCircleSize;
        }
    }

    // Output the result
    printf("%d\n", maxCircleSize);

    return 0;
}