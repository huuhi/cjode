/**
 * @file pointer_demo.c
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
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    int a=10;
    int *p;
    // 将a变量的地址赋值给指针变量p,让p指向a变量
    p=&a;
    printf("a=%d\n",a);
    printf("a的地址%p\n",&a);
    printf("p的值%p\n",p);
    printf("p指向的值=%d\n",*p);
    *p=20;
    printf("a=%d\n",a);
    return 0;
}