#include <iostream>
#include <vector>

class AsyncService {
public:
    explicit AsyncService(int seed) : state_(seed) {}

    int flush_router(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 7) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AsyncService obj(7);
    std::cout << obj.flush_router(7) << std::endl;
    return 0;
}
