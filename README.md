# homework2

### Условие задачи

Мальчик, продающий на улице газеты, зарабатывает а руб. на продаже первых 75
газет. На каждой из ос-тальных проданных газет он зарабатывает по х руб. Напишите
программу, которая выведет на дисплей заработок мальчика, если он продаст 133
газеты.

### 1. Алгоритм и блок-схема
1. **Начало**
2. Задать константы:
   - `a` = 1500 - стоимость первых 75 газет (руб.)
   - `x` = 30 - стоимость последущих проданных газет (руб.)
   - `treb` = 133 - требуемое кол-во газет (шт.)
3. Вычислить кол-во оставшихся газет:
   `ost` = `treb` - `75`
4. Расчетать стоимость продажи:
   `denx` = `a`+(`ost`*`x`)
5. **Конец**

### Блок-схема
![Блок-схема алгоритма](Заданиевторое.png)

(https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22vKg7L8X21BIwSFlcxruJ%22%3E7Vpbc6M2GP01zLQP6SDExTzGdvYynbY7TbvdPGVU0BpmMPJgOcb99ZWMMEhiAyZgnM2%2BYOlDFuic8x0hgQEX6%2Fx9hjbRbyTEiWGZYW7ApWFZwLZc9sMjhyLizZwisMriUDSqAvfxf1gETRHdxSHeSg0pIQmNN3IwIGmKAyrFUJaRvdzsK0nkq27QCmuB%2BwAlevSfOKRREZ1ZXhX%2FgONVVF4ZuH5xZo3KxmIk2wiFZF8LwTsDLjJCaFFa5wuccPBKXIr%2FvfvG2dONZTilXf6w%2BOD8%2Brf3%2BfFm9vHx8TONo4jAG6vo5QklOzFgY2ka%2FpIf56axBMbMK8vsOD8e78SA6KFEiV2JEcIq830UU3y%2FQQE%2Fs2eaYLGIrhNWA6yo37QYxxPOKM5rITGI95isMc0OrIk4C00BqFBUie%2B%2BogeUsahGzUzEkFDE6tRzBRorCNzOwNDWMdTwScNbLkZWCxK03caBDEtGdmmI%2BUXM50DCoSRWHaIaBk4DBGUswwmi8ZMs8SZcxBU%2BkZjdScWAa%2F3iSBwAUwF3S3ZZgMX%2F6qLUuoJyR67SEUXZClOtoyNRp4H3587RuMsNa4E0AlnybniRkYKSBCdklaE1o2qDs5jdA87Uc5%2BqE2058TXOcel8I%2BXICda2JFHhHyxJ3DeXJI6vJMnJqc5PEsXxvG5JwtBEh1qzDW%2BwHSONPI1dlhhPhuWiNRf7ikE79xyN8Swi639324tMG9bMaQaxnhJNehht3vCbQWNGcsRuzsbjJhy5MOZQHkEMccrHc%2Fyx5j8xo3rnOT%2BXDVmt1laHW0qg8SG3oQw5bIL8oi4E9LmabPlFAWQibhDohRE7oVEi5jjdROqPhpie2i80bpzH9AsvM3ssag%2BiHS8v81qz5aHN7AsL7cD4lcwKwJMJdkDPOQH4cm7ZqgJGfnACs29kkqnJ45IuD6DZDEs9geAlXb7MaA0odrxpt%2Fj8Sr3dUp5JnCagL%2BrtFtSdiq9lb8WalR%2BLda1zXNe6uo9NuIr1QEf8hhBqSGGQ%2F5X6NvkjSG5%2B%2F%2FP243zRtBXwjNGnJMXPunzK7ulLvfJQeT6vVkZ%2FrMlOr7h1I9aFwbVa1FROrxo97Gv0QOlIXUUMZ%2FSNsmjIqhfIoiu9V8Kaq86qXVlrY39k0s7bkvpBmtG4ztY6Gpm1wfdIKhOufPdBst3RTbiYlafbqRxIGrbiwq59WWmctwp77QmtPVz2nTyhNa0P64ukF2b0kJlpTklxKzOdKVbc31YfkEemWN%2FFG8m0wVt5cla3Nty%2B%2B%2BbAVzR2YWmUc8b3s6Sa1jNUPnsL43RDpTA6vlAZTBhgUGFc%2FXSu7HXAvpue6jscraOxeTtvMfw6ntCLHfLXrw0lp7WNxrG18bbW3Nq7vb682X6LAMbmTf8EZLictm1LnqvNtsn6WKt9PDJ0tvuTiqaN666iceyJk%2F28rZrXnuzqNgr0T9%2B2nJ3uqm%2FoXY3N3fBvtKdfsXnXJA%2B779eA6i4bdIZKa1atvrQtmlffK8O7%2FwE%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

### 2. Реализация программы
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

### 3. Результат работа программы

    Заработок мальчика в день X
    ________________________________

    Условие:
    - Зарабаток при продаже первых 75 газет: 1500 руб.
    - Цена газеты после 75 проданых: 30 руб.
    - Сколько газет нужно продать в день X: 133 шт.
    Расчет:
    - Сколько газет будет, за которые повышенный тариф: 133 шт. - 75 шт. = 58 шт.
    - Заработок мальчика за повышенный тариф: 58 шт. * 30 руб. = 1740 руб.
    - Заработок мальчика за 133 газеты: 1500 руб. + 1740 руб. = 3240 руб.
    ================================
    Ответ: 3240 руб.

### 4. Информация о разработчике

Гусев Иван бИЦ-251


