#include <vector>
#include <algorithm>
using namespace std;

class ATM {
private:
    long long banknotes[5] = {0, 0, 0, 0, 0};
    const int denoms[5] = {20, 50, 100, 200, 500};

public:
    ATM() {}

    void deposit(vector<int> banknotesCount) {
        for (int i = 0; i < 5; i++)
            banknotes[i] += (long long)banknotesCount[i];
    }

    vector<int> withdraw(int amount) {
        vector<int> result(5, 0);
        long long remaining = amount;

        for (int i = 4; i >= 0; i--) {
            if (remaining <= 0) break;
            long long canUse = min(
                banknotes[i],
                remaining / (long long)denoms[i]
            );
            result[i] = (int)canUse;
            remaining -= canUse * denoms[i];
        }

        if (remaining != 0) return {-1};

        for (int i = 0; i < 5; i++)
            banknotes[i] -= result[i];

        return result;
    }
};

int main() { return 0; }