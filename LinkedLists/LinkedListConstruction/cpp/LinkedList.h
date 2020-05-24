// Copyright 2020
// cpp course
// Author: Christian Leininger <info2016frei@gmail.com>


#include <iostream>
#include <vector>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
class Node {
 public:
  int _value;
  Node *_prev;
  Node *_next;
  explicit Node(int value);
};

class DoublyLinkedList {
 public:
  Node *_head;
  Node *_tail;
  void setHead(Node node);
  void setTail(Node node);
  void insertBefore(Node *node, Node *nodeToInsert);
  void insertAfter(Node *node, Node *nodeToInsert);
};

#endif  // LINKEDLIST_H_
