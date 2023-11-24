#pragma once

#include "Bopæl.h"

#include <string>

class KontaktOplysninger : Bopæl
{
public:
    KontaktOplysninger();
    ~KontaktOplysninger();

    Bopæl bopæl;
    int tlfnr;
    std::string mail;
    int cprnr;

private:

};