/*#include<stdio.h> <-printf 함수와 scanf 함수의 호출 목적

int main() {
	int n, m, sum = 0, i;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		if (i % m == 0) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/


#include<iostream>	 //c++에서 입출력에 관한 일을 하기 위한 목적, 요즘 추세는 iostream.h 지원하지 않는 추세
using namespace std; // 밑에서 std 언급 안하고 쓰려면

//1부터 N까지 숫자 중 M의 배수합 구하기
int main() {
	int n, m, i, sum = 0;
	//std::cin >> n >> m; // scanf 대신하는 입력. 첫 번째 값음 n, 두 번째 값은 m에 입력
	// :: <~ 범위 지정 연산자
	cin >> n >> m; 
	for (i = 1; i <= n; i++) {
		if (i % m == 0) { // m으로 나누어 떨어지면 i는 m의 배수
			sum = sum + i; //m의 배수인 i 값을 합함
		}
	}
	cout << sum;		 // cout과 <<를 이용하여 출력 ; cout << '출력대상1' << '출력대상 2';
	return 0;
}