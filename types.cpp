#include <iostream>
#include <Windows.h>
#include <chrono>

void clear_console()
{
    try
    {
        system("cls");
    }
    catch (...)
    {
        system("clear");
    }
}

void is_even()
{
    clear_console();

    int minimum_range, maximum_range;

    std::cout << "Enter the minimum range: ";
    std::cin >> minimum_range;

    std::cout << "Enter the maximum range: ";
    std::cin >> maximum_range;

    if (minimum_range >= maximum_range)
    {
        std::cout << "Invalid range";
        return;
    }

    if (minimum_range == 0 || maximum_range == 0)
    {
        std::cout << "Invalid range";
        return;
    }

    for (int i = minimum_range; i <= maximum_range; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << std::endl;
        }
    }
}

void is_odd()
{
    clear_console();

    int minimum_range, maximum_range;

    std::cout << "Enter the minimum range: ";
    std::cin >> minimum_range;

    std::cout << "Enter the maximum range: ";
    std::cin >> maximum_range;

    if (minimum_range >= maximum_range)
    {
        std::cout << "Invalid range";
        return;
    }

    if (minimum_range == 0 || maximum_range == 0)
    {
        std::cout << "Invalid range";
        return;
    }

    for (int i = minimum_range; i <= maximum_range; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << std::endl;
        }
    }
}

void is_prime()
{
    clear_console();

    int minimum_range, maximum_range;

    std::cout << "Enter the minimum range: ";
    std::cin >> minimum_range;

    std::cout << "Enter the maximum range: ";
    std::cin >> maximum_range;

    if (minimum_range >= maximum_range || minimum_range < 2)
    {
        std::cout << "Invalid range" << std::endl;
        return;
    }

    for (int i = minimum_range; i <= maximum_range; i++)
    {
        bool is_prime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            std::cout << i << std::endl;
        }
    }
}

int main()
{
    int choice;

    clear_console();

    std::cout << "1. Even\n2. Odd\n3. Prime\n4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1)
    {
        is_even();

        system("pause");
    }
    else if (choice == 2)
    {
        is_odd();

        system("pause");
    }
    else if (choice == 3)
    {
        is_prime();

        system("pause");
    }
    else if (choice == 4)
    {
        return 0;
    }
    else
    {
        std::cout << "Invalid choice";
        Sleep(2000);
        return 0;
    }
}
