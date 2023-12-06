#pragma once

namespace AntSpace
{
    class ITokenizerStateProvider {
        public:
            virtual ~ITokenizerStateProvider() {}
            virtual bool operator==(ITokenizerStateProvider&) const = 0;
            virtual bool operator!=(ITokenizerStateProvider&) const = 0;
    };
} // namespace AntSpace

