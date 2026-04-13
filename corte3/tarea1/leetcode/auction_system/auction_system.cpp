#include <unordered_map>
using namespace std;

class AuctionSystem {
private:
    unordered_map<int, unordered_map<int,int>> bids;

public:
    AuctionSystem() {}

    void addBid(int userId, int itemId, int bidAmount) {
        bids[itemId][userId] = bidAmount;
    }

    void updateBid(int userId, int itemId, int newAmount) {
        bids[itemId][userId] = newAmount;
    }

    void removeBid(int userId, int itemId) {
        bids[itemId].erase(userId);
    }

    int getHighestBidder(int itemId) {
        if (bids.find(itemId) == bids.end()) return -1;
        auto& itemBids = bids[itemId];
        if (itemBids.empty()) return -1;

        int bestUser = -1, bestAmount = -1;
        for (auto& [userId, amount] : itemBids)
            if (amount > bestAmount ||
               (amount == bestAmount && userId > bestUser)) {
                bestAmount = amount;
                bestUser   = userId;
               }
        return bestUser;
    }
};

int main() { return 0; }