/**
 * @file math_compute.c
 * @brief
 * @author
 * @date 2025/11/26
 */

#include <stdio.h>
#include <math.h>

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
  double result_1 = sqrt(100.1);
  printf("result:%.2lf\n", result_1);

  printf("result:%.2lf\n", pow(100, 2));
  int result_2 = 2 + 10 / 8 * 3;
  printf("运算结果：%d\n", result_2);

  double result_3 = 2 + 10 / 8.0 * 3;
  printf("result3运算结果：%lf\n", result_3);

  int a=-1;
  int b=-2;
  int c=3;
  double x_1= (-b+sqrt(pow(b,2)-4*a*c))/2*a;
  double x_2= (-b-sqrt(pow(b,2)-4*a*c))/2*a;

  printf("一元二次方程的根是：x1:%.2lf,x2:%.2lf",x_1,x_2);
  
  return 0;
}