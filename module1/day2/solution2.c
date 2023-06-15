#include <stdio.h>

// Function to swap two values of any type
void swap(void *a, void *b, size_t size) {
    // Create a temporary buffer of size 'size'
    char temp[size];

    // Copy the contents of 'a' to the temporary buffer
    memcpy(temp, a, size);

    // Copy the contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the contents of the temporary buffer to 'b'
    memcpy(b, temp, size);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values of num1 and num2
    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    char ch1 = 'A', ch2 = 'B';
    printf("Before swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    // Swap the values of ch1 and ch2
    swap(&ch1, &ch2, sizeof(char));

    printf("After swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    return 0;
}