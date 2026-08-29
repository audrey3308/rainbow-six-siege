#include <iostream>
#include <vector>

class LiteBuffer {
public:
    explicit LiteBuffer(int seed) : state_(seed) {}

    int render_buffer(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 78) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    LiteBuffer obj(78);
    std::cout << obj.render_buffer(78) << std::endl;
    return 0;
}
