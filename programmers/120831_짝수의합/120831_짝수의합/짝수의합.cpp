#include <iostream>
using namespace std;

int solution(int n)
{
	int answer = 0;
	for (int i = 2; i <= n; i += 2)
	{
		answer += i;   // ������� ���� �տ� i�� ����
	}
	return answer;
}

int main()
{
	int n;
	cout << "������ �Է��ϼ���: ";
	cin >> n;

	int result = solution(n);
	cout << n << " ������ ¦�� ��: " << result << endl;

	return 0;
}