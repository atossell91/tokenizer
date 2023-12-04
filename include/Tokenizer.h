#pragma once

#include <memory>
#include <string>
#include <vector>

#include "interfaces/IBufferChecker.h"

#include "TokenBuffer.h"

namespace AntSpace
{
    class Tokenizer {
        private:
            TokenBuffer buffer;
            IBufferChecker* currentChecker;
            std::vector<std::string> tokens;

        public:

        void Tokenize(const std::string& txt);
    };
} // namespace AntSpace

