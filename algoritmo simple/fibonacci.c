#include <stdio.h>

int F(int n) { 
    if (n <= 1) {
        return n;
    } else {
        return F(n - 1) + F(n - 2); //usa la recursion para 
    }
    return 0;
}

int main() {
    printf("%d\n", F(19));
    return 0;
}

//C