/**
 * @file switch_demo.c
 * @brief
 * @author
 * @date 2025/11/27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
// 函数声明

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "zh_CN.UTF-8");
    // TODO: 在这里写你的代码
    // 1：电子产品，2：服装
    int catagory;
    double price;
    printf("请输入商品类别（1：电子产品，2：服装）：");
    scanf("%d", &catagory);
    printf("请输入商品价格：");
    scanf("%lf", &price);
    switch (catagory)
    {
    case 1:
        if (price < 500)
        {
            printf("无优惠\n");
        }
        else if (price >= 500 && price < 1000)
        {
            price *= 0.95;
            printf("打九五折，最终价格是：%.2lf\n", price);
        }
        else
        {
            price *= 0.9;
            printf("打九折，最终价格是：%.2lf\n", price);
        }
        /* code */
        break;
    case 2:
        if (price < 200)
        {
            printf("无优惠\n");
        }
        else if (price <= 500)
        {
            price *= 0.92;
            printf("打九二折，最终价格是：%.2lf\n", price);
        }
        else
        {
            price *= 0.85;
            printf("打八五折，最终价格是：%.2lf\n", price);
        }
        break;
    default:
        printf("无此类别商品\n");
        break;
    }
    return 0;
}