/****************************
Copyright:
File name:HelloWord
Description:由用户输入字符串，保存在全局变量，并打印全局变量。
Author:shiyan
Version:1.0
Data:2020/06/19
History:
*****************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX_Hello 25

/* 用户输入的字符串保存在全局变量中 */
char g_helloword[MAX_Hello];

void functiona(int x)
{
    printf("%d\n", x);
}

int main()
{
    printf("Please input string:\n");
    scanf("%s", g_helloword);
    printf("%s", g_helloword);

    functiona(5);

    return 0;
}
