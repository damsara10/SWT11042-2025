#include<stdio.h>
int main () {
    int studentID = 54321;
    float GPA = 3.90;
    char grade[]= "A+";

    grade[0]='A';
    grade[1]='+';
    printf("Updated studentID:%d\nUpdated GPA:%.2f\nUpdated Grade:%s",studentID,GPA,grade);
    return 0;
}
