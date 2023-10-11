#include <iostream>

int main() {
    double ancho, largo;
    const double tamanobal = 0.60;
    std::cout << "Largo? ";
    std::cin >> largo;
    std::cout << "Ancho? ";
    std::cin >> ancho;
    std::cout << "La habitacion tendrá  " << (ancho * largo) / tamanobal << " baldosas enteras." << std::endl;
    return 0;
}