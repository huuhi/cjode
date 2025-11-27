/**
 * @file switch_case.c
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
    int level=2;
    switch (level){
    case 1:
      printf("去一楼\n");
      /* code */
      break;
    case 2:
      printf("去二楼\n");
      break;
    case 3:
      printf("去三楼\n");
      break;
    default:
      printf("去地下室\n");
      break;
    }
    return 0;
}