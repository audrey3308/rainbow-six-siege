#include <iostream>
#include <vector>

class LiteHandler {
public:
    explicit LiteHandler(int seed) : state_(seed) {}

    int render_registry(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 37) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LiteHandler obj(37);
    std::cout << obj.render_registry(37) << std::endl;
    return 0;
}
