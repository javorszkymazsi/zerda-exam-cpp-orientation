#include "CaesarCypher.h"

CaesarCypher::CaesarCypher(std::string input_file, int shift) {
  content = read_file(input_file);
  decrypted_content = cypher.decrypt_text(content, shift);
  print_to_console(decrypted_content);
}

CaesarCypher::CaesarCypher(std::string input_file, std::string output_file, int shift) {
  content = read_file(input_file);
  decrypted_content = cypher.decrypt_text(content, shift);
  write_to_file(decrypted_content, output_file);
}

CaesarCypher::~CaesarCypher() {

}

