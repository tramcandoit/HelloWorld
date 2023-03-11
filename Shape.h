// Shape.h

class Shape {
    protected:
        float width;
        float height;
    public:
        auto getWidth() {
            return width;
        }
        auto getHeight() {
            return height;
        }
        void setWidth(float w) {
            if (w>= 0)
                width = w;
        }
        void setHeight(float h) {
            if (h >= 0)
                height = h;
        }
};