#include <iostream>

namespace tagli
{
    
    //costanti dei tagli delle banconote in gioco
    const int B_1=5;
    const int B_2=10;
    const int B_3=20;
    const int B_4=50;
}
namespace complessivi_singoli
{

    /*variabili relative ai soldi complessivi dei singoli tagli*/
    int soldi1 = 0;
    int soldi2 = 0;
    int soldi3 = 0;
    int soldi4 = 0;
}
namespace numero_banconote
{
    //il numero delle banconote per singolo taglio
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

}
int main()
{
    //dichiarazione ed azzeramento variabili complessivo 
    int conten = 0;
    int avanzo = 0;
    int contab = 0;
    
    //dichiarazione namespace
    using namespace tagli;
    using namespace complessivi_singoli;
    using namespace numero_banconote;
    using std::endl;

    //dichiarazione numero banconote per singolo taglio
    std::cout<<"ciao, questo e' un programma che calcola quanti soldi ci sono all'interno del tuo salvadanaio "<<endl;
    std::cout<<"prego inserire il numero di banconote del taglio da "<<B_1<<"€"<<endl;
    std::cin>>n1;
    std::cout<<"prego inserire il numero di banconote del taglio da "<<B_2<<"€"<<endl;
    std::cin>>n2;
    std::cout<<"prego inserire il numero di banconote del taglio da "<<B_3<<"€"<<endl;
    std::cin>>n3;
    std::cout<<"prego inserire il numero di banconote del taglio da "<<B_4<<"€"<<endl;
    std::cin>>n4;

    //calcolo del quantitativo di soldi per singolo taglio
    soldi1 = n1 * B_1;
    soldi2 = n2 * B_2;
    soldi3 = n3 * B_3;
    soldi4 = n4 * B_4;

    //calcolo del contenuto dell'avanzo e del contabile sommando l'avanzo con il contenuto
    conten = soldi1 + soldi2 + soldi3 + soldi4;

    //richiesta dei soldi avanzanti
    std::cout<<"ora inserire quanti soldi devono essere ancora rimessi all'interno"<<endl;
    std::cin>>avanzo;
    std::cout<<endl<<endl<<endl;
    //calcolo contabile
    contab = conten + avanzo;

    //resoconto dei calcoli
    std::cout<<"alla fine di tutti i miei calcoli sono riuscito ad ottenere i seguenti risultati"<<endl;
    std::cout<<"nel tuo salvadanaio ci sono: "<<endl<< soldi1 <<"€ in banconote da 5€"<<endl;
    std::cout<< soldi2 <<"€ in banconote da 10€"<<endl;
    std::cout<< soldi3 <<"€ in banconote da 20€"<<endl;
    std::cout<< soldi4 <<"€ in banconote da 50€"<<endl;
    std::cout<<"inoltre complessivamente ci sono "<< conten <<"€ liquidi usufruibili, "<<endl<<" e poi ci sono "<< contab <<"€ di soldi contabili ottenuti sommando i "<< avanzo <<"€ di avanzo"<<endl;
    
  
    system("PAUSE");
    return EXIT_SUCCESS;

}