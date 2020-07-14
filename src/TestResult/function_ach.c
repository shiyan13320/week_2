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
}

/* 将运算的结果打印在日志文件中 */
void Write_Result(long long result, int len, char strEx[], long long answer)
{
    FILE *fp;
    char strResult[MAX_STR] = {0};
    char strPassFail[MAX_STR] = {0};

    sprintf(strResult, "=%lld", result);
    strcat(strEx, strResult);

    if (result == answer)
    {
        sprintf(strPassFail, "（%s）\n", "pass");
    }
    else
    {
        sprintf(strPassFail, "（%s）\n", "fail");
    }
    strcat(strEx, strPassFail);

    if ((fp = fopen("F:\\PortableGit\\Test1\\test\\test_result.txt", "a")) == NULL)
    {
         printf("Unable to open this file");
         exit(0);
    }
    local_time(fp);

    fwrite(strEx, strlen(strEx), 1, fp);
    fclose(fp);
}

/* 简单的四则运算，并把运算表达式打印在日志中 */
void Result_Calculate(int x, int y, char z, long long ans)
{
    long long result;
    char strExpre[MAX_STR] = {0};

    switch((int)z)
    {
        case '+':
            result = x + y;
            printf("=%d\n", result);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(result, sizeof(strExpre), strExpre, ans);

            break;
        case '-':
            result = x - y;
            printf("=%d\n", result);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(result, sizeof(strExpre), strExpre, ans);

            break;
        case '*':
            result = x * (long long)y;
            printf("=%d\n", result);
            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(result, sizeof(strExpre), strExpre, ans);

            printf("%s\n", strExpre);
            break;
        case '/':
            if (y != 0)
            {
                result = x / y;
                printf("=%d\n", result);
            }
            else
            {


            }

            sprintf(strExpre, "%d%c%d", x, z, y);

            Write_Result(result, sizeof(strExpre), strExpre, ans);

            break;
        default:
          printf("input error\n");
          break;
         }
}
