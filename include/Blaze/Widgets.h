#pragma once

#include <optional>
#include <vector>
#include "Blaze.h"

namespace Blaze {
    struct Element
    {
    };

    class BLAPI Container
    {
    // Properties
    public:
        Color backgroundColor;
        std::vector<Element> children;
    // Funcions
    public:

    };

    class BLAPI Label : public Element
    {
    };
}

