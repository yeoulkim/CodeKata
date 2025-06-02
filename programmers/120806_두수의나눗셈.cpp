// programmers 120806 - 두 수의 나눗셈
// https://school.programmers.co.kr/learn/courses/30/lessons/120806 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) 
{
    double result = (double)num1 / num2 * 1000;  
    return (int)result;
}

// 정확한 계산 위해 num1 형변환
// 하나만 형변환 -> 나머지는 자동 변환