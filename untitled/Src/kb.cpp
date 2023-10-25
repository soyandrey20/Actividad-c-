#include <iostream>
#include <string>

class kb {
public:
    static int leerEntero(std::string mensaje) {

        int valor;
        std::cout << mensaje << std::endl;
        std::cin >> valor;
        return valor;
    }


    static double leerReal(std::string mensaje) {
        double valor;
        std::cout << mensaje << std::endl;
        std::cin >> valor;
        return valor;
    }

    static std::string leerTexto(std::string mensaje) {
        std::string valor;
        std::cout << mensaje << std::endl;
        std::cin.ignore();
        std::getline(std::cin, valor);
          return valor;
    }
};
