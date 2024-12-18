// Bro.h
#pragma once

class Building;  // Forward declaration

class Friend
{
public:
    Friend(Building& b);

    void visit();  // Declaration of visit()

private:
    Building& building;
};