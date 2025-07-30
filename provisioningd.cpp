#include <iostream>
#include <unistd.h>

int main()
{
    std::cout << "Provisioningd started..." << std::endl;
    while (true)
    {
        sleep(60);
    }
    return 0;
}

