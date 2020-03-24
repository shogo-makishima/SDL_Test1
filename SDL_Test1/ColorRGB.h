#pragma once
#include <string>

namespace Engine {
    namespace Images {
        class ColorRGB {
            public:
            int r = 0, g = 0, b = 0;
            std::string name = "";
            ColorRGB(int getR, int getG, int getB, std::string getName);
        };
    }
}

