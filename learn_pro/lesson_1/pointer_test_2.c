/**
 * @file pointer_test_2.c
 * @brief 
 * @author 
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
/*
 编写一个函数 int stringLength(char *str)，使用指针操作（而不是下标 []）来计算一个字符串的长度（不包括结束符 '\0'）。
*/
int stringLength(char *str);

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    char str[]="ABC";
    int result= stringLength(str);
    printf("数组的长度:%d",result);
    return 0;
}
int stringLength(char *str){
  int len=0;
  char *p=str;
  while (*p!='\0')
  {
    p++;
    len++;
    /* code */
  }
  return len;
}