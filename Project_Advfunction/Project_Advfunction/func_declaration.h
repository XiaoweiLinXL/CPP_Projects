#pragma once
#include <iostream>
using namespace std;

void func();

// if you call "func(10)", it will call "func(int a)" because "int& a = 10" is illegal
void func(int a);

void func(int& a);

// if you call "func(10)" when the func below is defined together with "void func(int a)", there will be ambiguity
// because either "int a = 10" or "const int& a = 10" are legal
// for "const int& a = 10", the compiler automatically run "int temp = 10; const int& a = temp;"
// 
// if you define func(const int& a) and func(int& a) and call func(10), it will call func(const int& a)
// because it's not editable. but if you call "int c = 10; func(c)", it will call func(int& a) because
//  int& a = c and c needs to be editable
//void func(const int& a);