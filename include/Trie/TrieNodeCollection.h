#pragma once

#include <vector>
#include <memory>

#include "Trie/TrieNode.h"

namespace AntSpace {

    using namespace AntSpace;
    class TrieNodeCollection {
        public:
        private:
            std::vector<std::unique_ptr<TrieNode>> nodes;
    };
}
