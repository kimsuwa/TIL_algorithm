#include<stdio.h>
using namespace std;
// stack ������� �ʰ� Ǯ���
// ��ȣ�� �ԷµǸ� �ùٸ� ��ȣ�̸� ��YES", �ùٸ��� ������ ��NO"�� ���
// �ùٸ� ��ȣ ��: (())() <= '(' �� �� cnt++, ')' �� �� cnt-- ��Ű�� 1 2 1 0 1 0 . ���� �������� 0�� �� ����
// �ùٸ��� ���� ��ȣ ��: (()))( <= 1 2 1 0 -1 0 �� �����µ� �ݴ� ��ȣ�� ���̳��� cnt�� ���� ���� ������  break ���Ѿ� ��.
int main() {
	freopen("input.txt","rt",stdin);
	char a[100];
	int i, cnt = 0;
	scanf_s("%s", &a, sizeof(a));
	for(i = 0; a[i] !='\0' ; i++){ // a[i] �� ����Ͽ� end ���� ����
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;
		if (cnt < 0) break;
	}
	if (cnt == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}