// programmers 12931 - 자릿수 더하기
// https://school.programmers.co.kr/learn/courses/30/lessons/12931

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int sum = 0;
    
    while (n > 0)
    {
        sum += n % 10;  // 나머지 구하기 -> 끝자리 숫자 얻음
        n /= 10;    // 몫 구하기 -> 끝자리 숫자 제거
    }
    
    return sum;
}