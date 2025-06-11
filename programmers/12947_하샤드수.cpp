// programmers 12947 - 하샤드 수
// https://school.programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0, original = x;  // 원본 값 x 저장
    
    while (x > 0) 
    {
        sum += x % 10;   // x의 일의 자리 숫자를 sum에 더함
        x /= 10;;        // x를 10으로 나누어 마지막 자릿수 제외 -> 다음 자리로 이동   
    }

    // 자릿수 합으로 x가 나누어 떨어지는지 확인
    return (original % sum == 0);
}

int main() 
{
    int x;   // 테스트할 정수형 변수 선언

    // 사용자로부터 숫자 입력 받기
    cout << "하샤드 수를 확인할 숫자를 입력하세요: ";
    cin >> x;

    // 함수 호출 및 결과 출력
    if(solution(x)) 
    {
        cout << x << "는 하샤드 수입니다." << endl;
    } 
    else 
    {
        cout << x << "는 하샤드 수가 아닙니다." << endl;
    }

    return 0;  // 함수 종료
}