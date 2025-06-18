// programmers 12922 - 수박수박수박수박수박수박수
// https://school.programmers.co.kr/learn/courses/30/lessons/12922

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    vector<string> letters; // 한글은 2바이트 문자여서 char 불가능, string을 사용하여 "수"와 "박"을 저장
    // string 벡터 이름이 letters
    letters.reserve(n);  // 벡터의 크기를 미리 예약하여 성능 최적화, 벡터는 크기를 자동으로 늘리지만, 한 글자씩 늘릴 때마다 속도가 느려짐
    
    for (int i = 0; i < n; ++i)
    {
        letters.push_back((i % 2 == 0) ? "수" : "박");  // i가 짝수면 "수" 추가, 홀수면 "박" 추가.
    }
    
    string result;  // 결과를 담을 빈 문자열 생성
    // 범위 기반 for문을 사용하여 letters 벡터의 모든 문자열을 s에 추가
    for (const string& s : letters) // const: 읽기 전용, &s: 참조로 받아서 복사 비용 절약
    {
        result += s;    // result에 문자열을 이어 붙임
    }
    
    return result;
}

int main() {
    cout << solution(4) << endl; // 출력: 수박수박
    cout << solution(3) << endl; // 출력: 수박수
    return 0;
}