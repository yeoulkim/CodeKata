// Programmers 12917 - 문자열 내림차순으로 배치하기
// https://school.programmers.co.kr/learn/courses/30/lessons/12917

#include <string>
#include <vector>
#include <algorithm> // std::sort 사용을 위해 필요

using namespace std;

int solution(string s)
{
    sort(s.begin(), s.end(), greater<char>()); // 문자열을 내림차순으로 정렬
    return s; // 정렬된 문자열 반환
}