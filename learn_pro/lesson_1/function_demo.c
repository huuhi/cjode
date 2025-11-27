/**
 * @file function_demo.c
 * @brief 
 * @author 
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
// 可以先声明函数原型，然后在后面定义函数体
void swap(int a,int b);

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
 int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    int a=100,b=200;
    printf("交换前：a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("交换后：a=%d,b=%d\n",a,b);
    // 说明：在C语言中，函数参数是按值传递的，swap函数内对a和b的修改不会影响main函数中的a和b
    return 0;
}

void swap(int a,int b){
  printf("函数内部交换前：a=%d,b=%d\n",a,b);
  
  int temp=a;
  a=b;
  b=temp;
  printf("函数内交换后：a=%d,b=%d\n",a,b);
}