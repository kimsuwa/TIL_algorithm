/*#include<stdio.h> <-printf �Լ��� scanf �Լ��� ȣ�� ����

int main() {
	int n, m, sum = 0, i;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		if (i % m == 0) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/


#include<iostream>	 //c++���� ����¿� ���� ���� �ϱ� ���� ����, ���� �߼��� iostream.h �������� �ʴ� �߼�
using namespace std; // �ؿ��� std ��� ���ϰ� ������

//1���� N���� ���� �� M�� ����� ���ϱ�
int main() {
	int n, m, i, sum = 0;
	//std::cin >> n >> m; // scanf ����ϴ� �Է�. ù ��° ���� n, �� ��° ���� m�� �Է�
	// :: <~ ���� ���� ������
	cin >> n >> m; 
	for (i = 1; i <= n; i++) {
		if (i % m == 0) { // m���� ������ �������� i�� m�� ���
			sum = sum + i; //m�� ����� i ���� ����
		}
	}
	cout << sum;		 // cout�� <<�� �̿��Ͽ� ��� ; cout << '��´��1' << '��´�� 2';
	return 0;
}