#include <stdio.h>
main() {
    int c = 1; // int 타입 변수 c를 1로 초기화
    switch(3){  // case 3으로 이동해라.
    case 1: c +=3;
    case 2: c++;
    case 3: c = 0;
    case 4: c+=3;
    case 5: c-=10;
    default: c--;
}
printf("%d",c);
}

