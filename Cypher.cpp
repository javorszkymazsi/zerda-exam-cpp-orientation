#include "Cypher.h"

Cypher::Cypher() {

}

std::string Cypher::encrypt_text(std::string content, int shift) {
  for (unsigned int i = 0; i < content.size(); ++i) {
    if (is_uppercase(content[i])) {
      if (content[i] + shift > MAX_UPPERCASE_ASCII) {
        content[i] = MIN_UPPERCASE_ASCII - 1 + MAX_UPPERCASE_ASCII - content[i] + shift;
      } else {
        content[i] += shift;
      }
    } else if (is_lowercase(content[i])) {
      if (content[i] + shift > MAX_LOWERCASE_ASCII) {
        content[i] = MIN_LOWERCASE_ASCII - 1 + MAX_LOWERCASE_ASCII - content[i] + shift;
      } else {
        content[i] += shift;
      }
    }
  }
  return content;
}

std::string Cypher::decrypt_text(std::string content, int shift) {
  for (unsigned int i = 0; i < content.size(); ++i) {
    if (is_uppercase(content[i])) {
      if (content[i] - shift < MIN_UPPERCASE_ASCII) {
        content[i] = MAX_UPPERCASE_ASCII + 1 - MIN_UPPERCASE_ASCII + content[i] - shift;
      } else {
        content[i] -= shift;
      }
    } else if (is_lowercase(content[i])) {
      if (content[i] - shift < MIN_LOWERCASE_ASCII) {
        content[i] = MAX_LOWERCASE_ASCII + 1 - MIN_LOWERCASE_ASCII + content[i] - shift;
      } else {
        content[i] -= shift;
      }
    }
  }
  return content;
}

bool Cypher::is_uppercase(char character) {
  return (64 < character && character < 91);
}

bool Cypher::is_lowercase(char character) {
  return (96 < character && character < 123);
}

Cypher::~Cypher() {
  // TODO Auto-generated destructor stub
}

