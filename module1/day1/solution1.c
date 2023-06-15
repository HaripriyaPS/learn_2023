Using if-else:
#include <stdio.h>

int find_biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int biggest = find_biggest_if_else(x,y);
    printf("The biggest number is: %d\n", biggest);
    return 0;
}

Using ternary operator:

#include <stdio.h>

int find_biggest_ternary_operator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int biggest = find_biggest_ternary_operator(x,y);
    printf("The biggest number is: %d\n", biggest);
    return 0;
}