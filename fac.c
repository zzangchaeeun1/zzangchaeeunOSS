// 오일러 수를 계산하는 함수입니다.
#include <stdio.h>

double factorial(double n) {
    double i,j;
    j=1;
    for (i = 1; i <= n; i++){

        j=j*i;
        
} return j;

}

int main(void) {
    double i;
    double k;
    k=1;

    printf("n를 입력하시오: ");
    scanf("%lf", &i);

    while (i != 0) {

        k=k+1/factorial(i);
        i--;
    }
        
    printf("오일러의 수는 %lf입니다.\n", k);
    return 0;
}