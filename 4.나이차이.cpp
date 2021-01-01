#include<iostream>
using namespace std;

// N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는몇 살일까요 ?
// 나이차이 = 최대 나이 - 최소 나이

int main() {
	freopen("input.txt", "rt", stdin);  // cin에 입력해야 하는 값을 파일로 읽어 오게 하는 방법.
										// 채점 받을 때는 주석 처리 후 컴파일 해야 함. 채점이 안 됨.
	int n, i, a, max=-2147000000, min=2147000000;
	cin >> n; // 사람 수를 받음

	for (i = 1; i <= n; i++) {
		cin >> a; // n 수 만큼 숫자를 입력함.
		if (a > max) max = a; 
		if (a < min) min = a;
	}
	cout << max - min;

	return 0;
}

/* //my code
int main() {
	int i, j, n, max = -2147000000;
	scanf("%d", &n);
	std::vector<int> a(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (abs(a[i] - a[j]) > max) max = abs(a[i] - a[j]);
		}
	}
	printf("%d", max);
	return 0;
}*/