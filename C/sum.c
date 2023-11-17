// 2차원 배열의 값을 채우고 (초기화), 배열의 각 행의 합계를 구하여 출력하는 프로그램입니다.
#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void) {

    int s[ROWS][COLS] = { {34, 17, 93, 6, 103}, {41, 5, 77, 32, 119
    }, {64, 56, 124, 2, 45}};
    int sum=0;

    for (int a=0; a<ROWS; a++) {
        for (int b=0; b< COLS; b++){
            printf("%d\t" , s[a][b] ); 
             
            }
            printf("\n");
            }
 


    for (int a=0; a<ROWS; a++) {
        sum=0;
        for (int b=0; b< COLS; b++){
             sum+=s[a][b];
            }
            printf("%d번째 행의 합계: %d \n",a,sum);
            }

    return 0;
        

}
