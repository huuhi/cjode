/**
 * @file struct_test.c
 * @brief 
 * @author 
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Date
{
  int year;
  short month;
  short day;
  /* data */
};

// 函数声明
int compareDate(struct Date d1, struct Date d2);

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    //  定义一个表示日期的结构体 struct Date，包含年、月、日三个成员。编写一个函数 int compareDate(struct Date d1, struct Date d2)，
    // 比较两个日期的大小。如果 d1 在 d2 之后，返回1；如果 d1 在 d2 之前，返回-1；如果相等，返回0。
    struct Date date1={2023,11,28};
    struct Date date2={2024,1,1};
    int result=compareDate(date1,date2);
    if(result==1){
      printf("d1大");
    }else if (result==-1)
    {
      printf("d2大");
      /* code */
    }else{
      printf("相等");
    }
    return 0;
}

int compareDate(struct Date d1, struct Date d2){
  // 先判断年份
  if (d1.year>d2.year)
  {
    return 1;
    /* code */
  }else if (d1.year<d2.year)
  {
    return -1;
    /* code */
  }
  
// 如果程序可以走到这里，就说明年份是相等的
    if (d1.month>d2.month)
    {
      return 1;
      /* code */
    }else if (d1.month<d2.month)
    {
      return -1;
      /* code */
    }
  // 如果程序可以走到这里，就说明月份是相等的
  if (d1.day>d2.day){
    return 1;
  }else if (d1.day<d2.day)
  {
    return -1;
    /* code */
  }
  {
    return 0;
  }
    /* code */
  
  
}