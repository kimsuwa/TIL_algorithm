#include<stdio.h>

// 문자와 숫자가 섞여있는 문자열이 주어지면 그 중 숫자만 추출하여 그 순서대로 자연수를 만듬.

int main() {
	char a[51];
	int res = 0, cnt=0, i;
	
	printf("숫자가 섞인 문자열을 입력하시오: "); //또는 파일 불러오기 freopen("input.txt", "rt", stdin);
	scanf_s("%s", a, sizeof(a));  

	//scanf("%s", &a); // "%s" 띄워쓰면 채점 시 타임리밋 나므로 띄워쓰지 말 것.
	for (i = 0; a[i] != '\0'; i++) { // stren 사용하지 않고 문자열의 끝을 알릴 수 있음. 배열 끝에 '\0' null 문자가 들어가는 것 이용 
		if (a[i] >= 48 && a[i] <= 57) 
			res = res * 10 + (a[i] - 48); // res = 0*10 + 2 -> res = 2*10 + 8 
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;

	// 첫 줄에 자연수를 출력
	/* my code
	for (i = 0; i < strlen(a); i++) {
		for (j = 1; j < 10; j++) {
			if ((a[i] - 48) == j) printf("%d", j);
		}
	}*/
	// 두 번째 줄에 첫 줄에 출력된 자연수의 약수 개수 출력
}