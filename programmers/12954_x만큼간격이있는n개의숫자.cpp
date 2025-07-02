// Programmers 12954 - x만큼간격이있는n개의숫자
// www.school.programmers.co.kr/learn/courses/30/lessons/12954

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n)
{
    vector<long long> answer;
    for (int i = 1; i <= n; ++i)
    {
        answer.push_back(static_cast<long long>(x) * i);  // x와 i를 곱하여 long long 타입으로 변환 후 벡터에 추가
    }

    return answer;
}

