#pragma once

#include "Blaze.h"

namespace Blaze {
    class BLAPI Application {
    public:
        virtual ~Application();

        bool IsRunning() const;
        void Run();
    private:
        bool m_Running;
    };

    class BLAPI Game : public Application {
    public:
    };
}