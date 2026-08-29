#include <iostream>
#include <vector>

class AsyncBuilder {
public:
    explicit AsyncBuilder(int seed) : state_(seed) {}

    int build_builder(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 95) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AsyncBuilder obj(95);
    std::cout << obj.build_builder(95) << std::endl;
    return 0;
}
