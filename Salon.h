//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SALON_H
#define OOP_SALON_H

#include <iostream>
#include <string>
#include <vector>
#include "Stilist.h"


class Salon {
private:
    std::string adresa;
    int numar_strada;
    //std::vector<Stilist> stilisti;
public:
    Salon(const std::string& adresa_, int numar_strada_);
   // ~Salon();
    //Salon(const Salon& other): adresa{other.adresa}, numar_strada{other.numar_strada}
      //{  std::cout<<"constructor de copiere Salon";
      //}

    //void setAdresa(const std::string& adresa_);
    [[nodiscard]] std::string getAdresa() const;

    //void setNumar_salon(int numar_salon_);
    //int getNumar_salon() const;

    //void setNumar_strada(int numar_strada_);
    [[nodiscard]] int getNumar_strada() const;



   // Salon& operator=(const Salon &other);

};

#endif //OOP_SALON_H
