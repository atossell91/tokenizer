#pragma once

#include "../TokenBuffer.h"

namespace AntSpace {
    class IStateManager {
        public:
        virtual ~IStateManager() {}
        
        virtual bool GetState() = 0;
    };
}
