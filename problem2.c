#include <stdio.h>
#include <math.h>

int main() {
    int order1 = 3, order2 = 2;
    double lam1 = 530;
    double lam2 = 700;
    double theta_deg1 = 65.0;


    double theta1_rad = theta_deg1 * 3.1416/ 180.0;

    double d = (order1 * lam1) / sin(theta1_rad);


    double sin_theta2 = (order2 * lam2) / d;

    if (sin_theta2 > 1.0) {
        printf("Second-order bright fringe is not possible (sin(theta) > 1)\n");
    } else {
        double theta2_rad = asin(sin_theta2);
        double theta2_deg = theta2_rad * 180.0 / 3.1416;
        printf("Angle for second-order red light = %.2f degrees\n", theta2_deg);
    }

    return 0;
}
