#include "Salon.h"
#include "Serviciu.h"
#include "Stilist.h"
#include <vector>


int x1, v[7];

int main() {

    Stilist stil1("Ioana", "Popa");
    Stilist stil2("Andreea", "Simion");
    Stilist stil3("Bogdan", "Anton");
    Stilist stil4("Alexandru", "Iordachescu");
    Stilist stil5("Raluca", "Dinu");
    Stilist stil6("Simona", "Pricop");
    Stilist stil7("Alex", "Popescu");
    Stilist stil8("Violeta", "Prisacaru");
    Stilist stil9("Ilinca", "Busuioc");
    Stilist stil10("Adelina", "Coman");
    Stilist stil11("Dani", "Costi");
    Stilist stil12("Sabina", "Luncan");

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


std::cout<<"Selectati salonul la care doriti sa mergeti, introducand numarul corespunzator acestuia:"<<std::endl;
std::cout<<"1. Mihai Bravu 22"<<std::endl<<
"2. Bulevardul Unirii 15"<<std::endl<<
"3. Bulevardul Elisabeta 16"<<std::endl<<
"4. Strada Castanilor 78";

std::cin>>x1;

std::cout<<"Selectati serviciile dorite, introducand pe rand numerele corespunzatoare acestora,"<<std::endl;
std::cout<<"separate printr-un spatiu: "<<std::endl<<
"1. Manichiura"<<std::endl<<
"2. Pedichiura"<<std::endl<<
"3. Tuns femei"<<std::endl<<
"4. Tuns barbati"<<std::endl<<
"5. Vopsit"<<std::endl<<
"6. Machiaj"<<std::endl<<
"Introduceti numarul de servicii dorite: "<<std::endl;


int total_pret=0;
int total_durata=0;
int numar_servicii_dorite = 0;

//std::cin>>numar_servicii_dorite;
//std::cout<<"Introduceti indicii serviciilor dorite: "<<std::endl;
//for(int i=0; i<numar_servicii_dorite;i++) {
//    std::cin>>v[i];
//    if (v[i]==1) {
//        total_pret = total_pret + serv1.getPret();
//        total_durata = total_durata + serv1.getDurata();
//        std::cout<<serv1.getNume()<<" va fi realizata de stilistul "<<stil1.getPrenume()<<" "<<stil1.getNume()<<std::endl;
//
//    }
//    if (v[i]==2) {
//        total_pret = total_pret + serv2.getPret();
//        total_durata = total_durata + serv2.getDurata();
//        std::cout<<serv2.getNume()<<" va fi realizata de stilistul "<<stil2.getPrenume()<<" "<<stil2.getNume()<<std::endl;
//    }
//    if(v[i]==3) {
//        total_pret = total_pret + serv3.getPret();
//        total_durata = total_durata + serv3.getDurata();
//        std::cout<<serv3.getNume()<<" va fi realizata de stilistul "<<stil3.getPrenume()<<" "<<stil3.getNume()<<std::endl;
//    }
//    if(v[i]==4) {
//        total_pret = total_pret + serv4.getPret();
//        total_durata = total_durata + serv4.getDurata();
//        std::cout<<serv4.getNume()<<" va fi realizata de stilistul "<<stil4.getPrenume()<<" "<<stil4.getNume()<<std::endl;
//    }
//    if(v[i]==5) {
//        total_pret = total_pret + serv5.getPret();
//        total_durata = total_durata + serv5.getDurata();
//        std::cout<<serv5.getNume()<<" va fi realizata de stilistul "<<stil5.getPrenume()<<" "<<stil5.getNume()<<std::endl;
//    }
//    if(v[i]==6) {
//        total_pret = total_pret + serv6.getPret();
//        total_durata = total_durata + serv6.getDurata();
//        std::cout<<serv6.getNume()<<" va fi realizata de stilistul "<<stil6.getPrenume()<<" "<<stil6.getNume()<<std::endl;
//    }
//}

std::cout<<"Rezervarea dumneavoastra este la salonul de la adresa ";
if(x1==1)
    std::cout<<s1.getAdresa()<<" "<<s1.getNumar_strada();
if(x1==2)
    std::cout<<s2.getAdresa()<<" "<<s2.getNumar_strada();
if(x1==3)
    std::cout<<s3.getAdresa()<<" "<<s3.getNumar_strada();
if(x1==4)
    std::cout<<s4.getAdresa()<<" "<<s4.getNumar_strada();
std::cout<<std::endl;


std::cout<<"Veti avea de achitat "<<total_pret<<" lei, iar timpul petrecut in salon va fi de "<<total_durata<<" minute";

    return 0;
}
