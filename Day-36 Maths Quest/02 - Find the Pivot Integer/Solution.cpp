#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2;
        int root = sqrt(sum);

        if (root * root == sum) return root;
        return -1;

        // Brute force
        // long long sum = n * (n + 1) / 2;
        // int curr = 0;
        // for (int i = n; i > 0; i--) {
        //     curr += i;
        //     if (sum == curr) return i;
        //     sum -= i;
        // }
        // return -1;
    }
};
