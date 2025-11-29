#include <stdio.h>
#include <string.h>

#define COUNT 5

struct Student {
    char name[20];
    float score;
};

// 你的代码在这里
void sort_students(struct Studnet *stu,int count){
  struct Student *p=stu;
  
}
int main() {
    struct Student students[COUNT];
    
    // 输入学生信息
    for(int i = 0; i < COUNT; i++) {
        printf("输入第%d个学生的姓名和成绩: ", i + 1);
        scanf("%s %f", students[i].name, &students[i].score);
    }
    
    // 排序
    sort_students(students, COUNT);
    
    // 输出结果
    printf("\n按成绩排序结果:\n");
    for(int i = 0; i < COUNT; i++) {
        printf("%s: %.1f\n", students[i].name, students[i].score);
    }
    
    return 0;
}