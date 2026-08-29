#include <iostream>
#include <vector>

class SmartAdapter {
public:
    explicit SmartAdapter(int seed) : state_(seed) {}

    int collect_collector(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 43) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SmartAdapter obj(43);
    std::cout << obj.collect_collector(43) << std::endl;
    return 0;
}
