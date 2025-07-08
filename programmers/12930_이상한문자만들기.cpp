// Programmers 12930 - 이상한 문자 만들기
// https://school.programmers.co.kr/learn/courses/30/lessons/12930

#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int index = 0; // 공백 만나면 다음 글자의 인덱스를 초기화하기 위한 변수

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ') // 공백을 만나면
        {
            answer += ' '; // 공백을 추가하고 인덱스를 초기화
            index = 0;
        }
        else
        {
            if (index % 2 == 0) // 짝수 인덱스이면 대문자
            {
                answer += toupper(s[i]);
            }
            else // 홀수 인덱스이면 소문자
            {
                answer += tolower(s[i]);
            }
            index++; // 인덱스 증가
        }
    }

    return answer;
}