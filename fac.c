// ���Ϸ� ���� ����ϴ� �Լ��Դϴ�.
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

    printf("n�� �Է��Ͻÿ�: ");
    scanf("%lf", &i);

    while (i != 0) {

        k=k+1/factorial(i);
        i--;
    }
        
    printf("���Ϸ��� ���� %lf�Դϴ�.\n", k);
    return 0;
}