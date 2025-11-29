/**
 * @file student_managen.c
 * @brief  这个版本优化了对学生数据进行操作
 * @author 胡志坚
 * @date 2025/11/29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENT_COUNT 1000
// 学生的id从4开始

// 函数声明
struct Student
{
  char name[20];
  float score;
  int id;
  /* data */
};
// 存储学生
struct Student stus[MAX_STUDENT_COUNT];
int student_count=0;//当前学生数量
int next_student_id=1;//下一个可用学生id
void load_students();
void add_student();
void show_students();
void find_max_score();
void save_students();
/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    /*
    程序启动时，从 "students.dat" 二进制文件加载所有学生记录（如果文件存在）。学生记录包含学号(int)、姓名(char[20])、成绩(float)。
    1. 添加新学生
    2. 显示所有学生
    3. 查找最高分学生
    4. 退出并保存
    */
  //  读取文件
    load_students();
    int choice;
    printf("1. add new Student\n");
    printf("2. show all studnets\n");
    printf("3. find max score student\n");
    printf("4. exit and save\n");
    while (choice!=4)
    {
      printf("please input your choice:");
      scanf("%d", &choice);
      switch (choice){
        case 1: 
          add_student();
          break;
        case 2:
          show_students();
          break;
        case 3:
          find_max_score();
          break;
        case 4:
          save_students();
          printf("bye bye~\n");
          break;
        default:
          printf("unknown your choice\n");
      }
    /* code */
   }
   

    return 0;
}
void add_student(){

  short count;
  printf("please input count:");
  scanf("%hd",&count);
  char name[20];
  float score;
  for (int i = 0; i < count; i++)
  {
    printf("please input the %d th name and score:",i+1);
    scanf("%19s %f",name,&score);
    // 这里也可以考虑添加到数组中，最后一起写入文件
    struct Student stu;
    strcpy(stu.name,name);
    stu.score=score;
    stu.id=next_student_id++;
    printf("id:%d name:%s score:%f\n",stu.id,stu.name,stu.score);
    stus[student_count++]=stu;
    /* code */
  }
  printf("add all students success\n");
}
void show_students(){
  if (student_count==0)
  {
    printf("no students\n");
    return;
    /* code */
  }
  
  printf("All students info:\n");
  for (int i = 0; i < student_count; i++)
  {
    printf("id:%d name:%s score:%f\n",stus[i].id,stus[i].name,stus[i].score);
    /* code */
  }
  
}
void find_max_score(){
  int max_score=0;
  for (int i = 0; i < student_count; i++)
  {
    if (stus[i].score>max_score)
    {
      max_score=stus[i].score;
      /* code */
    }
    /* code */
  }
  printf("max score is %d\n",max_score);
}
void load_students(){
  // 初始化学生数据
  FILE *fp=fopen("students.dat","rb");
  if (fp==NULL)
  {
    perror("open file error");
    return;
    /* code */
  }  
  student_count=fread(stus,sizeof(struct Student),MAX_STUDENT_COUNT,fp);
  fclose(fp);

  if (student_count>0)
  {
    next_student_id=stus[student_count-1].id+1;
    /* code */
  }
  printf("load %d students success\n",student_count);
  
}

void save_students(){
  FILE *fp=fopen("students.dat","wb");
  if (fp==NULL){
    perror("open file error");
    return;
  }
  fwrite(stus,sizeof(struct Student),student_count,fp);
  fclose(fp);
}