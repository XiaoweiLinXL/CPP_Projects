#pragma once
#include <iostream>
#include <string>
#include "struct_declaration.h"
using namespace std;

void showMenu();

void addContact(struct Book* book);

void viewContact(const struct Book* book);

int checkExistance(const struct Book* book, const string* pname);

void deleteContact(struct Book* book);

void checkContact(struct Book* book);

void editContact(struct Book* book);

void emptyBook(struct Book* book);