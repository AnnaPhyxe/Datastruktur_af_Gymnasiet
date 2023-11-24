#include "Ansatte.h"

Ansatte::Ansatte()
{
    
}

Ansatte::~Ansatte()
{

}

nlohmann::json Ansatte::toJSON(){
    nlohmann::json outJSON;
    gr = this->grundlæggende_oplysninger;
    outJSON = {{"Navn", gr.navn}, {"Alder", gr.alder}, {"Vægt", gr.vægt}, {"Højde", gr.højde}, {"Køn", gr.køn}, 
        {"Uddannelse", this->uddannelse}, {"Antal_år_arbejdet", this->antal_år_arbejdet}, {"Kurser", this->kurser}, 
        {"Stilling_Navn", this->stilling.navn}, {"Løn", this->stilling.løn}, {"Antal_arbejdstimer", this->stilling.antal_arbejdstimer}, 
        {"Tlfnr", this->kontakt_oplysninger.tlfnr}, {"Mail", this->kontakt_oplysninger.mail}, {"Cprnr", this->kontakt_oplysninger.cprnr},
        {"Bopæl", this->kontakt_oplysninger.bopæl}, {"Transport" this->transport}, {"Gymnasie", this->gymnasie_type}
    };

    return outJSON;
}