#include <stdio.h>
#include <string.h>

// 你的代码在这里
void reverse_string(char *str) {
  // 指向字符的开头
  char *start=str;
  // 指向字符的结尾
  char *end=str+strlen(str)-1;
  while (start<end)
  {
    char temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    /* code */
  }  
}

int main() {
    char test1[] = "Hello";
    char test2[] = "Programming";
    
    printf("reverse before: %s\n", test1);
    reverse_string(test1);
    printf("reverse after: %s\n", test1);
    
    printf("reverse before: %s\n", test2);
    reverse_string(test2);
    printf("reverse after: %s\n", test2);
    
    return 0;
}