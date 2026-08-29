#include <iostream>
#include <vector>

class LocalBuffer {
public:
    explicit LocalBuffer(int seed) : state_(seed) {}

    int decode_cache(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 59) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    LocalBuffer obj(59);
    std::cout << obj.decode_cache(59) << std::endl;
    return 0;
}
