#include<stdio.h>

// ���ڿ� ���ڰ� �����ִ� ���ڿ��� �־����� �� �� ���ڸ� �����Ͽ� �� ������� �ڿ����� ����.

int main() {
	char a[51];
	int res = 0, cnt=0, i;
	
	printf("���ڰ� ���� ���ڿ��� �Է��Ͻÿ�: "); //�Ǵ� ���� �ҷ����� freopen("input.txt", "rt", stdin);
	scanf_s("%s", a, sizeof(a));  

	//scanf("%s", &a); // "%s" ������� ä�� �� Ÿ�Ӹ��� ���Ƿ� ������� �� ��.
	for (i = 0; a[i] != '\0'; i++) { // stren ������� �ʰ� ���ڿ��� ���� �˸� �� ����. �迭 ���� '\0' null ���ڰ� ���� �� �̿� 
		if (a[i] >= 48 && a[i] <= 57) 
			res = res * 10 + (a[i] - 48); // res = 0*10 + 2 -> res = 2*10 + 8 
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;

	// ù �ٿ� �ڿ����� ���
	/* my code
	for (i = 0; i < strlen(a); i++) {
		for (j = 1; j < 10; j++) {
			if ((a[i] - 48) == j) printf("%d", j);
		}
	}*/
	// �� ��° �ٿ� ù �ٿ� ��µ� �ڿ����� ��� ���� ���
}