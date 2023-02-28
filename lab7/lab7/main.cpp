#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    double start = 9.5, end = 12.75, h = 0.25, a = 1.25, z, y, b;
    b = start;
    cout << " Використовуєм while" << endl;
        while (b <= end)
    {
        if (b < 10.6)
            y = sqrt(b + 1);
        else
            y = b + a;
            z = pow(b, y) - pow(a * y, 1 / 3);
            cout << "b = " << b << "       z = " << z << endl;
            b += h;
    }
            b = start;
            cout << " Використовуєм do while" << endl;
        do
        {
            if (b < 10.6)
                y = sqrt(b + 1);
            else
                y = b + a;
                z = pow(b, y) - pow(a * y, 1 / 3);
                cout << "b = " << b << "       z = " << z << endl;
                b += h;
        } while (b <= end);

        return 0;
}
