#include <stdio.h>
typedef struct Time {
    int hours;
    int minutes;
    int seconds;
} Time;
Time addTimes(Time t1, Time t2) {
    Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.seconds %= 60;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    result.minutes %= 60;
    result.hours %= 24;
    return result;
}
void main() {
    printf("SHIV ARORA\n");
    Time t1, t2, result;
    printf("Enter time 1 (HH MM SS): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter time 2 (HH MM SS): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    result = addTimes(t1, t2);
    printf("Sum of times: %d:%d:%d\n", result.hours, result.minutes, result.seconds);
}