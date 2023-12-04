#include "Tokenizer.h"

#include <string>
#include <vector>

#include "interfaces/IBufferChecker.h"

using namespace AntSpace;

void Tokenizer::Tokenize(const std::string& txt) {
    for (char c : txt) {
        if (!currentChecker->charAccepted(buffer, c)) {
            tokens.push_back(buffer.GetToken());
            buffer.Clear();
            // Get state - Somehow
        }
        buffer.AddChar(c);
    }
}
