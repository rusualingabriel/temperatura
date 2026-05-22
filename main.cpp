#include <iostream>

using namespace std;

int main(){
    cout << "Ce tip de grade ai acuma(C = celsius, F = Fahrneneit, K = Kelvin): ";
    char tip;
    cin >> tip;
    cout << "Spune numarul de grade: ";
    float gradei;
    cin >> gradei;
    cout << "In ce doresti sa transformi(C = celsius, F = Fahrneneit, K = Kelvin): ";
    char transformare;
    cin >> transformare;

    switch(tip){
        case 'C':
            switch(transformare){
                case 'C':
                    cout << gradei;
                    break;
                case 'F':
                    cout << gradei * 1.8 + 32;
                    break;
                case 'K':
                    cout << gradei + 273.15;
                    break;
                default:
                    cout << "Invalid";
                    break;}
            break;
        case 'F':
            switch(transformare){
                case 'C':
                    cout << gradei;
                    break;
                case 'F':
                    cout << (gradei - 32) * 1.8;
                    break;
                case 'K':
                    cout << (gradei - 32) * 1.8 + 273.15;
                    break;
                default:
                    cout << "Invalid";
                    break;}
            break;
        case 'K':
            switch(transformare){
                case 'C':
                    cout << gradei - 273.15;
                    break;
                case 'F':
                    cout << (gradei - 273.15) * 1.8 + 32;
                    break;
                case 'K':
                    cout << gradei;
                    break;
                default:
                    cout << "Invalid";
                    break;}
            break;
        default:
            cout << "Invalid";
            break;}
    return 0;
}
