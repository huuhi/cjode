/**
 * @file static_demo.c
 * @brief 
 * @author 胡志坚
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
void count(){
  // static变量只初始化一次，且在函数多次调用间保持其值
  static int c=0;
  c++;
  printf("count=%d\n",c);
}


/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    count();
    count();
    count();
    return 0;
}