#pragma once

#include <memory>
#include <string>
#include <vector>

#include "interfaces/IBufferChecker.h"

#include "Token.h"
#include "TokenBuffer.h"

namespace AntSpace
{
    class Tokenizer {
        private:
            TokenBuffer buffer;
            IStateManager* stateManager;
            std::vector<Token> tokens;

        public:

        void Tokenize(const std::string& txt);
    };
} // namespace AntSpace

