#include "gpt.h"



int main()
{
    int num[4];

    for (int i = 0; i < 4; i++)
    {
        input_func(&num[i]);
    }

    order_func(num);

    printf("�Է��� �� ���� ������ ������� ����ϸ� %d %d %d %d �Դϴ�.\n",
        num[0], num[1], num[2], num[3]);

    printf("���� ū �� ������ ����: %d * %d = %d �Դϴ�.\n", 
        num[0], num[1], num[0] * num[1]);

    printf("���� ���� �� ������ ����: %d * %d = %d �Դϴ�.\n",
        num[2], num[3], num[2] * num[3]);

    if (num[2] * num[3] != 0)
    {
        printf("���� ū �� ���� ���� ����� ���� ���� �� ������ ������ ������ %d / %d = %d �Դϴ�.\n",
            (num[0] * num[1]), (num[2] * num[3]), (num[0] * num[1]) / (num[2] * num[3]));
    }
    else
    {
        printf("�����Ⱑ �Ұ��� �մϴ�.");
    }
    
    return 0;

}
