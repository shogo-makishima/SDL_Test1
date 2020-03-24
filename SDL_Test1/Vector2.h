#pragma once
namespace Engine {
    class Vector2 {
        public:
        Vector2(int x, int y);

        int GetX( );
        int GetY( );

        private:
        int _x = 0, _y = 0;
    };
}

