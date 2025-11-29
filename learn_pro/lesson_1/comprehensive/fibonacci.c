#include <stdio.h>

// 你的递归函数在这里
int fibonacci(int i){
  if (i==0||i==1)
  {
    return i;
    /* code */
  }
  return fibonacci(i-1)+fibonacci(i-2);
}

int main() {
    int n;
    printf("请输入n值: ");
    scanf("%d", &n);
    
    printf("斐波那契数列前%d项: ", n);
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}