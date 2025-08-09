#pragma once

#include "Blaze.h"
#include <vector>
#include <memory>

namespace Blaze {
    template <typename Derived>
    struct View {
    public:
        // Color backgroundColor;
        // std::vector<std::unique_ptr<AnyView>> children;

        virtual ~View() = default;
        BLAPI void draw();
    };

    class Label : View<Label>
    {
    };
}