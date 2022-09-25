<<<<<<< HEAD
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout <<"1-100 ertekek duplazasa"<<std::endl;
    for(int i = 0; i<=N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<=N_ELEMENTS; i++)
    {
        std::cout << "Ertek:"<<b[i]<<std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "valami";
    return 0;
=======
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout <<"1-100 ertekek duplazasa"<<std::endl;
    for(int i = 0; i<=N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<=N_ELEMENTS; i++)
    {
        std::cout << "Ertek:"<<b[i]<<std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Irok valamit." << std::endl;
    return 0;
>>>>>>> 7418164ec0138f0e5d2c0f657b46a83953c3ef3b
}