#include <stdio.h>
int fun(int n) {
    static int s = 0;
    s += n;
    return s;
}
int main() {
    int i;
    for (i = 1; i <= 3; i++) {
        printf("%d ", fun(i));
    }
    return 0;
}