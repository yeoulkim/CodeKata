// programmers 120830 - 양꼬치
// https://school.programmers.co.kr/learn/courses/30/lessons/120830

#include <iostream>
using namespace std;

int solution(int n, int k)
{
    int lamb_price = n * 12000;
    int free_drinks = n / 10;
    int priced_drinks = (k - free_drinks) * 2000;

    if (priced_drinks < 0) priced_drinks = 0; // 음료수가 무료 서비스보다 적을 때 음료 비용 0 처리

    return lamb_price + priced_drinks;
}

int main()
{
    int n, k;
    cout << "양꼬치 몇 인분? ";
    cin >> n;
    cout << "음료수 몇 개? ";
    cin >> k;

    int total = solution(n, k);

    cout << "양꼬치 " << n << "인분, 음료수 " << k << "개를 먹으면 총 가격은 " << total << "원입니다." << endl;

    return 0;
}
