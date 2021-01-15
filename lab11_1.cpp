#include<iostream>
using namespace std;

long int fibonacci(long int);

int main(){
    long int x;
    cin >> x;
    cout << fibonacci(3);
    return 0; 
}

long int fibonacci(long int x)
{
    switch (x)
    {
    case 0: return 0;
    case 1: return 1;
    default: return fibonacci(x-1) + fibonacci(x-2);
    }
}
