// Copyright 2020
// caesar Cypher Encryptor
// Author: Christian Leininger <info2016frei@gmail.com>


#include <gtest/gtest.h>
#include "./CaesarCipherEncryptor.h"


TEST(CaesarCipherEncryptorTest, CaesarCipherEncryptor) {
  ASSERT_EQ(caesarCypherEncryptor("abc", 0), "abc");
  ASSERT_EQ(caesarCypherEncryptor("abc", 3), "def");
  ASSERT_EQ(caesarCypherEncryptor("xyz", 2), "zab");
  ASSERT_EQ(caesarCypherEncryptor("xyz", 5), "cde");
  ASSERT_EQ(caesarCypherEncryptor("abc", 26), "abc");
  ASSERT_EQ(caesarCypherEncryptor("abc", 52), "abc");
  ASSERT_EQ(caesarCypherEncryptor("abc", 57), "fgh");
}
