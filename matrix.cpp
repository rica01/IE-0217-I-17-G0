#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
    char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890|°¬!'?¿¡+*{[]}^`-.,;:_";

    cout << x[rand()] << endl;

    return 0;
}

void name(/* arguments */) {
    /* code */
}