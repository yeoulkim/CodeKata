// programmers 12944 - 평균 구하기
// https://school.programmers.co.kr/learn/courses/30/lessons/12944

#include <stdio.h>
#include <stdbool.h>   
#include <stdlib.h>

double solution(int arr[], size_t arr_len)  // size_t = unsigned int : 양의 정수 전용 타입
{
    int sum = 0;   // 합계 저장할 변수 0으로 초기화

    for (size_t i = 0; i < arr_len; i++)  // size_t 타입의 i 사용
    {
        sum += arr[i];  // 배열의 i번째 값을 누적해서 합산
    }

    return (double)sum / arr_len;  // 평균 계산
}
