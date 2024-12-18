// Bro.cpp
#include "Friend.h"
#include "Building.h"
#include <iostream>

Friend::Friend(Building& b): building(b)
{

}

// Define the visit function after both classes are fully defined
void Friend::visit()
{
    std::cout << "Accessing: " << building.m_Livingroom << std::endl;
    std::cout << "Accessing: " << building.m_Bedroom << std::endl;  // Access private member
}
