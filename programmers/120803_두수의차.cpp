// programmers 120803 - 두 수의 차
// https://school.programmers.co.kr/learn/courses/30/lessons/120803

#include <iostream>
using namespace std;

int solution(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    int num1, num2;  // ���� ���� �߰�

    cout << "ù ��° ����: ";
    cin >> num1;
    cout << "�� ��° ����: ";
    cin >> num2;

    int result = solution(num1, num2);

    cout << "�� ���� ����: " << result << endl;

    return 0;
}
