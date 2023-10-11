#include <iostream>

int main() {
    int Segundos;
    std::cin >> Segundos;
    int Minutos = Segundos / 60;
    Segundos = Segundos % 60;
    int Horas = Minutos / 60;
    Minutos = Minutos % 60;
    std::cout << Horas << " Horas " << Minutos << " Minutos " << Segundos << " Segundos" << std::endl;
    return 0;
}