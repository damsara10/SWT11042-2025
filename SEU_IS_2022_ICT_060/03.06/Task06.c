#include<stdio.h>
int main (){
    int conditionl = 1;
    int condition2 = 0;
    int condition3 = 1;

    int result1 = conditionl && condition2;
    int result2 = conditionl || condition3;
    int result3 = !condition2;

    printf("Result 1: %s\n", result1 ? "true" : "false");
    printf("Result 2: %s\n", result2 ? "true" : "false");
    printf("Result 3: %s\n", result3 ? "true" : "false");

    return 0;
}
