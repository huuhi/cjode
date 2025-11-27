#include <stdio.h>
#include <locale.h>
#include <string.h> // 包含字符串处理函数

int main() {
    setlocale(LC_ALL, "zh_CN.UTF-8");
  // 一维数组：求最大值
    int arr[5] = {30, 50, 20, 10, 40};
    int max=arr[0];
    for (int i = 1; i < 5; i++)
    {
      if (arr[i]>max)
      {
        max=arr[i];
        /* code */
      }
      
      /* code */
    }
    
    printf("一维数组最大值: %d\n", max);
    
    // 二维数组：遍历和求和
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int total,num=0;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        num=mat[i][j];
        printf("当前的值是：%d\n",num);
        total+=num;
        /* code */
      }
      /* code */
    }
    
    printf("二维数组所有元素之和: %d\n", total);
    
    // 字符数组
    char str1[20] = "Hello";
    char str2[] = " World!";
    printf("初始字符串: %s\n", str1);
    

    strcat(str1,str2);
    printf("连接后: %s\n", str1);
    
    printf("字符串长度: %zu\n", strlen(str1)); // 求字符串长度（不包括'\0'）
    
    return 0;
}