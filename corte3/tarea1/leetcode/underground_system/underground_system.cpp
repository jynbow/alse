#include <string>
#include <unordered_map>
using namespace std;

class UndergroundSystem {
private:
    unordered_map<int, pair<string, int>> active;
    unordered_map<string, pair<double, int>> routes;

public:
    UndergroundSystem() {}

    void checkIn(int id, string stationName, int t) {
        active[id] = make_pair(stationName, t);
    }

    void checkOut(int id, string stationName, int t) {
        auto& [startStation, startTime] = active[id];
        int travelTime = t - startTime;
        string routeKey = startStation + "," + stationName;
        routes[routeKey].first  += travelTime;
        routes[routeKey].second += 1;
        active.erase(id);
    }

    double getAverageTime(string startStation, string endStation) {
        string routeKey = startStation + "," + endStation;
        auto& [totalTime, count] = routes[routeKey];
        return totalTime / count;
    }
};

int main() { return 0; }