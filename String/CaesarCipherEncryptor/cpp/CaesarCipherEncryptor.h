// Copyright 2020
// caesar Cypher Encryptor
// Author: Christian Leininger <info2016frei@gmail.com>


#include <string>

#ifndef CAESARCIPHERENCRYPTOR_H_
#define CAESARCIPHERENCRYPTOR_H_

std::string caesarCypherEncryptor(std::string str, int key);
char getNewLetter(char letter, int key);
char getNewLetter(char letter, int key, std::string alphabet);
std::string caesarCypherEncryptor2(std::string str, int key);
char getNewLetter2(char letter, int key, std::string alphabet);

#endif  // CAESARCIPHERENCRYPTOR_H_

