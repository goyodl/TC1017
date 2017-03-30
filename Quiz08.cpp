#include <iostream>
using namespace std;

int main()
{
    int n, n1 = 0, n2 = 1, fb = 0;

    cout << "This program will give you the numbers of the Fibonacci secuence.\n";

    cout << "Enter the number of terms you want: ";
    cin >> n;

    cout << "Fibonacci Series: \n";

    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << n1 << "\n";
            continue;
        }
        if(i == 2)
        {
            cout << n2 << "\n";
            continue;
        }
        fb = n1 + n2;
        n1 = n2;
        n2 = fb;

        cout << fb;

        cout << '\n';
    }
    return 0;
}
