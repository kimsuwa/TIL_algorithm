#include<stdio.h>
using namespace std;
// stack 사용하지 않고 풀어보기
// 괄호가 입력되면 올바른 괄호이면 “YES", 올바르지 않으면 ”NO"를 출력
// 올바른 괄호 쌍: (())() <= '(' 일 때 cnt++, ')' 일 때 cnt-- 시키면 1 2 1 0 1 0 . 보통 마지막이 0일 때 정상
// 올바르지 않은 괄호 쌍: (()))( <= 1 2 1 0 -1 0 이 나오는데 닫는 괄호가 많이나와 cnt가 음의 값이 나오면  break 시켜야 함.
int main() {
	freopen("input.txt","rt",stdin);
	char a[100];
	int i, cnt = 0;
	scanf_s("%s", &a, sizeof(a));
	for(i = 0; a[i] !='\0' ; i++){ // a[i] 를 사용하여 end 조건 만듬
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;
		if (cnt < 0) break;
	}
	if (cnt == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}