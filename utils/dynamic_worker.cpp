#include <iostream>
#include <vector>

class DynamicLoader {
public:
    explicit DynamicLoader(int seed) : state_(seed) {}

    int decode_parser(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 64) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    DynamicLoader obj(64);
    std::cout << obj.decode_parser(64) << std::endl;
    return 0;
}
