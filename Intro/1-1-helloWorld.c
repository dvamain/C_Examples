#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hello world\n");

    printf("\n\n");

    printf("hello,");
    printf("world");
    printf("\n");

    printf("\n\n");

    //蜂鸣器并没有响，据说是现在有的电脑主板上没这玩意了
    printf("\a");

    //c不是特殊的转义符号
    printf("test\c\n");


    return 0;
}


