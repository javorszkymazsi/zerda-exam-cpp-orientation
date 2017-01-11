#include "ArgumentHandler.h"


int main(int argc, char** argv) {
  try {
    ArgumentHandler argument_handler(argc, argv);
  } catch (const char* exception_1) {
    std::cout << exception_1 << std::endl;
  } catch (int exception_2) {
    if (exception_2 == -1) {
      std::cout << "No shift is provided." << std::endl;
    } else if (exception_2 == -2) {
      std::cout << "No value is provided either for shift or output file." << std::endl;
    }
  }
  return 0;
}
