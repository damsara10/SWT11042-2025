#include<stdio.h>

int main(){
    int value =6;
    char result = (value % 2 == 0) ? 'E' : '0';
    printf("value is %c (Even, 0: odd)\n", result);

    return 0;
}
