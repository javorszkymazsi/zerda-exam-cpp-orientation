#ifndef CYPHER_H_
#define CYPHER_H_
#include <iostream>

const int MIN_UPPERCASE_ASCII = 65;
const int MAX_UPPERCASE_ASCII = 90;
const int MIN_LOWERCASE_ASCII = 97;
const int MAX_LOWERCASE_ASCII = 122;

class Cypher {
public:
  Cypher();
  std::string encrypt_text(std::string, int);     //extra feature, should've read task description more thoroughly
  std::string decrypt_text(std::string, int);
  bool is_uppercase(char);
  bool is_lowercase(char);
  virtual ~Cypher();
};

#endif
