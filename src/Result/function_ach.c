#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "function_ach.h"

#define MAX_STR 20

/* 打印当前时间在日志中 */
void local_time(FILE *fptm)
{
    time_t t;
    struct tm *lt;
    time(&t);
    lt = localtime(&t);
    fprintf(fptm, "%d-%d-%d %d:%d  ", lt->tm_year+1900, 1+lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min);
    printf("%d-%d-%d %d:%d  \n", lt->tm_year+1900, 1+lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min);
}

/* 将运算的结果打印在日志文件中 */
void Write_Result(long long result, int len, char strEx[])
{
    FILE *fp;
    char strResult[MAX_STR] = {0};

    sprintf(strResult, "=%lld\n", result);
    strcat(strEx, strResult);

    if ((fp = fopen("F:\\CodeBlocks\\Result\\journal.txt" ,"a")) == NULL)
    {
         printf("Unable to open this file");
         exit(0);
    }
    local_time(fp);

    fwrite(strEx, strlen(strEx), 1, fp);
    fclose(fp);
}

/* 简单的四则运算，并把运算表达式打印在日志中 */
void Result_Calculate(int x, int y, char z)
{
    long long res;
    char strExpre[MAX_STR] = {0};

    switch((int)z)
    {
        case '+':
            res = x + y;
            printf("=%d\n", res);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(res, sizeof(strExpre), strExpre);

            break;
        case '-':
            res = x - y;
            printf("=%d\n", res);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(res, sizeof(strExpre), strExpre);

            break;
        case '*':
            res = x * (long long)y;
            printf("=%lld\n", res);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(res, sizeof(strExpre), strExpre);
            break;
        case '/':
            res = x / y;
            printf("=%d\n", res);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(res, sizeof(strExpre), strExpre);

            break;
        default:
          printf("input error\n");
          break;
         }
}
