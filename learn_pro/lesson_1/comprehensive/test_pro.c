/**
 * @file test_pro.c
 * @brief 
 * @author 胡志坚
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明

struct Student
{
  char name[20];
  float score;
  /* data */
};

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    // 循环五次让用户输入学生信息
    struct Student stu[5];
    float avg_score=0;
    for (int i = 0; i < 5; i++)
    {
      printf("please input student %d date:\n", i+1);
      // 查看是否成功读取了两个数据项
      if (scanf("%s %f", stu[i].name, &stu[i].score)!=2)
      {
        printf("input error\n");
        i--;
        continue;
        /* code */
      }
      
      avg_score += stu[i].score;
      /* code */
    }
    avg_score /=5;
    printf("average score: %.2f\n", avg_score);
    FILE *fp;
    fp=fopen("good_student.txt", "w");
    if (fp==NULL){
      printf("open file error\n");
      exit(1);
    }
    for (int i = 0; i < 5; i++)
    {
      if (stu[i].score >avg_score)
      {
        fprintf(fp, "%s %.2f\n", stu[i].name, stu[i].score);
      }
      /* code */
    }
    
    fclose(fp);

    printf("good student write to good_student.txt\n");

    fp=fopen("good_student.txt", "r");
    if (fp==NULL){
      printf("open file error\n");
      exit(1);
    }
    printf("good student list:\n");
    struct Student good_stu;
    while (fscanf(fp, "%s %f", &good_stu.name, &good_stu.score) != EOF){
      printf("%s %.2f\n", good_stu.name, good_stu.score);
    }

    return 0;
}