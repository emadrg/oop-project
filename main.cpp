#include "Salon.h"
#include "Serviciu.h"
#include "Stilist.h"
#include <iostream>
#include <vector>


void add_programare ( std::vector<int>&  programari, int ora) {
    if (ora<0||ora>8)
        std::cout<<"introduceti o ora valida"<<std::endl;
    else if (programari[ora]==0) {
        programari[ora]=1;
        std::cout<<"programare efectuata"<<std::endl;
    }

    else std::cout<<"nu se poate efectua programare; locul este deja ocupat. va rugam sa selectati alta ora"<<std::endl;

}

void afis (const std::vector<Stilist *>& vect) {
    for (int i = 0; i < 3; ++i)
        std::cout << i + 1 << ". " << vect[i]->getNume() << " " << vect[i]->getPrenume() << std::endl;
}

int main() {
    std::vector <int> pgr1(8, 0);
    std::vector <int> pgr2(8, 0);
    std::vector <int> pgr3(8, 0);
    std::vector <int> pgr4(8, 0);
    std::vector <int> pgr5(8, 0);
    std::vector <int> pgr6(8, 0);
    std::vector <int> pgr7(8, 0);
    std::vector <int> pgr8(8, 0);
    std::vector <int> pgr9(8, 0);
    std::vector <int> pgr10(8, 0);
    std::vector <int> pgr11(8, 0);
    std::vector <int> pgr12(8, 0);

    Stilist stil1(1, "Ioana", "Popa", pgr1);
    Stilist stil2(2,"Andreea", "Simion", pgr2);
    Stilist stil3(3,"Bogdan", "Anton", pgr3);
    Stilist stil4(4,"Alexandru", "Iordachescu", pgr4);
    Stilist stil5(5,"Raluca", "Dinu", pgr5);
    Stilist stil6(6,"Simona", "Pricop", pgr6);
    Stilist stil7(7,"Alex", "Popescu", pgr7);
    Stilist stil8(8,"Violeta", "Prisacaru", pgr8);
    Stilist stil9(9,"Ilinca", "Busuioc", pgr9);
    Stilist stil10(10,"Adelina", "Coman", pgr10);
    Stilist stil11(11,"Dani", "Costi", pgr11);
    Stilist stil12(12,"Sabina", "Luncan", pgr12);

    std::vector <Stilist*> stilisti1;
    std::vector <Stilist*> stilisti2;
    std::vector <Stilist*> stilisti3;
    std::vector <Stilist*> stilisti4;


    stilisti1.push_back(&stil1);
    stilisti1.push_back(&stil2);
    stilisti1.push_back(&stil3);
    stilisti2.push_back(&stil4);
    stilisti2.push_back(&stil5);
    stilisti2.push_back(&stil6);
    stilisti3.push_back(&stil7);
    stilisti3.push_back(&stil8);
    stilisti3.push_back(&stil9);
    stilisti4.push_back(&stil10);
    stilisti4.push_back(&stil11);
    stilisti4.push_back(&stil12);

    Salon s1(1, "Mihai Bravu", 12, stilisti1);
    Salon s2(2, "Bulevardul Unirii" , 15, stilisti2);
    Salon s3(3, "Bulevardul Elisabeta", 16, stilisti3);
    Salon s4(4, "Strada Castanilor", 78, stilisti4);


    Serviciu serv1( "Manichiura", 120, 120);
    Serviciu serv2( "Pedichiura", 100, 150);
    Serviciu serv3( "Tuns femei", 60, 70);
    Serviciu serv4( "Tuns barbati", 40, 50);
    Serviciu serv5( "Vopsit", 200, 500);
    Serviciu serv6( "Machiaj", 100, 200);

    int x1, x2, x3, ora, x_serviciu;

    std::cout<<"Selectati serviciul dorit: "<<std::endl<<
             "1. Manichiura"<<std::endl<<
             "2. Pedichiura"<<std::endl<<
             "3. Tuns femei"<<std::endl<<
             "4. Tuns barbati"<<std::endl<<
             "5. Vopsit"<<std::endl<<
             "6. Machiaj";

    std::cin>>x_serviciu;

std::cout<<"Selectati salonul la care doriti sa mergeti:"<<std::endl;
std::cout<<"1. Mihai Bravu 22"<<std::endl<<
"2. Bulevardul Unirii 15"<<std::endl<<
"3. Bulevardul Elisabeta 16"<<std::endl<<
"4. Strada Castanilor 78"<<std::endl;

//x1- selectam salon
//x2- selectam stilist
//x3- selectam ora

std::cin>>x1;

std::cout<<"Alegeti stilistul la care doriti sa faceti programarea: "<<std::endl;
if (x1==1) {
        afis(s1.getStilisti());
    std::cin >> x2;//aici putem avea vectorii pgr1-pgr3

    std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
        if(x2==1)
            for(int i = 0; i < 8; i++)
                if(stil1.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
        std::cin>>x3;
        ora=x3-8;
        add_programare(stil1.getProgramari(), ora);

    if(x2==2)
        for(int i = 0; i < 8; i++)
            if(stil2.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil2.getProgramari(), ora);

    if(x2==3)
        for(int i = 0; i < 8; i++)
            if(stil3.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil3.getProgramari(), ora);


}
else if (x1==2) {
afis( s2.getStilisti());
    std::cin >> x2;//aici putem avea vectorii pgr4-pgr6

    std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
    if(x2==1)
        for(int i = 0; i < 8; i++)
            if(stil4.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil4.getProgramari(), ora);

    if(x2==2)
        for(int i = 0; i < 8; i++)
            if(stil5.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil5.getProgramari(), ora);


    if(x2==3)
        for(int i = 0; i < 8; i++)
            if(stil6.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil6.getProgramari(), ora);

}

else if (x1==3) {
afis(s3.getStilisti());
    std::cin >> x2;//aici putem avea vectorii pgr7-pgr9

    std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
    if(x2==1)
        for(int i = 0; i < 8; i++)
            if(stil7.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil7.getProgramari(), ora);

    if(x2==2)
        for(int i = 0; i < 8; i++)
            if(stil8.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil8.getProgramari(), ora);

    if(x2==3)
        for(int i = 0; i < 8; i++)
            if(stil9.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil9.getProgramari(), ora);

}
else {
afis(s3.getStilisti());
    std::cin >> x2;//aici putem avea vectorii pgr10-pgr12

    std::cout << "Selectati o ora din cele disponibile (scrieti ora): " << std::endl;
    if(x2==1)
        for(int i = 0; i < 8; i++)
            if(stil10.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil10.getProgramari(), ora);

    if(x2==2)
        for(int i = 0; i < 8; i++)
            if(stil11.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil11.getProgramari(), ora);

    if(x2==3)
        for(int i = 0; i < 8; i++)
            if(stil12.getProgramari()[i]==0)
                std::cout<<i+8<<" ";
    std::cin>>x3;
    ora=x3-8;
    add_programare(stil12.getProgramari(), ora);

}
    return 0;
}
