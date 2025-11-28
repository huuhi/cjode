/**
 * @file struct_demo.c
 * @brief 
 * @author 
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 结构体
struct Student {
    char name[20];
    int age;
    float score;
};

// 函数声明
void printStudent(struct Student *stu){
  printf("姓名：%s\n",stu->name);
  printf("年龄：%d\n",stu->age);
  printf("分数：%.2f\n",stu->score);
}

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {

  struct Student stu1;
  // 赋值  strcpy为字符串赋值，不能用等号
  strcpy(stu1.name,"小胡");
  stu1.age=19;
  stu1.score=95.5;
  printStudent(&stu1);


    // TODO: 在这里写你的代码

    return 0;
}