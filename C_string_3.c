#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50] = "�ȳ��ϼ���.", b[50] = "���̰� ��� �Ǽ���?";
	printf("%d\n", strcmp(a, b)); //a�� b���� �տ� �ִ���, �ڿ� �ִ��� ���������� ��ġ�� �˷��ش�.

	return 0;
}