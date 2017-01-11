#ifndef ARGUMENTHANDLER_H_
#define ARGUMENTHANDLER_H_
#include "CaesarCypher.h"

class ArgumentHandler {
public:
  ArgumentHandler(int, char**);
  bool is_a_filename(std::string) throw (const char*);
  bool is_shift_provided(int, char**) throw (int);
  std::string find_shift_value(int, char**);
  std::string find_output_filename(int, char**);
  bool is_there_output_filename(int, char**);
  bool is_value_provided(int, char**) throw (int);
};

#endif
