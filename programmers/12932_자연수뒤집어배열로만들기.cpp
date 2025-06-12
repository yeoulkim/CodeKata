// programmers 12932 - 자연수 뒤집어 배열로 만들기
// https://school.programmers.co.kr/learn/courses/30/lessons/12932

# include <iostream>
# include <vector>

using namespace std;

vector<int> solution(long long n)
{
    vector<int> answer;  // 결과를 저장할 벡터

    while ( n > 0 )
    {
        answer.push_back(n % 10);  // n의 마지막 자리 숫자를 벡터에 추가
        n /= 10;                    // n을 10으로 나누어 마지막 자리 숫자를 제거
    }

    return answer;  // 완성된 벡터를 반환
}

void printVector(const vector<int>& vec)
{
    cout << "[";

    // 벡터의 모든 요소를 출력
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i];
        if (i < vec.size() - 1)
        {
            cout << ", ";     // 마지막 요소가 아니면 쉼표 추가 -> 마지막 요소만 쉽표 제거
        }
    }

    cout << "]" << endl;  
}

int main()
{
    long long n = 12345;  // 예시 입력
    vector<int> answer = solution(n);  // 함수 호출

    printVector(answer);  // 결과 출력

    return 0;  // 프로그램 종료
}