#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0;
    double b = 5.0;
    double c = 6.0;

    double discriminant = pow(b, 2) - 4 * a * c; // вычисляем дискриминант

    if (discriminant < 0) { // если дискриминант меньше нуля, корни не существуют
        printf("korni ne sushestvyyout\n");
    }
    else if (discriminant == 0) { // если дискриминант равен нулю, есть один корень
        double x = -b / (2 * a);
        printf("koren yravneniya: %lf\n", x);
    }
    else { // если дискриминант больше нуля, есть два корня
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("1 koren yravneniya: %lf\n", x1);
        printf("2 koren yravneniya: %lf\n", x2);
    }

    return 0;
}
