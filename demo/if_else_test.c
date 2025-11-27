/**
 * @file if_else_test.c
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
    // 1：普通用户，2：会员用户
    int user_type=2;
    double price=180;
    if(user_type==1&&price>100){
      price*=0.95;
    }else if(user_type==2&&price>200){
      price*=0.9;
    }else if(user_type==2){
      price*=0.97;
    }
    printf("最终价格是：%.2lf\n",price);
    return 0;
}