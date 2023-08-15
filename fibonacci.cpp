#include <iostream>

using namespace std;


void fibonacci()
{
   int before_num = 0, after_num = 1, fib;

   while (true) {
        fib = before_num + after_num;
        after_num = before_num;
        before_num = fib;


        if (fib > 100000){
            break;

        } else {
            cout << "Fibonacci: " << fib << endl;
        }
   }
}


int main()
{
    fibonacci();
    return 0;
}
