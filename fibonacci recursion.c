#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() {
    int num;
    int result;

    printf("Enter the position (n) for the Fibonacci number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fibonacci of a negative number is not possible.\\n");
    } else {
        result = fibonacci(num);
        printf("The %dth number in the Fibonacci series is %d\\n", num, result);
    }

    return 0;
}
