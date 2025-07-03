// Programmers 12912 - 두 정수의 합
// https://school.programmers.co.kr/learn/courses/30/lessons/12912

#include <string>
#include <vector>
#include <algorithm> // 여기에 std::min, std::max 있음

using namespace std;

long long solution(int a, int b) 
{   // static_cast<long long>을 사용하는 이유는 int 범위를 넘는 경우를 방지
    long long MinValue = static_cast<long long>(min(a, b));     // min(A, B) : 두 값 중 작은 값을 반환하는 함수 - 소문자 사용
    long long MaxValue = static_cast<long long>(max(a, b));
    
    long long Count = MaxValue - MinValue + 1;  // 항의 개수 구하기
    long long answer = (MinValue + MaxValue) * Count / 2;   // 등차수열의 합 공식
  
    return answer;
}