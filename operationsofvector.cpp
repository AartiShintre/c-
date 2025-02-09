#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    // A number is a power of 2 if it is greater than 0 and (n & (n - 1)) is 0
    return (n > 0 && (n & (n - 1)) == 0);
}

int main() {
    int num = 14;
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    return 0;
}

