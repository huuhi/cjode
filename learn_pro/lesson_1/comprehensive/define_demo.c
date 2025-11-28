/**
 * @file define_demo.c
 * @brief 
 * @author 
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.14159  // 宏定义,表示圆周率
#define MAX(a,b)((a)>(b)?(a):(b))

// 函数声明

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
    printf("Max of %d and %d is %d\n", 10, 20, MAX(10, 20));

    return 0;
}