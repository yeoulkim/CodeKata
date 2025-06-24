// Programmers 77884 - 약수의 개수와 덧셈
// https://school.programmers.co.kr/learn/courses/30/lessons/77884

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right)
{
    int answer  = 0;
    
    for (int i = left; i <= right; i+)
    {
        int root = (int)sqrt(i);    // sqrt(i) : i의 제곱근을 구함
        // i의 제곱근 = 약수의 개수가 홀수인지 짝수인지 판단하는 기준

        if (root * root == i)  // root를 제곱했을 때 다시 i가 나오면 i는 제곱수
        {
            answer -= i;  // 제곱수는 약수의 개수가 홀수이므로 빼기
        }
        else
        {
            answer += i;  // 제곱수가 아니면 약수의 개수가 짝수이므로 더하기    
        }
    }

    return answer;
}
    