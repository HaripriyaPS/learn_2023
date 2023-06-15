#include <stdio.h>

// Function to find the largest number by deleting a single digit from a 4-digit number
int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int currentNum = num;

    while (currentNum > 0) {
        int truncatedNum = num / (divisor * 10) * divisor + num % divisor;
        if (truncatedNum > largest) {
            largest = truncatedNum;
        }

        divisor *= 10;
        currentNum /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNumber = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNumber);
    return 0;
}


