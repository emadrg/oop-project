//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_SALON_H
#define OOP_SALON_H

#include <string>


class Salon {
private:
    std::string adresa;
    int numar;
    int numar2;

public:
    Salon(const std::string& adresa_, int numar_, int numar2_);
    ~Salon();

    void setAdresa(const std::string& adresa_);
    std::string getAdresa() const;


     Salon& operator=(const Salon& other);
};


#endif //OOP_SALON_H
