#include <stdio.h>

struct insa //순서 1.구조체 정의하는 코드
{
    char name[10];
    int age
};

void main(){
    struct insa a[]={"kim",28,"lee",38,"park",41,"choi",30}; //2.구조체를 초기화하는 코드.

    struct insa *p;//3.구조체에 대해 포인터 주소 p를 선언.
    p=a;//4.p에 a라는 주소 값을 넣음. a는 a[0]과 같음. 즉 [kim,28].
    p++;//5.포인터 주소를 하나 증가시킴. a[1]이 되면서 lee,38 값을 가짐.
    printf("%s",p->name); //현재 p의 name을 출력. %s: 문자열 출력.
    printf("%d",p->age);  //%d:10진수 정수형 출력.
    }