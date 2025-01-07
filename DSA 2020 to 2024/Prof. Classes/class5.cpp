// using static functions
// static function are only used to access the static data-Members.
#include <iostream>
using namespace std;

class test
{
    static int x;

public:
    static void sample()
    {
        cout << x++ << endl;
    }
};

int test::x = 10;

int main()
{
    test::sample();
    test::sample();
    test::sample();

    cout<<sizeof(test);

    return 0;
}