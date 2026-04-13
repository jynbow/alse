#include "clock.h"
#include <sstream>
#include <iomanip>

namespace date_independent {

    clock::clock(int total_minutes) {
        minutes_ = ((total_minutes % 1440) + 1440) % 1440;
    }

    clock clock::at(int hour, int minute) {
        return clock(hour * 60 + minute);
    }

    clock clock::plus(int minutes) const {
        return clock(minutes_ + minutes);
    }

    bool clock::operator==(const clock& other) const {
        return minutes_ == other.minutes_;
    }

    bool clock::operator!=(const clock& other) const {
        return !(*this == other);
    }

    clock::operator std::string() const {
        int h = minutes_ / 60;
        int m = minutes_ % 60;
        std::ostringstream oss;
        oss << std::setw(2) << std::setfill('0') << h
            << ":"
            << std::setw(2) << std::setfill('0') << m;
        return oss.str();
    }

} // namespace date_independent

int main() { return 0; }