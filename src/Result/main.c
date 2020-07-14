/****************************
Copyright:
File name:Result
Description:由用户输入简单整数算数表达式，程序计算结果并打印，程序一直不退出。
程序支持日志功能。
Author:shiyan
Version:1.0
Data:2020/06/22
History:
*****************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "function_ach.c"
#include "function_ach.h"

int main()
{
    int numa,numb;
    char ch;

    while (1)
    {
         printf("Please input arithmetic expression:\n");
         scanf("%d%c%d", &numa, &ch, &numb);

         Result_Calculate(numa, numb, ch);
    }
    return 0;
}

