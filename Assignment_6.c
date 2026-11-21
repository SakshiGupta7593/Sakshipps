#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorialRecursive(n - 1); // Recursive call
}

// Function to calculate factorial without recursion (using iteration)
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d (using recursion): %llu\n", num, factorialRecursive(num));
        printf("Factorial of %d (without recursion): %llu\n", num, factorialIterative(num));
    }

    return 0;
}
