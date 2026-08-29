#include <iostream>
#include <vector>

class AsyncRouter {
public:
    explicit AsyncRouter(int seed) : state_(seed) {}

    int build_processor(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 16) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    AsyncRouter obj(16);
    std::cout << obj.build_processor(16) << std::endl;
    return 0;
}
