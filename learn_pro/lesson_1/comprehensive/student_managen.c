/**
 * @file student_managen.c
 * @brief 
 * @author 胡志坚
 * @date 2025/11/29
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 学生的id从4开始
static int next_student_id = 4;

// 函数声明
struct Student
{
  char name[20];
  float score;
  int id;
  /* data */
};
void is_null(FILE *fp);
void init_students(FILE *fp);
void add_student(FILE *fp);
void show_students(FILE *fp);
void find_max_score(FILE *fp);
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
    FILE *fp;
    init_students(fp);
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
          add_student(fp);
          break;
        case 2:
          show_students(fp);
          break;
        case 3:
          find_max_score(fp);
          break;
        case 4:
          printf("bye bye~\n");
          break;
        default:
          printf("unknown your choice\n");
      }
    /* code */
   }
   

    return 0;
}
void add_student(FILE *fp){
  fp=fopen("students.dat","ab");
    is_null(fp);

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
    fwrite(&stu,sizeof(struct Student),1,fp);
    /* code */
  }
  printf("add student success\n");
  fclose(fp);
}
void show_students(FILE *fp){
  fp =fopen("students.dat","rb");
    is_null(fp);

  struct Student stu;
  printf("All students info:\n");
  while (fread(&stu,sizeof(struct Student),1,fp)==1)
  {
    printf("id:%d name:%s score:%f\n",stu.id,stu.name,stu.score);
    /* code */
  }
  fclose(fp);
}
void find_max_score(FILE *fp){
  fp =fopen("students.dat","rb");
    is_null(fp);

  struct Student stu;
  float max_score=0;
  while (fread(&stu,sizeof(struct Student),1,fp)==1){
    if (stu.score>max_score){
      max_score=stu.score;
    }
  }
  printf("max score is %f\n",max_score);
  fclose(fp);
}
void init_students(FILE *fp){
  // 初始化学生数据
  fp=fopen("students.dat","wb");
  is_null(fp);
  struct Student stus[3] ={{"Alice",90.5,1},{"Bob",85.0,2},{"Charlie",92.0,3}};
  fwrite(stus,sizeof(struct Student),3,fp);
  fclose(fp);
}
void is_null(FILE *fp){
  if (fp==NULL)
  {
    perror("Failed to open file");
    exit(1);
    /* code */
  }
  
}