//
//  main.cpp
//  Ejercicio_2
//
//  Created by macintosh on 15/08/15.
//  Copyright (c) 2015 Daniel Andres Peña Cortes. All rights reserved.
//

#include <iostream>

int main() {
    int valmax,contador ;
    std::cout << "programa para determinar numeros primos\n"<<std::endl;
    std::cout<< "hasta que numero primo desea buscar numeros primos"<<std::endl;
    std::cout <<" Digite el numero"<<std::endl;
    std::cin>> valmax;
     for (contador=1; contador <= valmax; contador ++)
     {
        if (contador%2 !=0 ||contador==2) {
            
            std::cout<<contador<<" ";
        }
    }
    
    system("PAUSE");
    return 0;
}
