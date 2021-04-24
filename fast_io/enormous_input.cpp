/*
Enormous Input Test

The purpose of this problem is to verify whether the method you
are using to read input data is sufficiently fast to handle problems
branded with the enormous Input/Output warning. You are expected to
be able to process at least 2.5MB of input data per second at runtime.

Tested solution on https://www.codechef.com/problems/INTEST
0.18s C++17
*/

// Many people are using #include <bits/stdc++.h>
// It seems like a good idea in time-sensitive competions
// because it includes a lot of files in one line.
// But I want to avoid it in my code because it increases
// compilation time and is only good for competition.
// I think it is not best practice to do so in work.
#include <stdio.h>

int main() {
    int n, k, num, res = 0;

    // scanf is faster than cin unless the synchronization between
    // C and C++ is disabled, which can be done by ios_base::sync_with_stdio(false);
    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) {
        scanf("%d", &num);
        if (num % k == 0) {
          res++;
            
        }
    }
    printf("%d", res);
    return 0;
}