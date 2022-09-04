#include <stdio.h>
int r1() {
    return 4;//r1()함수 실행에 따라 return문 수행 시 정수 4를 반환.

}
int r10() { //3.r10()함수 실행에 따라 return문 수행 시 r1()함수를 호출.
    return (30+r1());
}

int r100() { //2.r100()함수 실행에 따라 return문 수행 시 r10()함수를 호출.
    return (200 + r10());

}

void main() { //1.c언어 문법에 따라 main 함수 먼저 호출. main 함수 실행에 따라 printf() 구문에 작성된 r100()함수 호출
    printf("%d", r100()); //5.최종적으로 (200 + (30 + 4)) =234

}