
#include<iostream>
using namespace std;

// �ڿ��� a,b�� �־����� a ���� b������ ���� ���İ� �Բ� ���
int main() {
	int a, b, i, sum = 0;
	cin >> a >> b; // �ڿ��� a�� b�� �Է� ����

	for (i = a; i < b; i++) { // a���� b ������ ����
		cout << i << "+"; // ���: a+(a+1)+ ..... +b-1+
		sum = sum + i;
	}
	//for ���� �������� i ���� b ���� ����
	cout << i << "="; //���: 'b = ' ;i�� b�� ���� �����Ƿ� i��� b�� �ᵵ ��.
	cout << sum + i;  //���: ' sum+b '
					  //���� ���: a+(a+1)+ ..... +b-1+b = a ~ b �� ��
	return 0;
}
