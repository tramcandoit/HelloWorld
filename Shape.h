class Shape {
    protected:
        float width;
        float height;
    public:
        auto getWidth() const {
            return width;
        }
        auto getHeight() const {
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