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

void fastScan(int &number) {
    bool is_negative = false;
    int c;
    
    number = 0;
    
    c = getchar();
    if (c == '-') {
        is_negative = true;
        
        c = getchar();
    }
    for (; (c >=48 && c <= 57); c=getchar()) {
        number = number * 10 + c - 48;
    }
    if (is_negative) {
        number *= -1;
    }
}

int main() {
    int n, k, num, res = 0;

    scanf("%d %d", &n, &k);
    getchar();  // To read \n
    for (int i=0; i<n; i++) {
        /*
        THIS LINE IS THE MOST IMPORTANT

        cin and scanf are the common solutions. scanf is faster than cin unless
        the synchronization between C and C++ is disabled, which can be done by
        ios_base::sync_with_stdio(false).

        cin and scanf can both achieve 0.15-0.18s for the test cases on CodeChef.

        fastScan significantly reduced the runtime to 0.05s.
        */
        fastScan(num);
        if (num % k == 0) {
            res++;
        }
    }
    printf("%d", res);
    return 0;
}