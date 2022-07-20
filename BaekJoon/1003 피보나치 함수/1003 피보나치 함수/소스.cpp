#include <iostream>

using namespace std;


int main(void) {
    int n, k = 0, max = 0,min=0;
    cin >> n >> k;

    if (n < k) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && k % i == 0) max = i;
        }
    }
    else {
        for (int i = 1; i <= k; i++) {
            if (n % i == 0 && k % i == 0) max = i;
        }
    }

    n /= max;
    k /= max;
    min = n * k * max;

    cout << max << endl << min;

}