#pragma once

#include <string>

class Transport
{
public:
    Transport();
    ~Transport();

    enum MOTORISERET_KØRETØJ{
        BIL, KNALLERT, MOTORCYKEL, ELLØBEHJUL, ELCYKEL, ELSKATEBOARD
    };

    MOTORISERET_KØRETØJ motoriseret_køretøj;
    std::string offentlig; 
    std::string cykel;
    std::string gå;

private:

};