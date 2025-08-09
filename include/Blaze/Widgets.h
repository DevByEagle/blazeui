#pragma once

#include "Blaze.h"
#include <vector>
#include <memory>

namespace Blaze {
    struct AnyView {
        AnyView() = default;
    };

    template <typename Derived>
    struct View {
    public:
        Color backgroundColor;
        std::vector<std::unique_ptr<AnyView>> children;

        virtual ~View() = default;
        void draw();
    private:
        Derived& derived() { return static_cast<Derived&>(*this); }
    };

    struct Label : View<Label> {
    };
}