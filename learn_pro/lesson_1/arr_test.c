/**
 * @file arr_test.c
 * @brief 
 * @author 
 * @date 2025/11/27
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 函数声明
bool isPrime(int n){
  if(n<=1){
    return false;
  }
  if (n==2)
  {
    return true;
    /* code */
  }
  if (n%2==0)
  {
    return false;
    /* code */
  }
  // 计算n的根
  int limit=sqrt(n);
  for (int i = 3; i <= limit; i++)
  {
    if (n%i==0)
    {
      return false;
      /* code */
    }
    
    /* code */
  }
  return true;

  
  
}

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    /*
     编写一个程序，从一个包含10个整数的一维数组中找出所有的素数并打印出来。（你需要先判断一个数是否是素数）
    */
   int nums[10]={12,2,321,32,1,31,23,23,13,43};
   int length = sizeof(nums) / sizeof(nums[0]);
   for (int i = 0; i < length; i++)
   {
    /* code */
    if (isPrime(nums[i]))
    {
      printf("%d是质数\n",nums[i]);
      /* code */
    }
    
   }
   
    return 0;
}

