#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    printf("Ingresa el n�mero de t�rminos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci hasta el t�rmino %d:\n", n);
    for (i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
