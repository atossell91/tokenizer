#pragma once

#include <vector>
#include <memory>

#include "Trie/TrieBuidler.h"

namespace AntSpace {
    class TrieBuilder;

    class TrieNode {
        public:
            TrieNode(char val) : value{val} {}
            char GetValue() const { return value; }
        private:
            char value;
            friend class AntSpace::TrieBuilder;
    };
}

