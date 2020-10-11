#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50] = "안녕하세요.", b[50] = "나이가 어떻게 되세요?";
	printf("%d\n", strcmp(a, b)); //a가 b보다 앞에 있는지, 뒤에 있는지 사전에서의 위치를 알려준다.

	return 0;
}