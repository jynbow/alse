#pragma once
#include <string>

namespace date_independent {

    class clock {
    private:
        int minutes_;
        explicit clock(int total_minutes);

    public:
        static clock at(int hour, int minute);
        clock plus(int minutes) const;
        bool operator==(const clock& other) const;
        bool operator!=(const clock& other) const;
        operator std::string() const;
    };

} // namespace date_independent