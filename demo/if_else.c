/**
 * @file if_else.c
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
  int a = 2;
  int b = 8;
  int result;
  if (a > b)
  {
    result=a-b;
  }
  else
  {
    result=b-a;
  }
  printf("ab的差值：%d\n", b - a);

  return 0;
}