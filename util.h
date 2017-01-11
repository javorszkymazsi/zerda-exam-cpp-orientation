#ifndef UTIL_H_
#define UTIL_H_
#include <iostream>
#include <fstream>
#include <string>

std::string read_file(std::string);
void write_to_file(std::string, std::string);
void print_to_console(std::string);
int string_to_int(std::string);

#endif
