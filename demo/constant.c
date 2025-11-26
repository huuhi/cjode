/**
 * @file constant.c
 * @brief 
 * @author 
 * @date 2025/11/26
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 函数声明

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    // 常量
    const int WORKING_HOURS_PER_WEEK=40;

    const double PI=3.1415926;
    float r_1=2;
    float r_2=8;
    float s_1=PI*pow(r_1,2);
    float s_2=PI*pow(r_2,2);
    printf("圆1的面积是：%.2f\n",s_1); // 圆的面积是
    printf("圆2的面积是：%.2f\n",s_2);

    /*
      this is a comment
    */
    // 圆的面积是

    return 0;
}