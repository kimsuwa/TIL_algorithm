#include<stdio.h>
//대용량 input&output 할 때, cin & out 보다 scanf & printf가 빠름

//해당 주민등록증 주인의 나이와 성별을 출력하기
int main() {
	freopen("input.txt", "rt", stdin);	// 채점 시 꼭 주석 처리할 것! 입력 예시) 950320-2012987
	char a[20];							//주민등록번호를 char 배열로 읽음 a[0]a[1]a[2]a[3]a[4]a[5] a[6] a[7]a[8]a[9]a[10]a[11]a[12]a[13] 
	int year, age;
	scanf_s("%s", &a, sizeof(a));		// 문자열 읽어올 때는 sizeof(배열명) 추가로 해줘야 함.
	printf("%s", a);
	if (a[7] == '1' || a[7] == '2') year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	//a[0]='7' 은 문자 '7'이므로 55 값이다. 숫자 7 만들기 위해 55 - 48 해준다.
	// 'A' ~ 'Z' : 65 ~ 90
	// 'a' ~ 'z' : 97 ~ 122
	// '0' ~ '9' : 48 ~ 57

	age = 2019 - year + 1;
	printf("\n나이: %d ", age);

	if (a[7] == '1' || a[7] == '3') printf("Male \n");
	else printf("\n성별: Female \n");

	return 0;
}