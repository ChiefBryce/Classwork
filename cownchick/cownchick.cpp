// cownchick.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Write the number of leg pairs" << std::endl;
    int legpairs;
    std::cin >> legpairs;
    int cows = (legpairs - 1)/2;
    int chicks = 1;
    std::cout << "~~Farm~~" << std::endl;
    for (chicks; chicks < legpairs-2; ++chicks) {
        
        for (cows; cows*2 > (legpairs-chicks); --cows);{
            if (cows * 2 + chicks <= legpairs) {
                std::cout << "There may be: ";
                std::cout << chicks << " chicks and ";
                std::cout << cows << " cows." << std::endl;
            }
            
            

        }

    }

}

