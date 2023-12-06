#include "Tokenizer.h"

#include <string>
#include <vector>

#include "interfaces/IBufferChecker.h"

#include "Token.h"

using namespace AntSpace;

void Tokenizer::Tokenize(const std::string& txt) {
    for (char c : txt) {
        if (!stateManager->GetState()) {
            Token t = Token("j", 0, 0);
            //  Something needs to create a token to assign t to
            tokens.push_back(t);
            buffer.Clear();
            // Get state - Somehow
        }
        buffer.AddChar(c);
    }
}

// newState = charState(currentState, char);
// if (currentState != newState) {
//   // get token, add to vector, cleae buffer   
// }