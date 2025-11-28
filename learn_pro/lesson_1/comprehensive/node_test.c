#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data[20];
    struct Node* next;
};

int main() {
  // 创建链表节点
  // 这是头节点，初始为 NULL
    struct Node* head = NULL;
    // 创建临时节点
    struct Node* temp;
    // 数据
    char input[20];

    // 创建第一个节点
    // malloc是什么意思？
    // malloc()函数用来分配内存
    // 分配这个构造体的内存大小给head指针？
    head = (struct Node*)malloc(sizeof(struct Node));
    // 赋值给head节点的data字段
    strcpy(head->data, "Hello");
    // 下一个指向NULL
    head->next = NULL;

    // 添加第二个节点
    temp = (struct Node*)malloc(sizeof(struct Node));
    strcpy(temp->data, "World");
    // 临时节点指向NULL，head指向临时节点
    // head->temp->NULL
    temp->next = NULL;
    head->next = temp;

    // 添加第三个节点
    temp = (struct Node*)malloc(sizeof(struct Node));
    strcpy(temp->data, "C");
    temp->next = head; // 这里形成了一个环
    head->next->next = temp;

    // 遍历链表（只遍历前5个节点防止死循环）
    int count = 0;
    struct Node* p = head;
    while (p != NULL && count < 5) {
        printf("%s ", p->data);
        p = p->next;
        count++;
    }

    // 问题：程序输出是什么？Hello World C Hello World
    // 附加：这段代码存在什么问题？ 看不出来

    return 0;
}