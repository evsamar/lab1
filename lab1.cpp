#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    cout << "Выполнила Самаркина Евгения Андреевна - ФИТУ 09.03.01 ПОВа-з22" << endl;
    
    int N;
    cout << "Введите N: ";
    cin >> N;
    for(int r = 0, n = 0; n <= N; ++n)
    {
        r = (r * 10 + 1) % N;
        if (r == 0)
        {
            for(int i = 0; i <= n; ++i) {
                cout << 1;
            }
            cout << endl;
            return 0;
        }
    }
    cout << "NO\n";
}