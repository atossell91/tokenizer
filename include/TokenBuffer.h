#pragma once

#include <vector>
#include <string>

namespace AntSpace {
    class TokenBuffer {
        private:
            std::vector<char> buffer;
        public:
            const char kNullChar = '\0';

            TokenBuffer();
            size_t Size() const;
            void AddChar(char c);
            void RemoveLast();
            void Clear();
            std::string GetToken() const;
            std::vector<char>::const_iterator begin() const;
            std::vector<char>::const_iterator end() const;
    };
}
