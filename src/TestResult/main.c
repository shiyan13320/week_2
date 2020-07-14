#include <stdio.h>
#include "function_ach.c"
#include "function_ach.h"

/* 加法测试函数 */
int TestAdd_1()
{
    int numa ,numb;
    long long answer;
    char ch;

    numa = 65535;
    numb = 65535;
    ch = '+';
    answer = 131070;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 加法测试函数 */
int TestAdd_2()
{
    int numa ,numb;
    long long answer;
    char ch;

    numa = 0;
    numb = 0;
    ch = '+';
    answer = 0;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 加法测试函数 */
int TestAdd_3()
{
    int numa ,numb;
    long long answer;
    char ch;

    numa = -1;
    numb = 3;
    ch = '+';
    answer = 2;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 减法测试函数 */
int TestSub_1()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 1;
    numb = 1;
    ch = '-';
    answer = 0;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 减法测试函数 */
int TestSub_2()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 0;
    numb = 0;
    ch = '-';
    answer = 0;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 减法测试函数 */
int TestSub_3()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 3;
    numb = -1;
    ch = '-';
    answer = 4;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 乘法测试函数 */
int TestMul_1()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 0;
    numb = 1;
    ch = '*';
    answer = 0;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 乘法测试函数 */
int TestMul_2()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = -1;
    numb = 2;
    ch = '*';
    answer = -2;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 乘法测试函数 */
int TestMul_3()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 65535;
    numb = 65535;
    ch = '*';
    answer = 4294836225;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

/* 除法测试函数 */
int TestDiv_1()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 0;
    numb = 1;
    ch = '/';
    answer = 0;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

int TestDiv_2()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = 1;
    numb = 0;
    ch = '/';
    answer = 0;

    printf("%d%c%d", numa, ch, numb, answer);

    Result_Calculate(numa, numb, ch, answer);
}

int TestDiv_3()
{
    int numa, numb;
    long long answer;
    char ch;

    numa = -4;
    numb = 2;
    ch = '/';
    answer = -2;

    printf("%d%c%d", numa, ch, numb);

    Result_Calculate(numa, numb, ch, answer);
}

int main()
{
    TestAdd_1();
    TestAdd_2();
    TestAdd_3();

    TestSub_1();
    TestSub_2();
    TestSub_3();

    TestMul_1();
    TestMul_2();
    TestMul_3();

    TestDiv_1();
//    TestDiv_2();
    TestDiv_3();
}
