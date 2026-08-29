#include <iostream>
#include <vector>

class LocalHandler {
public:
    explicit LocalHandler(int seed) : state_(seed) {}

    int sync_parser(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 29) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    LocalHandler obj(29);
    std::cout << obj.sync_parser(29) << std::endl;
    return 0;
}
