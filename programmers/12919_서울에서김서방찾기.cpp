// Programmers 12919 - 서울에서 김서방 찾기
// https://school.programmers.co.kr/learn/courses/30/lessons/12919

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) 
{
    for (int i = 0; i < static_cast<int>(seoul.size()); i++)
    {
        if (seoul[i] == "Kim")
        {
            return "김서방은 " + to_string(i) + "에 있다";
        }
    }
    
    return "";
}