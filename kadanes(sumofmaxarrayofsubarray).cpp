#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int a[5] = {1,2,-3,4,5};
    int cursum = 0;
    int maxsum = INT_MIN;
    int i;

    for (i = 0; i < 5; i++) {
        cursum = cursum + a[i];
        maxsum = max(maxsum, cursum);
        if (cursum < 0) {
            cursum = 0;
        }
    }

    cout << maxsum;

    return 0;
}

