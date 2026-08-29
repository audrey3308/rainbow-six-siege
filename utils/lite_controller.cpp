#include <iostream>
#include <vector>

class AtomicDispatcher {
public:
    explicit AtomicDispatcher(int seed) : state_(seed) {}

    int fetch_processor(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 53) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    AtomicDispatcher obj(53);
    std::cout << obj.fetch_processor(53) << std::endl;
    return 0;
}
