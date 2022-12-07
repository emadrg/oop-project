//
// Created by drgem on 23/10/2022.
//

#ifndef OOP_STILIST_H
#define OOP_STILIST_H
#include <string>
#include <vector>

class Stilist {
private:
    std::string prenume;
    std::string nume;
    std::vector <int> programari;

public:

    Stilist( const std::string& prenume_, const std::string& nume_, std::vector<int>& programari_) ;

    std::string getPrenume ();

    std::string getNume();

    [[nodiscard]] std::vector<int> &getProgramari() ;

};

#endif //OOP_STILIST_H
