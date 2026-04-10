#include <iostream>

#include <ServerProvider.h>
#include <Calculator.h>

#include "ExampleClass.h"

int main()
{
    std::cout << "Application version: " << APP_PROJECT_VERSION << std::endl;
    std::cout << "Application build mode: " << APP_BUILD_MOD << std::endl;

    std::cout << "Connecting to " << ServerProvider::getHostName() << std::endl;

    std::cout << "3 + 6 = " << Calculator::sum(3, 6) << std::endl;

    ExampleClass obj;
    obj.foo();

    return 0;
}
