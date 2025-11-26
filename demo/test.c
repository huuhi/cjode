/**
 * @file test.c
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
    int int_1=80;
    printf("int_1:%d\n",int_1);
    char char_1='A';
    printf("char_1:%c,ascll:%d\n",char_1,char_1);

    char char_2=int_1;
    printf("char_2:%c\n",char_2);
    printf("char menory long:%zu",sizeof(char));

    return 0;
}