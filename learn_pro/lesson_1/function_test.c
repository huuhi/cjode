/**
 * @file function_test.c
 * @brief 
 * @author 
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
int max(int arr[],int len);

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    int arr[]={1,3,5,7,9,2,4,6,8,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int m=max(arr,len);
    printf("数组中的最大值是:%d\n",m);

    return 0;
}
int max(int arr[],int len){
  // 计算数组的长度
  if(len==0){
    // 空数组
    return -1;
  }
  // 定义最大值,赋值为数组第一个元素
  int max=arr[0];
  for (int i = 1; i < len; i++)
  {
    if(arr[i]>max){
      max=arr[i];
    }
    /* code */
  }
  return max;
  
}
