//#include <stdio.h>
//extern void division();
#include "basic/operationAndBranch.c"
//定义常量,类型向上可以转型,char->int ASCII表对应
#define CON 'A'
//强制转换不改变原数据类型,只做临时转换,不遵循四舍五入
#define INT_CON 5

int main() {
    printf("Hello, World!\n");
    printf("%d,%c,%s,%f\n", CON, '2', "3", (double) INT_CON);
    division();
    return 0;
}
