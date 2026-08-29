#include <iostream>
#include <vector>

class DynamicMonitor {
public:
    explicit DynamicMonitor(int seed) : state_(seed) {}

    int decode_parser(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 62) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    DynamicMonitor obj(62);
    std::cout << obj.decode_parser(62) << std::endl;
    return 0;
}
