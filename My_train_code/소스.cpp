#include<stdio.h>
int main()
{
	int* pnum; // ������ ���� ����
	int num = 12345; // �Ϲݺ��� ���� & �ʱ�ȭ
	pnum = &num; // num�� �ּҰ��� ��ȯ�Ͽ� pnum�� ����
	printf("num�� ��: %d\n", num);
	printf("num������ �ּ�:%p\n", &num);
	printf("pnum������ �� :%p\n", pnum);
	printf("pnum�� ����Ű�� ��: %d\n", *pnum);

	return 0;

}
