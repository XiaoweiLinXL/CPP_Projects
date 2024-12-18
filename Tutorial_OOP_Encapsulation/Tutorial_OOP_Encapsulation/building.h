// Building.h
#pragma once

#include <string>
#include "Friend.h"

class Building
{
    // Declare Bro::visit() as a friend
    friend void Friend::visit();

public:
    Building();

    std::string m_Livingroom;

private:
    std::string m_Bedroom;
};