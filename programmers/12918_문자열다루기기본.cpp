// Programmers 12918 - 문자열 다루기 기본
// https://school.programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    if (s.length() != 4 && s.length() != 6)
    {
        return false; // 길이가 4 또는 6이 아니면 false
    }

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] <'0' || s[i] > '9')  // 각 문자가 숫자가 아닌 경우, 숫자는 문자로 되어있음
        {
            return false; // 숫자가 아닌 문자가 있으면 false
        }
    }

    return true; // 모든 조건을 만족하면 true
}
