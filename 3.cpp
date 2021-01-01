#include<iostream>
using namespace std;

// 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력
// 진약수: n의 약수 중 n을 제외한 약수 (ex. 6의 약수: 1 2 3 6, 진약수: 1 2 3
int main() {
	int n, i, sum = 1;
	cin >> n; // 자연 수 n의 값을 받음
	cout << "1"; //1은 모든 수의 약수이므로 1 먼저 출력

	for (i = 2; i < n; i++) { // n 전까지 돌아야 함. n까지 돌으면 자기 자신도 약수가 되어 버리니까.
		if (n % i == 0) { //n 의 값이 i로 나누어 떨어지면 i는 n의 약수
			cout << "+" << i; // '+ 숫자' 형태로 찍기 위해
			sum = sum + i;
		}
	}
	cout << "=" << sum;  // n=20일 때, 1 + 2 + 4 + 5 + 10 = 22 출력
	return 0;
}
/* //my code
int main() {
	int i, n, m, sum = 1;
	scanf("%d", &n);

	// n 의 진약수의 합 출력하기 
	printf("1");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			sum += i;
			printf("+%d", i); // +의 위치 주의! 출력 시 '+=' 형태 안되도록!
		}

	}
	printf(" =%d", sum);
	return 0;
}
*/