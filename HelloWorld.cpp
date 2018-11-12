#include <iostream>

int main()
{
    char greeting;

    std::cout << "Hello! How are you? (g/b): ";
    std::cin >> greeting;

    if (greeting == 'g')
        std::cout << "(good): 'Ah, I see you've had a good day!" << std::endl;
    else
        std::cout << "(bad): 'Well, someone needs his coffee...'" << std::endl;

    return 0;
}