// programmers 120829 - 각도기
// https://school.programmers.co.kr/learn/courses/30/lessons/120829 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>

int solution(int angle) 
{
    if (angle < 90) 
    {
        return 1; 
    } 
    else if (angle == 90) 
    {
        return 2; 
    } 
    else if (angle < 180) 
    {
        return 3; 
    } 
    else if (angle == 180)
    {
        return 4; 
    }
}

// if(0 < angle < 90) <- 두 개 이상의 비교를 한 줄에 쓸 수 없음
// if(0 < angle && angle < 90) <- 연산자를 이용해해 한 줄에 쓸 수 있음
// else 없이 else if 여러 개 사용 가능