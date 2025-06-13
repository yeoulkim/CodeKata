// programmers 76501 - 음양 더하기
// https://school.programmers.co.kr/learn/courses/30/lessons/76501

#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) 
{
    int answer = 0;
    
    for (int i = 0; i < absolutes.size(); ++i)
    {
        if (signs[i])
        {
            answer += absolutes[i];
        }
        else
        {
            answer += -absolutes[i];
        }
    }
    
    return answer;
}