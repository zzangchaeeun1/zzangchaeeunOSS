#include <stdio.h>
/*
구조체를 이용하여 크기가 3인 구조체 배열을 만들어라. 구조체 배열에 각각의 책 제목과
 출판 연도를 입력받아 저장하고, 가장 최근에 출판된 책의 이름을 출력하라.
*/

struct book {
    char name[100];
    int year;
};


int main(void) {

    struct book list[3];
    int i;
    int min_year=0;
    char min_name[20];
    int a;

    for(i=0; i<3; i++) {

        printf("책 이름: ");
        scanf("%s", list[i].name );
        printf("출판년도: ");
        scanf("%d", &list[i].year );

    }

    for (i=0; i<=3; i++)
    {
        if (list[i].year>=min_year) {
            min_year = list[i].year;
            a = i;
        }
        
    }
    printf("가장 최근에 출판된 책: %s", list[a].name);
    return 0;

        
}
