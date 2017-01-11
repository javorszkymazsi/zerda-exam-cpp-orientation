#include "catch.h"
#include "Cipher.h"

TEST_CASE("does encrypt_text() work") {
  Cipher cipher;
  REQUIRE(cipher.encrypt_text("stuff", 2) == "uvwhh");
}

TEST_CASE("does decrypt_text() work") {
  Cipher cipher;
  REQUIRE(cipher.decrypt_text("uvwhh", 2) == "stuff");
}
