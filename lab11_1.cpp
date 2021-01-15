#include<iostream>
using namespace std;

long long int fibonacci(long long int);

int main(){

    cout << fibonacci(50);

    return 0; 

}

long long int fibonacci(long long int x)
{
    switch (x)
    {
        case 0: return 0;
        case 1: return 1;
        default: return fibonacci(x-1) + fibonacci(x-2);
    }
}
