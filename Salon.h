//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SALON_H
#define OOP_SALON_H

#include <string>
#include <vector>
#include "Stilist.h"


class Salon {
private:
    int id_salon;
    std::string adresa;
    int numar_strada;
    std::vector< Stilist* > stilisti;
public:
    Salon(const int id_salon, const std::string& adresa_, int numar_strada_, std::vector< Stilist *> stilisti_);

    [[nodiscard]] std::string getAdresa() const;

    [[nodiscard]] int getNumar_strada() const;

    //[[nondiscard]] int getId_salon() const;

//    [[nodiscard]] <Stilist> getStilisti();

//    void addStilist(Stilist stilist){
//        this->stilisti.push_back(stilist);
//    };

    //void setNumar_salon(int numar_salon_);
    //int getNumar_salon() const;
    //void setNumar_strada(int numar_strada_);
    // ~Salon();
    //Salon(const Salon& other): adresa{other.adresa}, numar_strada{other.numar_strada}
    //{  std::cout<<"constructor de copiere Salon";
    //}

    //void setAdresa(const std::string& adresa_);



};

#endif //OOP_SALON_H
