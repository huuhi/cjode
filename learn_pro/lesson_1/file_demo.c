/**
 * @file file_demo.c
 * @brief 
 * @author 
 * @date 2025/11/28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
  char name[20];
  int age;
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
    // 构造函数？？？
    struct Student stu1_write={"小明",20};
    struct Student stu2_read;
    // 写入文件
    fp=fopen("student.dat","wb");
    if (fp==NULL)
    {
      printf("文件打开失败！\n");
      // 退出程序
      exit(1);
      /* code */
    }
    // 表示写入学生结构体，长度为结构体大小，写入1个，写入到fp指向的文件
    fwrite(&stu1_write,sizeof(struct Student),1,fp);
    fclose(fp);
    // 读取文件
    fp=fopen("student.dat","rb");
    if (fp==NULL)
    {
      printf("文件打开失败！\n");
      /* code */
      exit(1);
    }
    fread(&stu2_read,sizeof(struct Student),1,fp);
    fclose(fp);

    printf("从文件种读取学生信息\n");
    printf("姓名：%s\n",stu2_read.name);
    printf("年龄：%d\n",stu2_read.age); 

    



    return 0;
}