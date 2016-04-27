#include <algo/SimpleNullcat.h>

#include <stack>
#include <stdlib.h>
#include <stdio.h>

void algo::convert_base(int n, const int d) {
    std::stack<int> s;
    int e;
    while(n != 0) {
        e = n % d;
        s.push(e);
        n /= d;
    }
    while(!s.empty()) {
        e = s.top();
        s.pop();
        printf("%X", e);
    }
    return;
}