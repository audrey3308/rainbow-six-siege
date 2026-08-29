#include <iostream>
#include <vector>

class AtomicMonitor {
public:
    explicit AtomicMonitor(int seed) : state_(seed) {}

    int fetch_registry(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 32) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    AtomicMonitor obj(32);
    std::cout << obj.fetch_registry(32) << std::endl;
    return 0;
}
