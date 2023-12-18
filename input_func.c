#include "gpt.h"

int input_func(int* num)
{
    int input;

    printf("양의 정수를 입력하시오: ");
    while (1)//1은 True와 같은 뜻
    {
        if (scanf("%d", &input) == 1 && input > 0) /*
            scanf("%d", &input) == 1 은 입력이 성공적으로 이루어진 경우를 의미*/
        {
            *num = input;
            break;
        }
        else {
            printf("잘못된 값을 입력하였습니다. 다시 입력하시오: ");
        }
    }

    return 0;
}