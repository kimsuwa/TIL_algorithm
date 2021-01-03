#include <stdio.h>
//자연수 N이 입력되면 1부터 N까지의 각 숫자들의 약수의 개수를 출력하는 프로그램을 작성
int cnt[50001];
int main() {
	int n, i, j;
	// 1을 약수로 갖는 수는 무엇일까? 모든 수 +1
	// 2를 약수로 갖는 수는 무엇일까? 2의 배수 +1
	// 5를 약수로 갖는 수는 무엇일까? 5의 배수 +1

	scanf("%d",&n);
	// j = i~ n 까지 돌며, j = j+i 배수로 증가
	for (i = 1; i <= n; i++) { // 1 2 3 4 5 6 7 8
		for (j = i; j <= n; j=j+i) { // i = 2, j = 2 ~ 8 중 j가 2의 배수일 때 2,4,6,8
			cnt[j]++;			     // i = 5, j = 5 ~ 8 중 j가 5의 배수일 때 5	
		}
	}

	/*for (i = 1; i <= n; i++) {
		printf("%d ", cnt[i]);
	}*/
	return 0;
}

/*int a[50], b[50];
int num, i, j, res=0, cnt=0;
scanf_s("%d", &num); // N = 8 입력

// 내 코드: for문 두 번 돌리면 타임 리밋트 발생, 시간 복잡도가 n^2 임..
for (i = 1; i <= num; i++) {
	//a[i] = i;					// a 배열에 1 ~ 8 까지 입력
	cnt = 0;					// 초기화 위치 기억!
	for (j = 1; j <= i; j++){
		//if ((a[i] % j) == 0) {
			cnt++;
			//res = cnt;
		//}
	}
	//printf("%d ", res);
	printf("%d ", cnt);
}*/