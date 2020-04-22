// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <vector>
#include <unordered_map>
#include <string>


#ifndef THREAD_H_
#define THREAD_H_

class DoublyLinkedListNode {
 public:
   std::string key;
   int value;
   DoublyLinkedListNode *prev;
   DoublyLinkedListNode *next;
   DoublyLinkedListNode(std::string key, int value);
   void removeBindings();
};

class DoublyLinkedList {
 public:
  DoublyLinkedListNode *head;
  DoublyLinkedListNode *tail;

  DoublyLinkedList();
  void setHeadTo(DoublyLinkedListNode *Node);
  void removeTail();
};

class LRUCache {
 public:
   std::unordered_map<std::string, DoublyLinkedListNode*> cache;
   int maxSize;
   int currentSize;
   DoublyLinkedList listOfMostRecent;
   LRUCache(int maxSize);
   void insertKeyValuePair(std::string key, int value);
   std::string getMostRecentKey();
   int* getValueFromKey(std::string key);
   void evictLeastRecent();
   void updateMostRecent(DoublyLinkedListNode *node);
   void replaceKey(std::string key, int value);
};

#endif //

