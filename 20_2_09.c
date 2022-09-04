#include <stdio.h>

void main()
{
    int i =0, c=0; //실행순서1.int타입의 변수 i,c 값 선언.
    while (i <10) { // 실행순서2.while 조건식에 따라 i가 10보다 작을 때까지 반복. 
        i++; //실행순서3.i값을 1씩 증가시킴. 
        c*=i; // 실행순서4.c=c*i와 같은 뜻. c가 0이기 때문에 계속 반복해도 c는 0.
    }
    printf("%d", c); while을 통해 수행한 변수 c의 최종값 0 출력.
}

