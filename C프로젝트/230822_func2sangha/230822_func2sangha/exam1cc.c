#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> //srand()
#include <time.h> //time()
void hol_jjack(int brr[], int arr_len);
// 1. main()에서 10개의 숫자를 저장하는 1차원 배열 생성
// 2. 랜덤하게 10개의 숫자를 배열에 저장
// 3. 배열의 주소값을 매개변수로 전달하고 홀,짝을 구분하여 출력 함수
//void hol_jjack(int brr[]);


int main()
{
	srand(time(NULL));
	int random = 0; 
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		random = (rand() % 45) + 1; //난수 생성법
		//printf("%d\n", random);
		arr[i] = random; //arr[i]에 랜덤넣기.
		//printf("%d\n", arr[i]); // 디버깅
		//while (1); // 디버깅할때 좋음.
	}
	int arr_len = sizeof(arr) / sizeof(int); //40 /4 =10 ==> 길이재기
	hol_jjack(arr, arr_len); //==> arr_len에 길이잰값 10이 입력댐.
	
}

void hol_jjack(int brr[], int arr_len)
{
	for (int i = 0; i < arr_len; i++) {
		int a = brr[i];
		if (a % 2 == 0) {
			printf("%d는 짝수입니다.\n",a);
		}
		else if (a % 2 == 1) {
			printf("%d는 홀수입니다.\n",a);
		}
	}
}//컨트롤 f7 오류검사
// f5 실행