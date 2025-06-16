// programmers 12948 - 핸드폰번호가리기
// https://school.programmers.co.kr/learn/courses/30/lessons/12948

#include <string>
#include <vector>   

using namespace std;

string solution(string phone_number) 
{
    int len = phone_number.length();    // 전화번호 길이를 변수 len
    vector<char> result(len);   // 길이만큼의 문자 vector 생성 resul[0] ~ result[len-1]
    
    // 크기만 정해진 빈 배열에 문자열을 채움
    for (int i = 0; i < len - 4; ++i)
    {
        result[i] = '*';    // 전화번호의 앞부분은 '*'로 채움 0 ~ len-5
    }
    
    for (int i = len - 4; i < len; ++i)
    {
        result[i] = phone_number[i];  // 전화번호의 뒷부분은 그대로 복사
    } 
    
    // vector<char>를 string으로 변환하여 반환 - string(시작, 끝)
    // string 생성자에 begin()과 end()를 전달하여 vector의 내용을 문자열로 변환
    // result.begin()은 vector의 시작 위치, result.end()는 vector의 끝 위치를 나타냄
    return string(result.begin(), result.end());
}