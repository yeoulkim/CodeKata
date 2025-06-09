// programmers 873809 - 나머지가 1이 되는 수 찾기
// https://school.programmers.co.kr/learn/courses/30/lessons/873809

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    for (int x = 2; x < n; ++x)  // n % 1 == 0 이므로 1은 제외하고 2부터 n-1까지 반복
    {
        if (n % x == 1)
        {
            return x;
        }    
    }
}