#include "util.h"

std::string read_file(std::string file_name) {
  std::ifstream source_file(file_name);
  std::string buffer;
  std::string content = "";
  while (getline(source_file, buffer)) {
    content += buffer + "\n";
  }
  source_file.close();
  return content;
}


void write_to_file(std::string content, std::string file_name) {
  std::ofstream output_file(file_name);
  output_file << content;
  output_file.close();
}

void print_to_console(std::string content) {
  std::cout << content << std::endl;
}

int string_to_int(std::string str) {
  int integer = atoi(str.c_str());
  return integer;
}
