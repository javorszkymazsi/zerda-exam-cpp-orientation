#ifndef CAESARCYPHER_H_
#define CAESARCYPHER_H_
#include "Cypher.h"
#include "util.h"

class CaesarCypher {
public:
  CaesarCypher(std::string, int);
  CaesarCypher(std::string, std::string, int);
  virtual ~CaesarCypher();
private:
  std::string content;
  std::string decrypted_content;
  Cypher cypher;
};

#endif
