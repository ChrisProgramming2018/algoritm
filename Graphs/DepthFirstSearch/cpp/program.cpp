#include <vector>
#include <string>

class Node {
 public:
  std::string name;
  std::vector<Node*> children;

  Node(std::string name) {
    this->name = name;
  }

  std::vector<string> depthFirstSearch(std::vector<std::string>* array) {
    array->push_back(this->name);
    for (int i = 0; i < this->children.size(); i++) {
      children[i]->depthFirstSearch(array);
    }
    return *array;
  }

  Node *addChild(std::string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};
