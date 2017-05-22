#include <stdio.h>
#include <math.h>

float decimal_rate(float pay, float hours) {
    return pay / hours;
}

float hourly_cents(float pay) {
    return (pay - floor(pay)) * 100;
}

int main() {
    float hourly_rate;
    float hours;
    float weekly_pay;

    printf("Please enter your weekly pay and hours worked: ");
    scanf("%f, %f", &weekly_pay, &hours);
    printf("Your hourly average pay is %.0f dollars and %.0f cents.\n", 
        floor(decimal_rate(weekly_pay, hours)),
        hourly_cents(decimal_rate(weekly_pay, hours))
    );
    return 0;
}