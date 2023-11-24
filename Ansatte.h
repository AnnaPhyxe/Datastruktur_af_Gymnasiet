#pragma once

#include "KontaktOplysninger.h"
#include "GrundlæggendeOplysninger.h"
#include "Stilling.h"
#include "Transport.h"
#include "Elever.h"

#include <string>
#include <nlohmann/json.hpp>

class Ansatte : public KontaktOplysninger, Stilling, GrundlæggendeOplysninger, Transport, Elever
{
public:
    Ansatte();
    ~Ansatte();

    std::string uddannelse;
    int antal_år_arbejdet;
    GrundlæggendeOplysninger grundlæggende_oplysninger;
    Stilling stilling;
    KontaktOplysninger kontakt_oplysninger;
    std::string kurser;
    Transport transport;
    Elever::GYMNASIE gymnasie_type;

    nlohmann::json toJSON();

private:

};