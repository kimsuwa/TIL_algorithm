#include<iostream>
using namespace std;

// N(2<=N<=100)���� ���̰� �Էµ˴ϴ�. �� N���� ��� �� ���� �������̰� ���� ���� ���¸� ���ϱ�� ?
// �������� = �ִ� ���� - �ּ� ����

int main() {
	freopen("input.txt", "rt", stdin);  // cin�� �Է��ؾ� �ϴ� ���� ���Ϸ� �о� ���� �ϴ� ���.
										// ä�� ���� ���� �ּ� ó�� �� ������ �ؾ� ��. ä���� �� ��.
	int n, i, a, max=-2147000000, min=2147000000;
	cin >> n; // ��� ���� ����

	for (i = 1; i <= n; i++) {
		cin >> a; // n �� ��ŭ ���ڸ� �Է���.
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