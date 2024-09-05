#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  //NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // '' helyett "", ; hiánya
    for (int i = 0;)  // Hibás for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // Rossz ciklus
    {
        std::cout << "Ertek:";  // Nincs kiírva a tényleges érték
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // a változónak értéket adni
    for (int i = 0; i < N_ELEMENTS, i++)  // , helyett ;
    {
        atlag += b[i] // ; hiánya a sor végén
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
