/**
 * @file while_demo.c
 * @brief
 * @author
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[])
{
  // TODO: 在这里写你的代码

  int count_1 = 1;
  int sum_1=0;
  while (count_1 <= 100)
  {
    if(count_1%2==0){
      sum_1+=count_1;
    }
    count_1++;
    /* code */
  }
  printf("1到100之间的偶数和是：%d\n",sum_1);
  // 使用do while
  printf("\n");
  int count_2 = 1;
  int sum_2=0;
  do
  {
    if(count_2%2!=0){
      sum_2+=count_2;
    }
    count_2++;
  } while (count_2 <= 100);
  printf("1到100之间的奇数和是：%d\n",sum_2);
  return 0;
}