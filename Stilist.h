//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_STILIST_H
#define OOP_STILIST_H
#include <string>

class Stilist {
private:
    std::string prenume;
    std::string nume;

public:

    Stilist(const std::string& prenume_, const std::string& nume_);
    Stilist(const std::string& nume_): nume(nume_) {};
//  Stilist(const std::string& prenume_, const std::string& nume_):
//     prenume(const std::string& prenume), nume(const::std string& nume);

    std::string getPrenume ();

    std::string getNume();

    // void setPrenume(const std::string& prenume_p);

    // void setNume(const std:: string& nume_p);

   // const std::string &getNume () const;
};

#endif //OOP_STILIST_H
