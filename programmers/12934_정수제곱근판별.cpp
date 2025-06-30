// Programmers 12934 - 정수 제곱근 판별
// www.school.programmers.co.kr/learn/courses/30/lessons/12934

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long root = static_cast<long long>(sqrt(n));   // sqrt(n) n의 제곱근을 구함
    // static_cast<long long>는 double을 long long으로 변환하는 안전한 방법입니다.
    
    if (root * root == n)
    {
        long long next = root + 1;
        return next * next;
    }
    
    return -1;
}