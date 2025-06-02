#include <iostream>
using namespace std;

int solution(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    int num1, num2;  // 변수 선언 추가

    cout << "첫 번째 숫자: ";
    cin >> num1;
    cout << "두 번째 숫자: ";
    cin >> num2;

    int result = solution(num1, num2);

    cout << "두 수의 차는: " << result << endl;

    return 0;
}
