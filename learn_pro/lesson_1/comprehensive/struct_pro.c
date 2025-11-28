#include <stdio.h>

struct S1 {
    char c;  // 1字节
    int i;   // 4字节
    short s; // 2字节
};

struct S2 {
    int i;   // 4字节
    char c;  // 1字节
    short s; // 2字节
};

int main() {
    printf("sizeof(struct S1) = %zu\n", sizeof(struct S1)); // 输出多少？ 可能是 12
    printf("sizeof(struct S2) = %zu\n", sizeof(struct S2)); // 输出多少？ 可能是 8
    return 0;
}