// programmers 12943 - 콜라츠 추측
// https://school.programmers.co.kr/learn/courses/30/lessons/12943

#include <stdio.h>     
#include <stdbool.h>   
#include <stdlib.h>    

// 콜라츠 수열 반복 횟수를 반환하는 함수
int solution(int num) 
{
    // 입력값이 1이면 작업 필요 없이 바로 0 리턴
    if (num == 1)
    {
        return 0;
    }
    
    // 계산 중간 값이 커질 수 있으므로 long long 타입 사용
    long long n = num;

    // 반복 횟수 저장 변수
    int count = 0;

    // n이 1이 될 때까지 반복, 최대 500번까지만 허용
    while (n != 1 && count < 500)
    {
        // 짝수면 2로 나누기
        if (n % 2 == 0)
        {
            n /= 2;
        }
        // 홀수면 3 곱하고 1 더하기
        else
        {
            n = n * 3 + 1;
        }

        // 반복 횟수 1 증가
        count++;
    }

    // 500번 넘어가도 1이 안 됐다면 실패로 간주하고 -1 반환
    if (count >= 500)
    {
        return -1;
    }
    // 그 외에는 반복 횟수 반환
    else
    {
        return count;
    }  
}
