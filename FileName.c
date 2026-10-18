#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    float x, y;
    bool in_top, in_middle, in_bottom, is_inside;

    printf("=== Проверка попадания точки в область (Вариант 26) ===\n");

    printf("Введите координату x: ");
    if (scanf("%f", &x) != 1) {
        printf("Ошибка ввода x.\n");
        return 1;
    }

    printf("Введите координату y: ");
    if (scanf("%f", &y) != 1) {
        printf("Ошибка ввода y.\n");
        return 1;
    }

    in_top = (x >= -1.0f && x <= 5.0f) && (y >= 2.0f && y <= 4.0f);
    in_middle = (x >= -1.0f && x <= 2.0f) && (y >= -2.0f && y <= 2.0f);
    in_bottom = (x >= -4.0f && x <= 2.0f) && (y >= -4.0f && y <= -2.0f);

    is_inside = in_top || in_middle || in_bottom;

    printf("\nТочка (%.2f; %.2f) ", x, y);
    if (is_inside) {
        printf("ПРИНАДЛЕЖИТ заштрихованной области.\n");
    }
    else {
        printf("НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n");
    }

    return 0;
}
