/****************************
Copyright:
File name:Result
Description:���û�����������������ʽ���������������ӡ������һֱ���˳���
����֧����־���ܡ�
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

