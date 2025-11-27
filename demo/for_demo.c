/**
 * @file for_demo.c
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
    for (int i = 0; i < 50; i++)
    {
      if (i%2!=0)
      {
        continue;
        /* code */
      }
      if(i%3==0){
        continue;
      }
      if(i>40){
        break;
      }
        
      printf("%d\n", i);

      
      
    }
    
    return 0;
}