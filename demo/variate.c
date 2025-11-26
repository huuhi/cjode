#include <stdio.h>

int main(){
  int money=100000;
  printf("I have %d dollars.\n",money);

  int mike_core=89;
  int john_core=98;
  int temp=mike_core;
  mike_core=john_core;
  john_core=temp;
  printf("Now,mike's core is %d,john's core is %d.\n",mike_core,john_core);

  char a='Z';
  char* p="hello";
  printf("字符=%c,字符串=%s\n",a,p);
  printf("字符的地址=%d,字符串的地址=%p\n",a,p);
  printf("长度%zu\n",sizeof(int));

  char b[4]="Hell";
  printf("字符串=%s\n",b);


  // 小数类型

  float score=1.2;
  double pai=3.1415926f;
  printf("打印小数：%.0f,派：%.2lf",score,pai);

  // 这个也可以不写
  return 0;
}