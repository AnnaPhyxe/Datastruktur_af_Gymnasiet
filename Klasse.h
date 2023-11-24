#pragma once

#include "Lokale.h"

class Klasse : Lokale
{
public:
    Klasse();
    ~Klasse();

    enum FUNKTION{
        UNDERVISNINGSLOKALE, KONTOR, MØDELOKALE, VÆRKSTED,
        LABORATORIE, KØKKEN, TOILET, OPBEVARING, FITNESS,
        FÆLLESRUM, KÆLDER, BOLDRUM, BADERUM, IDRÆTSHAL, SVØMMEHAL
    };


private:

};
