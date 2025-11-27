/**
 * @file string_demo_2.c
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
    int n;
    char name[16];
    printf("请输入要群发的人数:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      printf("请输入你要打招呼的人的姓名:");
      scanf("%s", name);
      printf("你好！%s\n", name);
      
    }
    return 0;
}