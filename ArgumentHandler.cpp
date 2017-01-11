#include "ArgumentHandler.h"

ArgumentHandler::ArgumentHandler(int argc, char** argv) {
  is_a_filename(argv[1]);
  is_shift_provided(argc, argv);
  is_value_provided(argc, argv);
  if (is_there_output_filename(argc, argv)) {
    CaesarCypher caesarcypher(argv[1], find_output_filename(argc, argv), string_to_int(find_shift_value(argc, argv)));
  } else {
    CaesarCypher caesarcypher(argv[1], string_to_int(find_shift_value(argc, argv)));
  }
}

bool ArgumentHandler::is_a_filename(std::string filename) throw (const char*) {
  std::string txt = "";
  for (unsigned int i = filename.size() - 4; i < filename.size(); ++i) {
    txt += filename[i];
  }
  if (txt != ".txt") {
    throw "No filename is provided.";
  }
  return (txt == ".txt");
}

bool ArgumentHandler::is_shift_provided(int argc, char** argv) throw (int) {
  int counter = 0;
  char s[] = "-s";
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == s[1]) {
      ++counter;
    }
  }
  if (counter != 1) {
    throw -1;
  }
  return (counter == 1);
}

std::string ArgumentHandler::find_shift_value(int argc, char** argv) {
  char s[] = "-s";
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == s[1]) {
      return argv[i + 1];
    }
  }
  return "Nothing found.";
}

std::string ArgumentHandler::find_output_filename(int argc, char** argv) {
  char o[] = "-o";
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == o[1]) {
      return argv[i + 1];
    }
  }
  return "Nothing found.";
}

bool ArgumentHandler::is_there_output_filename(int argc, char** argv) {
  int counter = 0;
  char o[] = "-o";
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == o[1]) {
      ++counter;
    }
  }
  if (counter != 1) {
    throw -1;
  }
  return (counter == 1);
}

bool ArgumentHandler::is_value_provided(int argc, char** argv) throw (int) {
  int counter = 0;
  char o[] = "-o";
  char s[] = "-s";
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == o[1] && i + 1 < argc && argv[i + 1][1] != s[1]) {
      ++counter;
    }
  }
  for (int i = 1; i < argc; ++i) {
    if (argv[i][1] == s[1] && i + 1 < argc && argv[i + 1][1] != o[1]) {
      ++counter;
    }
  }
  if (counter != 2) {
    throw -2;
  }
  return (counter == 2);
}
