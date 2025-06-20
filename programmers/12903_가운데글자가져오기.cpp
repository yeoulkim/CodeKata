// programmers 12903 - 가운데 글자 가져오기
// https://school.programmers.co.kr/learn/courses/30/lessons/12903

#include <string>  // 문자열을 사용할 수 있도록 헤더 파일 포함
#include <iostream> // 입력과 출력을 사용하기 위한 헤더 파일
using namespace std;  // std 네임스페이스 사용

string solution(string s) {  // solution 함수 정의, 매개변수는 문자열 s
    int len = s.length();  // s의 길이를 len 변수에 저장

    if (len % 2 == 0) {  // 만약 s의 길이가 짝수라면
        return s.substr(len / 2 - 1, 2);  // 가운데 두 글자를 반환
    } else {  // 만약 s의 길이가 홀수라면
        return s.substr(len / 2, 1);  // 가운데 한 글자를 반환
    }
}

int main() {  // 메인 함수 시작
    string s = "abcd";  // 예시 문자열 "abcd"
    cout << solution(s) << endl;  // "bc" 출력

    s = "abc";  // 예시 문자열 "abc"
    cout << solution(s) << endl;  // "b" 출력

    return 0;  // 프로그램 종료
}
