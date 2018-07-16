/*
 Sum in loop
 input data:
 8
 10 20 30 40 5 6 7 8
 
 answer:
 126
*/

#include <iostream>

int get_user_input()
{
    int a;
    std::cin >> a;
    return a;
}

void loop(int x)
{
    int result = 0;
    for (int i = 0; i < x; i++) {
        int temp = get_user_input();
        result = result + temp;
    }
    std::cout << result << std::endl;
}

int main()
{
    loop(get_user_input());
    return 0;
}
