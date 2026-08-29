#include <iostream>
#include <vector>

class RemoteFactory {
public:
    explicit RemoteFactory(int seed) : state_(seed) {}

    int handle_buffer(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 17) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    RemoteFactory obj(17);
    std::cout << obj.handle_buffer(17) << std::endl;
    return 0;
}
