// https://leetcode.com/problems/fibonacci-number/submissions/
// 1
/*
https://leetcode.com/submissions/detail/596294477/
Runtime: 12 ms, faster than 27.62% of C++ online submissions for Fibonacci Number.
Memory Usage: 5.8 MB, less than 79.51% of C++ online submissions for Fibonacci Number.
*/
class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return fib(n-1)+fib(n-2);
        }
    }
};

// 2
/*
https://leetcode.com/submissions/detail/596297679/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
Memory Usage: 6 MB, less than 41.12% of C++ online submissions for Fibonacci Number.
*/
class Solution {
public:
    int fib(int n) {
        int l[] = {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040};
        return l[n];
    }
};

/*
#include <iostream>
#include <string>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-1)+fib(n-2);
    }
}

int main() {
    for (int i = 0; i < 31; i++) {
        cout << fib(i) << ",";
    }
} 
*/
