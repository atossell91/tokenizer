#pragma once

#include <string>
#include <cstdint>

namespace AntSpace {
    class Token {
        public:
            Token(const std::string& s, uint16_t t, uint16_t v) :
                str{ s }, type{ t }, value { v } {}

            std::string GetString() const { return str; }
            uint16_t GetType() const { return type; }
            uint16_t GetValue() const { return value; }
            
        private:
            std::string str;
            uint16_t value;
            uint16_t type;
    };
}
