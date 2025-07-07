// Programmers 82612 - 부족한 금액 계산하기
// https://school.programmers.co.kr/learn/courses/30/lessons/82612

#inclue <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long total = 0;

    for (int i = 1; i <= count; ++i)
    {
        total += price * i; // 각 회차마다 가격을 누적
    }

    if (total > money)
    { 
        return total = money; // 부족한 금액 계산
    }

    return 0; // 부족하지 않으면 0 반환
}