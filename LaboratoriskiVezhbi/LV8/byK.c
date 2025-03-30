#include <stdio.h>

int divisibleByK(int number, int k) {
    if (number % k == 0) {
        return 1;
    } else {
        return 0;
    }
    //return number%k==0;
}

int nextDivisibleByK(int number, int k) {
    if (divisibleByK(number + 1, k)) {
        return number + 1;
    }
    return nextDivisibleByK(number + 1, k);
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = n; i <= m; ++i) {
        printf("%d -> %d\n", i, nextDivisibleByK(i, k));
    }
    return 0;
}
