#include <iostream>

using namespace std;

int main()
{
    long long num = 1;


    for (int i = 2; i <= 20; i++) {
        int factor = i;


        for (int j = 2; j < i; j++) {
            if (factor % j == 0) {

                factor /= j;
            }
        }

        num *= factor;
    }

    cout << "The smallest number divisible by the first 20 positive integers is: " << num << endl;

    return 0;
}
