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

   // void setPrenume(const std::string& prenume_p);

    std::string getPrenume ();

   // void setNume(const std:: string& nume_p);

    std::string getNume();

   // const std::string &getNume () const;
};

#endif //OOP_STILIST_H
