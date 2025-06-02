#include <iostream>
using namespace std;

int solution(int n)
{
	int answer = 0;
	for (int i = 2; i <= n; i += 2)
	{
		answer += i;   // 현재까지 더한 합에 i를 더함
	}
	return answer;
}

int main()
{
	int n;
	cout << "정수를 입력하세요: ";
	cin >> n;

	int result = solution(n);
	cout << n << " 이하의 짝수 합: " << result << endl;

	return 0;
}