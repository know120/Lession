/* 
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
 */
#include<stdio.h>

int main(){
    int physics, chemistry, biology, mathematics, computer;
    printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer);
    int total = physics + chemistry + biology + mathematics + computer;
    float percentage = (float)total / 5;
    if (percentage >= 90) {
        printf("Grade A & Percentage is %.2lf\n",percentage);
    } else if (percentage >= 80) {
        printf("Grade B & Percentage is %.2lf\n",percentage);
    } else if (percentage >= 70) {
        printf("Grade C & Percentage is %.2lf\n",percentage);
    } else if (percentage >= 60) {
        printf("Grade D & Percentage is %.2lf\n",percentage);
    } else if (percentage >= 40) {
        printf("Grade E & Percentage is %.2lf\n",percentage);
    } else {
        printf("Grade F & Percentage is %.2lf\n",percentage);
    }
    return 0;
}