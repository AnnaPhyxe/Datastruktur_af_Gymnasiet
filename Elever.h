#pragma once

#include "KontaktOplysninger.h"
#include "Stilling.h"
#include "GrundlæggendeOplysninger.h"
#include "Transport.h"
#include "SU.h"
#include "Fritidsaktivitet.h"
#include "Klasse.h"

class Elever : KontaktOplysninger, Stilling, GrundlæggendeOplysninger, Transport, SU, Fritidsaktivitet, Klasse
{
public:
    Elever();
    ~Elever();

    enum GYMNASIE{
        STX, HHX, HTX
    };

    GrundlæggendeOplysninger grundlæggende_oplysninger;
    KontaktOplysninger kontakt_oplysninger;
    Klasse klasse;
    SU su;
    Transport transport;
    Stilling stilling;
    Fritidsaktivitet fritidsaktivitet;
    GYMNASIE gymnasie_type;

    bool betalt_skolearbejde;
    float karaktergennemsnit;

private:

};