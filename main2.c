#include <stdio.h>

int main()
{
    double matrix[3][3];
    int i, j;
    double sum_main_diag = 0, sum_side_diag = 0;

    // Ввод значений матрицы с консоли
    printf("vvedite znacheniya matrix 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Вычисление суммы элементов главной диагонали
    for (i = 0; i < 3; i++) {
        sum_main_diag += matrix[i][i];
    }

    // Вычисление суммы элементов побочной диагонали
    for (i = 0; i < 3; i++) {
        sum_side_diag += matrix[i][2-i];
    }

    // Вывод результатов
    printf("summa elementov main diag: %lf\n", sum_main_diag);
    printf("summa elementov side giag: %lf\n", sum_side_diag);

    int int_matrix[2][2];
    int k, l;

    // Ввод значений матрицы с консоли
    printf("vvedite znacheniya elementov matrix 2x2:\n");
    for (k = 0; k < 2; k++) {
        for (l = 0; l < 2; l++) {
            scanf("%d", &int_matrix[k][l]);
        }
    }

    // Вывод квадрата матрицы
    printf("kvadrat matrix:\n");
    for (k = 0; k < 2; k++) {
        for (l = 0; l < 2; l++) {
            printf("%d ", int_matrix[k][l]*int_matrix[k][l]);
        }
        printf("\n");
    }

    return 0;
}
