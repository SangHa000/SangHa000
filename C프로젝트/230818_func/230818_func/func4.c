#include <stdio.h>

int add(int n1, int n2);

int sub(int n1, int n2);

int main()
{
	//리턴값의 데이터타입 함수명(매개변수,...)
	int n1 = 200; 
	int n2 = 50;

	//add()함수 호출해서 리턴값을 main에서 출력
	//sub()함수 호출해서 리턴값을 main에서 출력
	int a = add(n1,n2);
	printf("더한 값:%d\n", a);

	int b = sub(n1,n2);
	printf("뺀 값:%d\n", b);

}

int add(int n1, int n2)
{
	int a = n1 + n2;
	return a;
}

int sub(int n1, int n2)
{
	int b = n1 - n2;
	return b;
}