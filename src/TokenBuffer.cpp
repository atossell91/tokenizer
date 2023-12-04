#include "TokenBuffer.h"

using namespace AntSpace;

TokenBuffer::TokenBuffer() {
    buffer.push_back(kNullChar);
}

size_t TokenBuffer::Size() const {
    return buffer.size() - 1;
}

void TokenBuffer::AddChar(char c) {
    buffer[buffer.size()-1] = c;
    buffer.push_back(kNullChar);
}

void TokenBuffer::RemoveLast() {
    buffer.pop_back();
    buffer[buffer.size()-1] = kNullChar;
}

void TokenBuffer::Clear() {
    buffer.clear();
    buffer.push_back(kNullChar);
}

std::string TokenBuffer::GetToken() const {
    std::string str(buffer.data());

    return str;
}

std::vector<char>::const_iterator TokenBuffer::begin() const {
    return buffer.begin();
}

std::vector<char>::const_iterator TokenBuffer::end() const {
    return buffer.end();
}
