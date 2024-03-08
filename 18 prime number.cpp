#include <stdio.h>

int isPrime(int num, int divisor) {
    if (divisor == 1) {
        return 1; 
    } else {
        if (num % divisor == 0) {
            return 0; 
        } else {
            return isPrime(num, divisor - 1); 
        }
    }
}

void generatePrimes(int n) {
    if (n >= 2) {
        generatePrimes(n - 1); 
        if (isPrime(n, n / 2)) {
            printf("%d ", n); 
        }
    }
}

int main() {
    int limit;
    printf("Enter the limit to generate prime numbers: ");
    scanf("%d", &limit);
    printf("Prime numbers up to %d are: ", limit);
    generatePrimes(limit);
    printf("\n");
    return 0;
}
