#include<stdio.h>
//��뷮 input&output �� ��, cin & out ���� scanf & printf�� ����

//�ش� �ֹε���� ������ ���̿� ������ ����ϱ�
int main() {
	freopen("input.txt", "rt", stdin);	// ä�� �� �� �ּ� ó���� ��! �Է� ����) 950320-2012987
	char a[20];							//�ֹε�Ϲ�ȣ�� char �迭�� ���� a[0]a[1]a[2]a[3]a[4]a[5] a[6] a[7]a[8]a[9]a[10]a[11]a[12]a[13] 
	int year, age;
	scanf_s("%s", &a, sizeof(a));		// ���ڿ� �о�� ���� sizeof(�迭��) �߰��� ����� ��.
	printf("%s", a);
	if (a[7] == '1' || a[7] == '2') year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));
	//a[0]='7' �� ���� '7'�̹Ƿ� 55 ���̴�. ���� 7 ����� ���� 55 - 48 ���ش�.
	// 'A' ~ 'Z' : 65 ~ 90
	// 'a' ~ 'z' : 97 ~ 122
	// '0' ~ '9' : 48 ~ 57

	age = 2019 - year + 1;
	printf("\n����: %d ", age);

	if (a[7] == '1' || a[7] == '3') printf("Male \n");
	else printf("\n����: Female \n");

	return 0;
}