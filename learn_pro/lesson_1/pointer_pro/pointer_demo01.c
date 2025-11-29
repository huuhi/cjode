/**
 * @file pointer_demo01.c
 * @brief 
 * @author 胡志坚
 * @date 2025/11/29
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
    int a=10;
    int b=20;
    int *p=&a;
    printf("a = %d, &a = %p\n", a, &a);
    printf("p = %p, *p = %d\n", p, *p);
        p = &b;       // 现在p指向b
    printf("现在p指向b:\n");
    printf("p = %p, *p = %d\n", p, *p);
    
    *p = 30;      // 通过p修改b的值
    printf("通过p把b改为30:\n");
    printf("b = %d\n", b);
    
    return 0;
    return 0;
}