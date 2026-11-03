#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double helper(double x, long long n) {
        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }

        double ans = 1.0;
        while (n > 0) {
            if (n % 2 != 0) ans *= x;

            x *= x;
            n /= 2;
        }
        return ans;
    }

    double myPow(double x, int n) {
        return helper(x, n);

        // int o = abs(n);
        // double ans = x;
        // for (int i = 1; i < o; i++) {
        //     ans = ans * x;
        // }

        // if (n < 0) ans = 1 / ans;
        // return ans;
    }
};
