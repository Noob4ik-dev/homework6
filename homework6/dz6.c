#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

    setlocale(LC_ALL, "RU");

    double x, y;

    printf("Введите координаты точки (x y): ");
    if (scanf_s("%lf %lf", &x, &y) != 2) {
        printf("Ошибка ввода данных!\n");
        return 1;
    }

    double r_squared = x * x + y * y;

    if (x >= 0 && r_squared >= 1.0 && r_squared <= 4.0) {
        printf("Точка (%.2f, %.2f) принадлежит заштрихованной области.\n", x, y);
    }
    else {
        printf("Точка (%.2f, %.2f) не принадлежит заштрихованной области.\n", x, y);
    }

    printf("Проверка точки (1.5, 0.0):\n");
    double cx = 1.5, cy = 0.0;
    double c_r2 = cx * cx + cy * cy;
    if (cx >= 0 && c_r2 >= 1.0 && c_r2 <= 4.0) {
        printf("Точка (%.1f, %.1f) принадлежит области\n", cx, cy);
    }
    else {
        printf("Точка (%.1f, %.1f) не принадлежит области\n", cx, cy);
    }

    return 0;
}