/**
 * @file file_pro.c
 * @brief 
 * @author 胡志坚
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
{
  char name[20];
  int score;
  /* data */
};

// 函数声明

/**
 * @brief 主函数
 * @param argc 参数个数
 * @param argv 参数列表
 * @return 程序执行状态
 */
int main(int argc, char *argv[]) {
    // TODO: 在这里写你的代码
    FILE *fp;
    struct Student stu1;
    fp=fopen("student.txt","w");
    if (fp==NULL)
    {
      perror("Failed to open file");
      /* code */
      exit(1);
    }
    fprintf(fp,"%s %d\n","admin",100);
    fprintf(fp,"%s %d\n","Tim",300);
    fclose(fp);

    fp=fopen("student.txt","r");
    if (fp==NULL)
    {
      perror("Failed to open file");
      /* code */
      exit(1);
      /* code */
    }
    while (fscanf(fp,"%s %d",stu1.name,&stu1.score)!=EOF)
    {
      printf("%s %d\n",stu1.name,stu1.score);
      /* code */
    }
    fclose(fp);

    // 二进制文件操作
    fp=fopen("student.dat","wb");
    if (fp==NULL)
    {
      perror("Failed to open file");
      exit(1);
      /* code */
    }
    struct Student stus[2]={{"admin",100},{"Tim",300}};
    // 分别代表：存储结构体数组的起始地址，结构体的大小，要写入的元素个数，文件指针
    fwrite(stus,sizeof(struct Student),2,fp);
    fclose(fp);
    
    fp=fopen("student.dat","rb");

        if (fp==NULL)
    {
      perror("Failed to open file");
      exit(1);
      /* code */
    }
    struct Student read_stu;
  // 参数分别代表：存储结构体的起始地址，结构体的大小，要读取的元素个数，文件指针
    while (fread(&read_stu,sizeof(struct Student),1,fp)==1)
    {
      printf("%s %d\n",read_stu.name,read_stu.score);
      /* code */
    }
    fclose(fp);

    for (int i = 0; i < 2; i++)
    {
      printf("%d",i);
      /* code */
    }
    

    return 0;
}