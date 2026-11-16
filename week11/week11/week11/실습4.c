#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s) {
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
}

int main(void) {
    int total, hour, min, sec;

    printf("총 시간(초)을 입력하시오 : ");
    scanf("%d", &total);

    to_hms(total, &hour, &min, &sec);

    printf("%d시간 %d분 %d초\n", hour, min, sec);

    return 0;
}