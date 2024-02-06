#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define index 100

int main() {
    int primes[50] = {0};
    int p;
    int i;
    int primeIndex = 2;
    bool isPrime;
    primes[0] = 2;
    primes[1] = 3;
    for (p=5; p <= index; p = p+2) {
        isPrime = true;
        for (i=1; isPrime && p / primes[i] >= primes[i]; i++) {
            if (p % primes[i] == 0) {
                isPrime = false;
            }
        }
        if (isPrime == true) {
            primes[primeIndex] = p;
            ++primeIndex;
        }

    }
    printf("The prime numbers are : \n");
    for (i = 0; i< 25; i++) {
        printf("%d    ", primes[i]);
    }



    return 0;
}
