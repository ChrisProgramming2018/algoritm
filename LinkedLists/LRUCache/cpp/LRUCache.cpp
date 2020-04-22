// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include "./LRUCache.h"

// ______________________________________________________________
DoublyLinkedListNode(std::string key, int  value) {
  this->key = key;
  this->value = value;
  this->prev = NULL;
  this->next = NULL;
}


// ______________________________________________________________
void DoublyLinkedListNode::removeBindings() {
  if (this->prev != NULL) {
    this->prev->next = this->next;
  }
  if (this->next != NULL) {
    this->next->prev = this->prev;
  }
  this->prev = NULL;
  this->next = NULL;
}





// ______________________________________________________________
DoublyLinkedList::DoublyLinkedList() {
  this->head = NULL;
  this->tail = NULL;
}

// ______________________________________________________________
void DoublyLinkedListNode::setHeadTo(DoublyLinkedListNode *node) {
  if (this->head == node) {
    return;
  } else if (this->head == NULL) {
    this->head = node;
    this->tail = node;
  } else if (this->head == this->tail) {
    this->tail->prev = node;
    this->head = node;
    this->head->next = this->tail;
  } else {
    if (this->tail == node) {
      this->removeTail();
    }
    node->removeBindings();
    this->head->prev = node;
    node->next = this->head;
    this->head = node;
  }
}
      

// ______________________________________________________________
void DoublyLinkedListNode::removeTail() {
  if (this->tail == NULL) {
    return;
  }
  if (this->tail == this->head) {
    this->head = NULL;
    this->tail = NULL;
    return;
  }
  this->tail = this->tail->prev;
  this->tail->next = NULL;
}

// ______________________________________________________________
LRUCache::LRUCache(int maxSize) {
  this->maxSize = maxSize > 1 ? maxSize : 1;
  this->currentSize = 0;
  this->listOfMostRecent = DoublyLinkedList();
}

// ______________________________________________________________
void LRUCache::insertKeyValuePair(std::string key, int value) {
  if (this->cache.find(key) == this->cache.end()) {
    if (this->currentSize == this->maxSize) {
      this->evictLeastRecent();
    } else {
      this->currentSize++;
    }
    this->cache[key] = new DoublyLinkedListNode(key, value);
  } else { 
    this->replaceKey(key, value);
  }
  this->updateMostRecent(this->cache[key]);
}

// ______________________________________________________________
int* LRUCache::getValueFromKey(std::string key) {
  if (this->cache.find(key) == this->cache.end()) {
    return NULL;
  }
  this->updateMostRecent(this->cache[key]);
  return &this->cache[key]->value;
}





















// ______________________________________________________________














