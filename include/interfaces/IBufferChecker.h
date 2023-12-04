#pragma once

#include "../TokenBuffer.h"

namespace AntSpace {
    class IBufferChecker {
        public:
        virtual ~IBufferChecker() {}
        
        virtual bool charAccepted(const TokenBuffer&, char) = 0;
    };
}
