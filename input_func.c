#include "gpt.h"

int input_func(int* num)
{
    int input;

    printf("���� ������ �Է��Ͻÿ�: ");
    while (1)//1�� True�� ���� ��
    {
        if (scanf("%d", &input) == 1 && input > 0) /*
            scanf("%d", &input) == 1 �� �Է��� ���������� �̷���� ��츦 �ǹ�*/
        {
            *num = input;
            break;
        }
        else {
            printf("�߸��� ���� �Է��Ͽ����ϴ�. �ٽ� �Է��Ͻÿ�: ");
        }
    }

    return 0;
}