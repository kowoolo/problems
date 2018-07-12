// Sum of A+B 
#include <iostream>

int user_input()
{
    int a;
    std::cin >> a;
    return a;
}

int add_in(int a, int b)
{
    return a+b;
}

int main()
{
    int x = user_input(), y = user_input();
    std::cout << add_in(x,y) << std::endl;
}
