/**
 * @file float_test.c
 * @brief 
 * @author 
 * @date 2025/11/26
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
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    float float_1=11.27;
    float float_2=11.12345678910;
    printf("value 1:%f,value 2: %f\n",float_1,float_2);

    double double_1=11.12345678910;
    printf("value 1:%.10f,value2:%.10lf",float_2,double_1);

    return 0;
}