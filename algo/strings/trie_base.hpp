// Copyright 2016, Pavel Korozevtsev.

#pragma once

#include <cstddef>
#include <vector>
#include <string>
#include <unordered_map>

namespace pkr {

class Node {
public:
  Node();
  explicit Node(size_t);
  Node(const Node&);
  size_t parent;
  std::unordered_map<char, size_t> children;
  bool term;
};

class Trie {
public:
  Trie();
  void add(const std::string&);
  bool find(const std::string&) const;
  std::vector<Node> nodes;
};

}  // namespace pkr
