
#include<iostream>
using namespace std;

// 자연수 a,b가 주어지면 a 부터 b까지의 합을 수식과 함께 출력
int main() {
	int a, b, i, sum = 0;
	cin >> a >> b; // 자연수 a와 b를 입력 받음

	for (i = a; i < b; i++) { // a부터 b 전까지 돌음
		cout << i << "+"; // 출력: a+(a+1)+ ..... +b-1+
		sum = sum + i;
	}
	//for 문을 빠져나온 i 값은 b 값과 동일
	cout << i << "="; //출력: 'b = ' ;i와 b의 값이 같으므로 i대신 b를 써도 됨.
	cout << sum + i;  //출력: ' sum+b '
					  //최종 출력: a+(a+1)+ ..... +b-1+b = a ~ b 의 합
	return 0;
}
