#include <iostream>
using namespace std;

int solution(int n, int k)
{
    int lamb_price = n * 12000;
    int free_drinks = n / 10;
    int priced_drinks = (k - free_drinks) * 2000;

    if (priced_drinks < 0) priced_drinks = 0; // ������� ���� ���񽺺��� ���� �� ���� ��� 0 ó��

    return lamb_price + priced_drinks;
}

int main()
{
    int n, k;
    cout << "�粿ġ �� �κ�? ";
    cin >> n;
    cout << "����� �� ��? ";
    cin >> k;

    int total = solution(n, k);

    cout << "�粿ġ " << n << "�κ�, ����� " << k << "���� ������ �� ������ " << total << "���Դϴ�." << endl;

    return 0;
}
