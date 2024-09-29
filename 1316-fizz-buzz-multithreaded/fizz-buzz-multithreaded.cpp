#include <atomic>
#include <functional>

class FizzBuzz {
private:
    int n;
    std::atomic<int> count;

public:
    FizzBuzz(int n) : count(1) {
        this->n = n;
    }

    void fizz(std::function<void()> printFizz) {
        while (true) {
            int cur = count.load();
            if (cur > n) return;
            if (cur % 3 == 0 && cur % 5 != 0) {
                printFizz();
                count.fetch_add(1);
            }
        }
    }

    void buzz(std::function<void()> printBuzz) {
        while (true) {
            int cur = count.load();
            if (cur > n) return;
            if (cur % 5 == 0 && cur % 3 != 0) {
                printBuzz();
                count.fetch_add(1);
            }
        }
    }

    void fizzbuzz(std::function<void()> printFizzBuzz) {
        while (true) {
            int cur = count.load();
            if (cur > n) return;
            if (cur % 3 == 0 && cur % 5 == 0) {
                printFizzBuzz();
                count.fetch_add(1);
            }
        }
    }

    void number(std::function<void(int)> printNumber) {
        while (true) {
            int cur = count.load();
            if (cur > n) return;
            if (cur % 3 != 0 && cur % 5 != 0) {
                printNumber(cur);
                count.fetch_add(1);
            }
        }
    }
};
