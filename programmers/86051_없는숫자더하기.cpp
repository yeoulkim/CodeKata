#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{   
    int totalSum = 45;  // 0부터 9까지의 합 45
    int numbersSum = 0;
    
    // numbers 벡터에 있는 숫자들의 합을 구함
    // numbers 벡터는 0부터 9까지의 숫자 중 일부가 빠진 상태
    // 범위 기반 for문
    for (int num : numbers)    // for (int i = 0; i < numbers.size(); ++i) { numbers[i] }와 동일
    {
        numbersSum += num;
    }
    
    // 45 - numbersSum = 빠진 숫자의 합
    int answer = totalSum - numbersSum;
    return answer;
}