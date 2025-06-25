// Programmers 12969 - 직사각형별찍기
// https://school.programmers.co.kr/learn/courses/30/lessons/12969

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;  // a: 가로 길이, b: 세로 길이

    for (int i = 0; i < b; i++) // 세로 길이만큼 반복
    {
        for (int j = 0; j < a; j++)  // 가로 길이만큼 반복
        {
            cout << "*";  // 별 출력
        }
        cout << endl;  // 한 줄 출력 후 줄바꿈
    }
}