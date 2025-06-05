// programers 12928 - 약수의 합
// https://school.programmers.co.kr/learn/courses/30/lessons/12928

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int sum = 0;    // 약수의 합을 저장할 변수 초기화

    for (int i = 1; i <= n; i++)    // 1부터 n까지 숫자를 하나씩 i로 반복
    {
        if (n % i == 0)    // n을 i로 나누었을 때 나머지가 0이면 i는 n의 약수
        {
            sum += i;    // 약수 i를 sum에 더함
        }
    }
    
    return sum;
}