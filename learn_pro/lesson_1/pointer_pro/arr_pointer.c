#include <stdio.h>

int main() {
    int arr[3] = {100, 200, 300};
    
    printf("arr = %p\n", arr);        // 数组名就是地址
    printf("&arr[0] = %p\n", &arr[0]);// 第一个元素的地址
    printf("它们相等吗？\n\n");
    
    // 三种访问数组元素的方式（完全等价）：
    printf("arr[0] = %d\n", arr[0]);
    printf("*(arr + 0) = %d\n", *(arr + 0)); 
    printf("*(arr) = %d\n\n", *(arr));
    
    printf("arr[1] = %d\n", arr[1]);
    printf("*(arr + 1) = %d\n", *(arr + 1));

    int *p=arr;
    for (int i = 0; i < 3; i++)
    {
      printf("*p = %d\n",*(p+i));
      /* code */
    }
    
    
    return 0;
}