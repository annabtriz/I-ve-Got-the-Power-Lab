#include "lab2.hpp"
#include <iostream>

int naive(int x, int n) {
    if (x==0) return 0;
    if (n==0) return 1;

    return x * naive (x, n-1);
}

int unoptimized(int x, int n) {
    if (x==0) return 0;
    if (n==0) return 1;

    if (n%2 == 0){
        return unoptimized(x,n/2) * unoptimized(x,n/2);
    }
    else {
        return x* unoptimized(x, n/2) * unoptimized(x, n/2);
    }
}

int optimized(int x, int n){
    if (x==0) return 0;
    if (n==0) return 1;

    int temp = optimized(x, n/2);

    if (n%2==0) {
        return temp*temp;
    }
    else {
        return x*temp*temp;
    }
}
