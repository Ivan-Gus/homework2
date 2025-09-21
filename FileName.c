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




    printf("Заработок мальчика в день X\n");
    printf("________________________________\n\n");
    printf("Условие:\n");
    printf("- Зарабаток при продаже первых 75 газет: %d руб.\n", a);
    printf("- Цена газеты после 75 проданых: %d руб.\n", x);
    printf("- Сколько газет нужно продать в день X: %d шт.\n", treb);


    printf("Расчет:\n");
    printf("- Сколько газет будет, за которые повышенный тариф: %d шт. - %d шт. = %d шт.\n", treb, perv, ost);
    printf("- Заработок мальчика за повышенный тариф: %d шт. * %d руб. = %d руб.\n", ost, x, ost * x);
    printf("- Заработок мальчика за 133 газеты: %d руб. + %d руб. = %d руб.\n", a, ost * x, denx);
    printf("================================\n");
    printf("Ответ: %d руб.\n", denx);

    return 0;
}
