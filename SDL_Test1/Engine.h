#include "SDL.h"
#include <iostream>
#include "Vector2.h"
#include "Window.h"
#include "Surface.h"
#include "ColorRGB.h"
#include <array>

#pragma once
namespace Engine {
    namespace Images {
        class StandartColors {
            public:
            ColorRGB* GetColorByName(std::string name = "") {
                for (ColorRGB* color : colors)
                    if (color->name == name) return color;
            }

            private:
            std::array<ColorRGB*, 1> colors = {
                new ColorRGB(255, 0, 0, "Red")
            };
        };
    }
}

