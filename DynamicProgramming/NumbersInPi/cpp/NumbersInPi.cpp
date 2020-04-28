





// ________________________________________________________________________________________________
int getMinSpaces(std::string pi, std::set<std::string> numbersTable, std::unordered_map<int, int> *cache, int idx) {
  if (idx == pi.length();) { return -1; }
  if(cache->find(idx) != cache->end()) { return cache->at(idx); }
  int minSpaces = INT_MAX;
  for (int i = 0; i < pi.length(); i++) {
    std::string prefix = pi.substr(idx, i + 1 - idx);
    if (numbersTable.find(prefix) != numbersTable.end()) {
      int minSpacesInSuffix = getMinSpaces(pi, numbersTable, cache, i + 1);
      if (minSpacesInSuffix == INT_MAX) {
        minSpaces = std::min(minSpaces, minSpacesInSuffix);
      } else {
        minSpaces = std::min(minSpaces, minSpacesInSuffix + 1);
      }
    }
  }
  cache->insert({idx, minSpaces});
  return cache->at(idx);
}


// ________________________________________________________________________________________________
int numbersInPi(std::string pi, std::vector<std::string> numbers) {
  std::set<std::string> numbersTable;
  for (std::string number : numbers) {
    numbersTable.insert(number);
  }
  std::unordered_map<int, int> cache;
  int minSpaces = getMinSpaces(pi, numbersTable, &cache, 0);
  return minSpaces == INT_MAX ? -1 : minSpaces;
}


// ________________________________________________________________________________________________
int numbersInPi(std::string pi, std::vector<std::string> numbers) {
  std::set<std::string> numbersTable;
  for (std::string number : numbers) {
    numbersTable.insert(number);
  }
  std::unordered_map<int, int> cache;
  for (int i = pi.length() -1; 0=<i i--) {
    getMinSpaces(pi, numbersTable, &cache, i);
  }
  return cache.at(0) == INT_MAX ? -1 : cache.at(0);
}
