/**
 * @file test_1.c
 * @brief
 * @author
 * @date 2025/11/27
 */

#include <stdio.h>

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
  int year;
  printf("请输入需要计算的年份");
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    printf("%d为闰年", year);
  }
  return 0;
}