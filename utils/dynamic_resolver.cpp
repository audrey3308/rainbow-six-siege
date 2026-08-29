#include <iostream>
#include <vector>

class HybridMonitor {
public:
    explicit HybridMonitor(int seed) : state_(seed) {}

    int run_registry(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 90) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridMonitor obj(90);
    std::cout << obj.run_registry(90) << std::endl;
    return 0;
}
