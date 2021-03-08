#include <stdio.h>

//是一个从摄氏度转换到华氏度的程序

int main(int argc, char const *argv[])
{

    int fahr = 0;
    int celsius = 0;
    //符号常量用全大写
    int LOWER= 0;
    int UPPER = 300;
    int STEP = 20;



    fahr =  LOWER;
    while (fahr <= UPPER)
    {
        //celsius = (5/9) * (fahr -32); 这个不行，因为是int啊...下面输出一个5/9吧
        celsius = 5 * (fahr -32) / 9;
        printf("celsius = %d, fahr = %d\n", celsius, fahr);
        fahr += STEP;
    }




    int testIntDiv = 0;
    testIntDiv = 5/9;
    printf("\n testIntDiv = %d\n", testIntDiv);

    float testFloatDiv = 0;
    testFloatDiv = (float)(5)/(float)(9);
    printf("\n testFloatDiv = %f\n", testFloatDiv);




    float floatFahr = 0;
    float floatCelsius = 0;
    floatFahr = LOWER;
    while (floatFahr <= UPPER)
    {
        floatCelsius = (5.0/9.0) * (floatFahr - 32.0);
        //3.0f指浮点数至少占3个字符宽，且不带小数点和小数部分
        //6.1f指浮点数至少占6个字符宽，且小数点后有一位数字
        printf("floatCelsius = %3.0f, floatFahr = %6.1f\n", floatCelsius, floatFahr);
        floatFahr += STEP;
    }




    return 0;
}
