#include "gpt.h"



int main()
{
    int num[4];

    for (int i = 0; i < 4; i++)
    {
        input_func(&num[i]);
    }

    order_func(num);

    printf("입력한 네 개의 정수를 순서대로 출력하면 %d %d %d %d 입니다.\n",
        num[0], num[1], num[2], num[3]);

    printf("가장 큰 두 정수의 곱은: %d * %d = %d 입니다.\n", 
        num[0], num[1], num[0] * num[1]);

    printf("가장 작은 두 정수의 곱은: %d * %d = %d 입니다.\n",
        num[2], num[3], num[2] * num[3]);

    if (num[2] * num[3] != 0)
    {
        printf("가장 큰 두 정수 곱의 결과를 가장 작은 두 정수의 곱으로 나누면 %d / %d = %d 입니다.\n",
            (num[0] * num[1]), (num[2] * num[3]), (num[0] * num[1]) / (num[2] * num[3]));
    }
    else
    {
        printf("나누기가 불가능 합니다.");
    }
    
    return 0;

}
