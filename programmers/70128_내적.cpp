// Programmers 70128 - 내적
// https://school.programmers.co.kr/learn/courses/30/lessons/70128

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int b)
{
    int answer = 0;

    for (int Index = 0; Index < a.size(); Index++)
    {
        answer += a[Index] * b[Index];  // 내적 : 두 벡터의 같은 위치의 숫자끼리 곱하고 합산함
    }

    return answer;
}
