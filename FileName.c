#include <stdio.h>
#include <locale.h>

void main() {

    const int a = 1500;
    const int x = 30;
    const int treb = 133;
    const int perv = 75;
        int odna_75 = a / 75;
        int ost = 133 - perv;


        setlocale(LC_CTYPE, "");

        int denx = a + (ost * x);




    printf("��������� �������� � ���� X\n");
    printf("________________________________\n\n");
    printf("�������:\n");
    printf("- ��������� ��� ������� ������ 75 �����: %d ���.\n", a);
    printf("- ���� ������ ����� 75 ��������: %d ���.\n", x);
    printf("- ������� ����� ����� ������� � ���� X: %d ��.\n", treb);


    printf("������:\n");
    printf("- ������� ����� �����, �� ������� ���������� �����: %d ��. - %d ��. = %d ��.\n", treb, perv, ost);
    printf("- ��������� �������� �� ���������� �����: %d ��. * %d ���. = %d ���.\n", ost, x, ost * x);
    printf("- ��������� �������� �� 133 ������: %d ���. + %d ���. = %d ���.\n", a, ost * x, denx);
    printf("================================\n");
    printf("�����: %d ���.\n", denx);

    return 0;
}
