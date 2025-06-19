// programmers 12935 - 제일 작은 수 제거하기
// https://school.programmers.co.kr/learn/courses/30/lessons/12935

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{   
    if(arr.size() == 1) return{-1};
    
    int minIndex = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    
    vector<int> answer;
    for (int i = 0; i < arr. size(); i++)
    {
        if (i != minIndex)
        {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}