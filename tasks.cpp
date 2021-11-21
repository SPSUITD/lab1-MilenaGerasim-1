#include "tasks.h"
#include <Windows.h>
#include <iostream>


// В данном файле содержатся функции с будущими решениями. Решайте каждую задачу в теле функции и вызывайте её в 
// файле "cpp_lab1.cpp"

// Напишите программу, которая запрашивает у пользователя целочисленное значение n и выводит на экран сумму всех
// чисел от 1 до n
void task1()
{
    int main();
    {
        int i, n, sum = 0;
        std::cout << "n = ";
        std::cin >> n;
        for (i = 0; i <= n; i++)
        {
            sum += i;
        }
        std::cout << "The sum is equal to " << sum << std::endl;
        system("pause");
    }
}

// Напишите программу, которая будет проверять, является ли введеное пользователем слово палиндромом
void task2()
{
#include <cstring>
    int main();
    {
        std::string wrd;
        std::cout << "Enter the word: ";
        std::cin >> wrd;
        int len = wrd.length(), i;
        for (i = 0; i < len / 2; ++i)
        {
            if (wrd[i] != wrd[len - i - 1])
            {
                std::cout << "Word is not palindrome";
                break;
            }
            else
            {
                std::cout << "Word is palindrome";
                break;
            }
        }
   
    }
}

// Напишите программу, которая принимает набор строковых значений у пользователя, а затем выводит их в консоль в
// рамочке из любого символа, например:
// ***********
// * Гаррош  *
// * не      *
// * виноват *
// * !       *
// ***********
void task3()
{
    int main();
    {
        std::string str, zn, wrd;
        int i, k = 1;
        std::cout << "Enter the symbol: ";
        std::cin >> zn;
        for (i = 0; k; i++)
        {
           std::cout << "Enter the word: ";
           std::cin >> wrd;
           k = k + 1;
           str.insert(0, wrd);
           str.insert(i++," ");
           if (wrd == "0")
           {
               break;
           }
        }
        std::cout << str << std::endl;
        
    }
}

// Напишите программу, которая принимает на вход от пользователя количество байт и выводит их в более читаемом виде,
// например, в килобайтах, мегабайтах или гигабайтах
void task4()
{
    int main();
    {
        float b, kb, mb, gb;
        std::cout << "Enter the number of bytes: ";
        std::cin >> b;
        kb = b / 1024;
        mb = b / 2048;
        gb = b / 4096;
        std::cout << "Number of kilobytes: " << kb << std::endl;
        std::cout << "Number of megabytes: " << mb << std::endl;
        std::cout << "Number of gigabytes: " << gb << std::endl;
    }
}

// Напишите программу, которая принимает на вход список номеров автомобилей в формате "А000АА77" (где 77 - регион),
// и выводит на экран все номера из указанного пользователем региона
//я не понимаю, почему после выхода из цикла он выдает мне ошибку((
void task5()
{
    int main();
    {
        int k = 50, i;
        std::string car, avto, ch, n;
        avto = "";
        std::cout << "Enter the region number: ";
        std::cin >> n;
        for (i = 0; k; i++)
        {
            std::cout << "Enter the car number: ";
            std::cin >> car;
            ch = car.substr(6, 2);
            if (car == "0")
            {
                break;
            }
            if (ch == n)
            {
                avto = avto + car + " ";
            }
        }
        std::cout << avto << std::endl;
    }
}

// Программа принимает на вход список цен на товар за 10 дней. Необходимо вывести на экран интервал цен за 3 дня,
// в течение которых произошел наибольший рост цены
void task6()
{
    int main();
    {
        int max = 0, i, maxN;
        int mass[10];
        std::cout << "Enter 10 prices: ";
        for (i = 0; i < 10; i++)
        {
           std::cout << i + 1 << " day";
           std::cin >> mass[i];
           if (max <= mass[i])
           {
               max = mass[i];
               maxN = i;
           }
        }
        for (i = maxN - 2; i <= maxN; i++)
        {
            std::cout << mass[i] << " ";
        }
    }
}

// Напишите программу, которая принимает на вход целочисленное значение, а затем выводит на экран массив из цифр
// 1 и 0, являющийся представлением данного числа в двоичной системе исчисления, например:
// Ввод: 34, Вывод: [1,0,0,0,1,0]
void task7()
{
    int main();
    {
        int mass[8] = { 0 };
        int i, n, ost;
        std::cout << "Enter a number: ";
        std::cin >> n;
        for (i = 0; i < 8; i++)
        {
            ost = n % 2;
            mass[i] = ost;
            n = n / 2;
        }
        std::reverse(std::begin(mass), std::end(mass));
        std::cout << "[";
        for (i = 0; i < 8; i++)
        {
            if (i != 7)
            {
                std::cout << mass[i] << ", ";
            }
            else
            {
                std::cout << mass[7];
            }
        }
        std::cout << "]";
    }
}

// * Напишите программу, которая принимает на вход от пользователя количество секунд, затем отсчитывает заданное
// количество секунд с выводом счета на экран
void task8()
{
    int main();
    {
        int sec = 0;
        int i = 0;
        std::cout << "Enter a number of seconds: ";
        std::cin >> sec;
        while (i != sec)
        {
            ++i;
            Sleep(1000);
            std::cout << i << std::endl;
        }
    }
}
