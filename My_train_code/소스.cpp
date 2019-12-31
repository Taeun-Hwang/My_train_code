#include<stdio.h>
int main()
{
	int* pnum; // 포인터 변수 선언
	int num = 12345; // 일반변수 선언 & 초기화
	pnum = &num; // num의 주소값을 반환하여 pnum에 저장
	printf("num의 값: %d\n", num);
	printf("num변수의 주소:%p\n", &num);
	printf("pnum변수의 값 :%p\n", pnum);
	printf("pnum이 가리키는 값: %d\n", *pnum);

	return 0;

}
