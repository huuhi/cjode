/**
 * @file array_demo.c
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

  int nums[5];
  for (int i = 0; i < 5; i++)
  {
    printf("请输入第%d个数", i + 1);
    scanf("%d", &nums[i]);
    /* code */
  }
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", nums[i]);
    /* code */
  }

  return 0;
}