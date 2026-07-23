#include <iostream>

int main(){
    std::cout << "Important: Obligatoriu trebuie scris cu majuscula!\n\n"
    std::cout << "Ce tip de grade ai acuma(C = celsius, F = Fahrenheit, K = Kelvin): ";
    char tip;
    std::cin >> tip;
    std::cout << "Spune numarul de grade: ";
    float gradei;
    std::cin >> gradei;
    std::cout << "In ce doresti sa transformi(C = celsius, F = Fahrenheit, K = Kelvin): ";
    char transformare;
    std::cin >> transformare;

    switch(tip){
        case 'C':
            switch(transformare){
                case 'C':
                    std::cout << gradei;
                    break;
                case 'F':
                    std::cout << gradei * 1.8 + 32;
                    break;
                case 'K':
                    std::cout << gradei + 273.15;
                    break;
                default:
                    std::cout << "Invalid";
                    break;}
            break;
        case 'F':
            switch(transformare){
                case 'C':
                    std::cout << (gradei - 32) / 1.8;
                    break;
                case 'F':
                    std::cout << gradei;
                    break;
                case 'K':
                    std::cout << (gradei - 32) / 1.8 + 273.15;
                    break;
                default:
                    std::cout << "Invalid";
                    break;}
            break;
        case 'K':
            switch(transformare){
                case 'C':
                    std::cout << gradei - 273.15;
                    break;
                case 'F':
                    std::cout << (gradei - 273.15) * 1.8 + 32;
                    break;
                case 'K':
                    std::cout << gradei;
                    break;
                default:
                    std::cout << "Invalid";
                    break;}
            break;
        default:
            std::cout << "Invalid";
            break;}
    return 0;
}
