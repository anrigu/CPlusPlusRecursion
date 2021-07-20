#include <iostream>
using namespace std;

// int fun1(int x, int y)
// {
//     if (x == 0)
//         return y;
//     else
//         return fun1(x - 1, x + y);
// }

// int main() {
//     cout<<fun1(2,3);
// }

int fun(int a, int b)
{
    if (b == 0)
        return 0;
    if (b % 2 == 0)
        return fun(a + a, b/2);
     
    return fun(a + a, b/2) + a;
}
 
int main()
{
    cout << fun(4, 3) ;
    return 0;
}