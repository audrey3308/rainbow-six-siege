#include <iostream>
#include <vector>

class AsyncAdapter {
public:
    explicit AsyncAdapter(int seed) : state_(seed) {}

    int flush_gateway(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 52) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    AsyncAdapter obj(52);
    std::cout << obj.flush_gateway(52) << std::endl;
    return 0;
}
