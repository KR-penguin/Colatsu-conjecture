#include <iostream>
#include <Windows.h>

using namespace std;

void Colats(unsigned long a)
{
    while (a != 1)
    {
        if (a % 2 == 0)
        {
            cout << a << endl;
            a /= 2;
        }
        else if (a % 2 == 1)
        {
            cout << a << endl;
            a *= 3;
            a++;
        }
    }
    cout << "\n\n------결과값이 1이 나왔습니다.------\n\n";
}

int main() {

    std::ios_base::sync_with_stdio(false);
    
    unsigned long long num = 1;

    unsigned long long max = 0;

    cout << "몇 수까지 콜라스 추측을 해보시겠습니까? (0 ~ 18,446,744,073,709,551,615):";
    cin >> max;

    while (1)
    {
        if (num >= max + 1)
        {
            system("pause");
            return 0;
        }

        cout << "대입할 수 : " << num << "\n\n";

        Colats(num);

        num++;
    }
    system("pause");
    return 0;
}