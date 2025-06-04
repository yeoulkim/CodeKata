//programmers 12937 - 짝수와 홀수
// https://school.programmers.co.kr/learn/courses/30/lessons/12937  

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) 
{
    if (num % 2 == 0)
    {
        return (char*)"Even";
    }
    else 
    {
        return (char*)"Odd";
    }    
}

// 삼항 연산자 사용
/*
char* solution(int num) 
{
    return (char*)(num % 2 == 0 ? "Even" : "Odd");
}
*/