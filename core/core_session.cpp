#include <iostream>
#include <vector>

class AsyncMonitor {
public:
    explicit AsyncMonitor(int seed) : state_(seed) {}

    int render_buffer(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 71) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    AsyncMonitor obj(71);
    std::cout << obj.render_buffer(71) << std::endl;
    return 0;
}
