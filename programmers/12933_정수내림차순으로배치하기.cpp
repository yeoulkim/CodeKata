// Programmers 12933 - 정수내림차순으로배치하기
// www.school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    string Numbers = to_string(n);  // 숫자 n을 문자열로 바꾸는 코드
    sort(Nummbers.begin(), Numbers.end(), greater<char>());  // 문자열을 내림차순으로 정렬하는 코드
    long long answer = stoll(Numbers);  // 정렬된 문자열을 다시 long long으로 변환하는 코드

    return answer;  // 결과를 반환하는 코드

}