#### **（一）程序设计与C语言的基本概念**
- **核心概念**：
    
    - **程序**：一组计算机能识别和执行的指令。
        
    - **程序设计**：从确定任务到得到结果、写出文档的全过程。
        
    - **C语言特点**：结构化、模块化、功能丰富、表达能力强、可移植性好。
        
    - **C程序结构**：
        
        - 由一个或多个函数组成，必须有且仅有一个 `main` 函数（主函数）。
            
        - 程序执行从 `main` 开始，在 `main` 结束。
            
        - 语句以分号 `;` 结束。
            
        - 使用编译预处理命令（如 `#include`）。
            
    - **注释**：`//` 用于单行注释，`/* ... */` 用于多行注释。
```c
#include <stdio.h> // 编译预处理指令，包含标准输入输出头文件

int main() { // 主函数，程序入口
    printf("Hello, World!\n"); // 输出语句，\n表示换行
    return 0; // 函数执行完毕返回0
}
```
**易错点**：

- 忘记写 `main` 函数。
    
- 语句末尾漏掉分号 `;`。
    
- 拼写错误，如 `printf` 写成 `print`。
    
- 使用中文标点符号（如中文分号、括号）。


#### **（二）数据的存储与运算**

- **核心概念**：
    
    - **数据类型**：
        
        - **基本类型**：整型（`int`, `short`, `long`）、字符型（`char`）、实型（浮点型 `float`, `double`）。
            
        - **构造类型**：数组、结构体、共用体、枚举。
            
        - **指针类型**。
            
        - **空类型**（`void`）。
            
    - **常量与变量**：
        
        - **变量**：必须先定义，后使用。定义时指定数据类型和变量名。`int a;`
            
        - **常量**：值不能改变。如整型常量 `10`，实型常量 `3.14`，字符常量 `'A'`，字符串常量 `"ABC"`。
            
    - **运算符**：
        
        - **算术运算符**：`+`, `-`, `*`, `/`, `%`（取模，求余数）。
            
        - **关系运算符**：`>`, `<`, `==`, `>=`, `<=`, `!=`。
            
        - **逻辑运算符**：`!`（非）， `&&`（与）， `||`（或）。
            
        - **赋值运算符**：`=`, `+=`, `-=`, `*=`, `/=` 等。
            
        - **自增自减**：`i++`（先用后加）， `++i`（先加后用）。
            
        - **逗号运算符**：`a=1, b=2`，整个表达式的值是最后一个表达式的值。
            
        - **条件运算符**：`表达式1 ? 表达式2 : 表达式3`（三目运算符）。
            
        - **sizeof运算符**：求数据类型或变量所占字节数。`sizeof(int)`。
```c
#include <stdio.h>
int main() {
    int a = 5, b = 2;
    float c = 5.0 / 2; // 注意：5.0/2结果是2.5，而5/2结果是2（整数除法）
    char ch = 'D';
    int d = ch + 1; // 字符可以参与运算，使用其ASCII码。'D'是68，d=69
    
    printf("c = %.2f\n", c); // 输出 c = 2.50
    printf("d = %d, corresponding char is %c\n", d, d); // 输出 d=69, char=E
    
    int i = 3;
    printf("%d\n", i++); // 输出3，然后i变为4
    printf("%d\n", ++i); // i先变为5，然后输出5
    
    int x = (a > b) ? a : b; // 如果a>b，x=a，否则x=b。此处x=5
    printf("x = %d\n", x);
    return 0;
}
```
- **易错点**：
    
    - **整数除法**：`5 / 2` 结果是 `2`，不是 `2.5`。要得到小数，至少有一个操作数是小数。
        
    - **自增自减运算符**的先后顺序混淆。
        
    - **赋值运算符 `=` 与关系相等运算符 `==`** 混淆。`if (a = 1)` 是赋值，永远为真；`if (a == 1)` 才是判断。
        
    - **字符与字符串**：字符用单引号 `'A'`，字符串用双引号 `"A"`（后者包含结束符 `\0`）。

### **（三）顺序程序设计**
- **核心概念**：
    
    - **顺序结构**：程序中的语句按照先后顺序依次执行。
        
    - **输入输出函数**：
        
        - `printf()`：格式输出函数。`printf("格式控制字符串", 输出列表);`
            
        - `scanf()`：格式输入函数。`scanf("格式控制字符串", 地址列表);` **特别注意，变量前面要加取地址符`&`**。
占位符：
1. 字符-%c
2. int  - %d
3. float - %f
4. double - %lf
5. 字符串 - %s
6. 地址符 - &

### **（四）选择结构程序设计**


- **核心概念**：
    
    - `if` 语句：
    - `if...else` 语句：
    - `if...else if...else` 语句：
    - **嵌套的if语句**：if或else后面的语句块中又可以包含if语句。
        
    - **switch语句**：用于多分支选择。
		default可以省略
- **关键代码示例**：
```c
#include <stdio.h>
int main() {
    int score;
    printf("请输入成绩（0-100）：");
    scanf("%d", &score);
    
    // if...else if...else 示例
    if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 70) {
        printf("良好\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }
    
    // switch 示例 (常用于等值判断)
    char grade;
    printf("请输入等级（A, B, C, D）：");
    scanf(" %c", &grade); // %c前面的空格用于吸收之前的回车符
    
    switch (grade) {
        case 'A': printf("90-100分\n"); break; // break非常重要，否则会继续执行下一个case
        case 'B': printf("80-89分\n"); break;
        case 'C': printf("70-79分\n"); break;
        case 'D': printf("60-69分\n"); break;
        default: printf("输入错误！\n");
    }
    return 0;
}
```
- **易错点**：
    
    - `if` 后面的条件表达式误用赋值号 `=`。
        
    - `if` 或 `else` 后面如果只有一条语句，可以省略花括号 `{}`，但为了代码清晰和避免错误，**强烈建议始终使用花括号**。
        
    - `switch` 语句中忘记写 `break`，导致“case穿透”。
        
    - `switch` 的 `case` 后面必须是**整型或字符型常量**。
### **（五）循环结构程序设计**

主要注意这个：
```c
do {
    循环体语句;
} while (循环条件); // 注意这里有分号！
```
- **易错点**：
    
    - `while` 和 `do...while` 后面误加分号，导致死循环或逻辑错误。`while(条件); {...}`
        
    - `for` 循环中的多个表达式用逗号分隔，而不是分号。
        
    - 循环条件永远为真，导致**死循环**。
        
    - 在循环体内忘了改变循环变量的值，导致死循环。
        
    - 混淆 `break` 和 `continue` 的作用。
### **（六）用数组处理批量数据**

- **核心概念**：
    
    - **一维数组**：
        
        - **定义**：`类型 数组名[数组长度];` 如 `int arr[10];`
            
        - **初始化**：`int arr[5] = {1, 2, 3, 4, 5};` 或 `int arr[] = {1,2,3};`（自动计算长度）
            
        - **引用**：`数组名[下标]`，**下标从0开始**！
            
    - **二维数组**（可以看作矩阵）：
        
        - **定义**：`类型 数组名[行数][列数];` 如 `int matrix[3][4];`
            
        - **初始化**：`int matrix[2][3] = {{1,2,3}, {4,5,6}};` 或 `int matrix[2][3] = {1,2,3,4,5,6};`
            
        - **引用**：`数组名[行下标][列下标]`
            
    - **字符数组**（用于存放字符串）：
        
        - **定义**：`char str[10];`
            
        - **初始化**：`char str1[] = "Hello";` (系统会自动在末尾加 `'\0'`)
            
        - **输入输出**：可以使用 `%s` 格式符配合 `scanf`/`printf`，或者使用 `gets()`/`puts()` 函数（但注意 `gets` 不安全，真题中可能出现）。

```c
#include <stdio.h>

#include <locale.h>

#include <string.h> // 包含字符串处理函数

  

int main() {

    setlocale(LC_ALL, "zh_CN.UTF-8");

  // 一维数组：求最大值

    int arr[5] = {30, 50, 20, 10, 40};

    int max=arr[0];

    for (int i = 1; i < 5; i++)

    {

      if (arr[i]>max)

      {

        max=arr[i];

        /* code */

      }

      /* code */

    }

    printf("一维数组最大值: %d\n", max);

    // 二维数组：遍历和求和

    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int total,num=0;

    for (int i = 0; i < 2; i++)

    {

      for (int j = 0; j < 3; j++)

      {

        num=mat[i][j];

        printf("当前的值是：%d\n",num);

        total+=num;

        /* code */

      }

      /* code */

    }

    printf("二维数组所有元素之和: %d\n", total);

    // 字符数组

    char str1[20] = "Hello";

    char str2[] = " World!";

    printf("初始字符串: %s\n", str1);

  

    strcat(str1,str2);

    printf("连接后: %s\n", str1);

    printf("字符串长度: %zu\n", strlen(str1)); // 求字符串长度（不包括'\0'）

    return 0;

}

```
- **易错点**：
    
    - **下标越界**：访问 `arr[5]`，但数组大小是5，合法下标是0-4。这是非常严重的错误。
        
    - 误以为数组可以整体赋值，如 `arr1 = arr2;` 是错误的，必须用循环逐个元素赋值。
        
    - 使用 `scanf("%s", str)` 输入字符串时，遇到空格会终止。
        
    - 字符数组初始化时，`char str[5] = "Hello";` 是错误的，因为 `"Hello"` 实际有6个字符（包含 `\0`），空间不够。
### **（七）用函数实现模块化程序设计**
**核心概念**：
-  **函数定义**：
```c
返回类型 函数名(参数列表) {
    函数体（执行语句）;
    return 表达式; // 如果返回类型不是void
}
```
- **函数声明**：告诉编译器函数的名称、返回类型和参数。通常在文件开头。`返回类型 函数名(参数列表);`
    
- **函数调用**：`函数名(实际参数);`
    
- **参数传递**：C语言是 **“值传递”** 。即把实参的**值**复制一份给形参。在函数内部修改形参，**不会影响**函数外部的实参。
    
- **作用域**：
    
    - **局部变量**：在函数或复合语句内部定义，只在其内部有效。
        
    - **全局变量**：在函数外部定义，从定义处到文件结束都有效。应谨慎使用。
值传递的案例：

```c
/**

 * @file function_demo.c

 * @brief

 * @author

 * @date 2025/11/27

 */

  

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

  

// 函数声明

// 可以先声明函数原型，然后在后面定义函数体

void swap(int a,int b);

  

/**

 * @brief 主函数

 * @param argc 参数个数

 * @param argv 参数列表

 * @return 程序执行状态

 */

 int main(int argc, char *argv[]) {

    // TODO: 在这里写你的代码

    int a=100,b=200;

    printf("交换前：a=%d,b=%d\n",a,b);

    swap(a,b);

    printf("交换后：a=%d,b=%d\n",a,b);

    // 说明：在C语言中，函数参数是按值传递的，swap函数内对a和b的修改不会影响main函数中的a和b

    return 0;

}

  

void swap(int a,int b){

  printf("函数内部交换前：a=%d,b=%d\n",a,b);

  int temp=a;

  a=b;

  b=temp;

  printf("函数内交换后：a=%d,b=%d\n",a,b);

}
```

- **易错点**：
    
    - 函数声明、定义、调用时的返回类型或参数类型不匹配。
        
    - 误解“值传递”，以为在函数内修改形参会影响实参。
        
    - 在函数内部定义了与全局变量同名的局部变量，在函数内局部变量会“屏蔽”全局变量。
```c
/**

 * @file function_test.c

 * @brief

 * @author

 * @date 2025/11/27

 */

  

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

  

// 函数声明

int max(int arr[],int len);

  

/**

 * @brief 主函数

 * @param argc 参数个数

 * @param argv 参数列表

 * @return 程序执行状态

 */

int main(int argc, char *argv[]) {

    // TODO: 在这里写你的代码

    int arr[]={1,3,5,7,9,2,4,6,8,0};

    int len = sizeof(arr)/sizeof(arr[0]);

    int m=max(arr,len);

    printf("数组中的最大值是:%d\n",m);

  

    return 0;

}

int max(int arr[],int len){

  // 计算数组的长度

  if(len==0){

    // 空数组

    return -1;

  }

  // 定义最大值,赋值为数组第一个元素

  int max=arr[0];

  for (int i = 1; i < len; i++)

  {

    if(arr[i]>max){

      max=arr[i];

    }

    /* code */

  }

  return max;

}
```

### **（八）指针**
- **核心概念**：
    
    - **地址**：内存中每个字节都有一个编号，这个编号就是地址。
        
    - **指针**：**指针就是一个变量，其值是另一个变量的地址。**
        
    - **指针变量定义**：`类型名 *指针变量名;` 例如：`int *p;` `char *ch_ptr;`
        
    - **两个重要运算符**：
        
        - `&`（取地址运算符）：获取变量的地址。`p = &a;` （把变量a的地址赋给指针p）
            
        - `*`（解引用运算符）：获取指针所指向的地址中存储的值。`b = *p;` （把p指向的变量的值赋给b）
可以使用指针，来实现swap
```c
/**

 * @file function_demo.c

 * @brief

 * @author

 * @date 2025/11/27

 */

  

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

  

// 函数声明

// 可以先声明函数原型，然后在后面定义函数体

void swap(int *a,int *b);

  

/**

 * @brief 主函数

 * @param argc 参数个数

 * @param argv 参数列表

 * @return 程序执行状态

 */

 int main(int argc, char *argv[]) {

    // TODO: 在这里写你的代码

    int a=100,b=200;

    printf("交换前：a=%d,b=%d\n",a,b);

    swap(&a,&b);

    printf("交换后：a=%d,b=%d\n",a,b);

    // 说明：在C语言中，函数参数是按值传递的，swap函数内对a和b的修改不会影响main函数中的a和b

    // 但是我们可以用指针来实现交换功能

    return 0;

}

  

void swap(int *a,int *b){

  printf("函数内部交换前：a=%d,b=%d\n",a,b);

  int temp=*a;

  *a=*b;

  *b=temp;

  printf("函数内交换后：a=%d,b=%d\n",*a,*b);

}
```

- **易错点**：
    
    - 定义了指针后**未初始化**就使用（野指针），非常危险。
        
    - 混淆 `p`（地址）、`*p`（该地址的值）和 `&p`（指针变量自身的地址）。
        
    - 对未分配内存的指针进行解引用（如 `int *p; *p=5;`）。
a=23  b=15 a=8

### **（九）用结构体类型处理组合数据**
**核心概念**：

- **结构体定义**：创建一种新的数据类型。
```c
struct 结构体名 {
    类型1 成员名1;
    类型2 成员名2;
    ...
};
```

**结构体变量定义与初始化**：
```c
// 定义的同时定义变量
struct Student {
    char name[20];
    int age;
    float score;
} stu1, stu2 = {"Mike", 20, 90.5};

// 先定义类型，再定义变量
struct Student stu3;
struct Student stu4 = {"Anna", 19, 88.0};
```
**访问结构体成员**：使用点操作符 `.`
```c
strcpy(stu3.name, "Tom"); // 对字符串成员赋值要用strcpy
stu3.age = 21;
stu3.score = 95.5;
printf("%s的年龄是%d\n", stu4.name, stu4.age);
```
**结构体与指针**：定义指向结构体的指针，使用 `->` 操作符访问成员。
```c
struct Student *p_stu = &stu1;
// 以下三种访问方式等价：
printf("Score: %.1f\n", stu1.score);
printf("Score: %.1f\n", (*p_stu).score); // .的优先级高于*，所以要括号
printf("Score: %.1f\n", p_stu->score);   // 最常用的方式：指向运算符
```

**关键代码示例**：
```c
#include <stdio.h>
#include <string.h>

// 定义结构体
struct Book {
    char title[50];
    char author[30];
    float price;
};

// 函数：打印书籍信息，参数是结构体指针
void printBook(struct Book *book) {
    printf("书名: %s\n", book->title);
    printf("作者: %s\n", book->author);
    printf("价格: %.2f元\n\n", book->price);
}

int main() {
    // 初始化结构体变量
    struct Book book1 = {"C程序设计", "谭浩强", 49.8};
    struct Book book2;
    
    // 逐个成员赋值
    strcpy(book2.title, "数据结构");
    strcpy(book2.author, "严蔚敏");
    book2.price = 55.0;
    
    // 调用函数打印信息
    printBook(&book1);
    printBook(&book2);
    
    return 0;
}
```
- **易错点**：
    
    - 混淆结构体类型名 `struct Student` 和变量名 `stu1`。
        
    - 试图用 `=` 直接给字符数组成员赋值（应使用 `strcpy`）。
        
    - 忘记 `->` 操作符而直接用指针访问成员。
### **（十）文件**

- **核心概念**：
    
    - **文件指针**：`FILE *fp;` 它是一个指向文件信息结构的指针。
        
	    - **文件打开**：`fp = fopen("文件名", "打开模式");`
        
        - 常用模式：`"r"` (只读), `"w"` (只写，创建新文件/清空原文件), `"a"` (追加), `"r+"` (读写)。"rb","wb"二进制的读写
            
    - **文件关闭**：`fclose(fp);` **非常重要，否则可能导致数据丢失！**
        
    - **常用文件读写函数**：
        
        - `fgetc(fp)` / `fputc(ch, fp)`：读写一个字符。
            
        - `fgets(str, n, fp)` / `fputs(str, fp)`：读写字符串。
            
        - `fscanf(fp, "格式", 地址)` / `fprintf(fp, "格式", 变量)`：格式化读写。
            
        - `fread(buffer, size, count, fp)` / `fwrite(buffer, size, count, fp)`：二进制读写。
```c

```

**易错点**：

- 打开文件后不检查 `fp` 是否为 `NULL`。
    
- 忘记关闭文件。
    
- 读写模式不匹配（如用 `"r"` 模式去写文件）。