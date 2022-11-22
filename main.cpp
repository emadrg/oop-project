#include "Salon.h"
#include "Serviciu.h"
#include "Stilist.h"

int x1, v[7];

int main() {

    Salon s1("Mihai Bravu", 12);
    Salon s2("Bulevardul Unirii" , 15);
    Salon s3("Bulevardul Elisabeta", 16);
    Salon s4("Strada Castanilor", 78);

    Serviciu serv1( "Manichiura", 120, 120);
    Serviciu serv2( "Pedichiura", 100, 150);
    Serviciu serv3( "Tuns femei", 60, 70);
    Serviciu serv4( "Tuns barbati", 40, 50);
    Serviciu serv5( "Vopsit", 200, 500);
    Serviciu serv6( "Machiaj", 100, 200);

    Stilist stil1("Ioana", "Popa");
    Stilist stil2("Andreea", "Simion");
    Stilist stil3("Bogdan", "Anton");
    Stilist stil4("Alexandru", "Iordachescu");
    Stilist stil5("Raluca", "Dinu");
    Stilist stil6("Simona", "Pricop");


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
int x;
int numar_servicii_dorite = 0;

std::cin>>numar_servicii_dorite;
std::cout<<"Introduceti indicii serviciilor dorite: "<<std::endl;
for(int i=0; i<numar_servicii_dorite;i++) {
    std::cin>>v[i];
    x=v[i];
    if (x==1) {
        total_pret = total_pret + serv1.getPret();
        total_durata = total_durata + serv1.getDurata();
        std::cout<<serv1.getNume()<<" va fi realizata de stilistul "<<stil1.getPrenume()<<" "<<stil1.getNume()<<std::endl;

    }
    if (x==2) {
        total_pret = total_pret + serv2.getPret();
        total_durata = total_durata + serv2.getDurata();
        std::cout<<serv2.getNume()<<" va fi realizata de stilistul "<<stil2.getPrenume()<<" "<<stil2.getNume()<<std::endl;
    }
    if(x==3) {
        total_pret = total_pret + serv3.getPret();
        total_durata = total_durata + serv3.getDurata();
        std::cout<<serv3.getNume()<<" va fi realizata de stilistul "<<stil3.getPrenume()<<" "<<stil3.getNume()<<std::endl;
    }
    if(x==4) {
        total_pret = total_pret + serv4.getPret();
        total_durata = total_durata + serv4.getDurata();
        std::cout<<serv4.getNume()<<" va fi realizata de stilistul "<<stil4.getPrenume()<<" "<<stil4.getNume()<<std::endl;
    }
    if(x==5) {
        total_pret = total_pret + serv5.getPret();
        total_durata = total_durata + serv5.getDurata();
        std::cout<<serv5.getNume()<<" va fi realizata de stilistul "<<stil5.getPrenume()<<" "<<stil5.getNume()<<std::endl;
    }
    if(x==6) {
        total_pret = total_pret + serv6.getPret();
        total_durata = total_durata + serv6.getDurata();
        std::cout<<serv6.getNume()<<" va fi realizata de stilistul "<<stil6.getPrenume()<<" "<<stil6.getNume()<<std::endl;
    }
}

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
