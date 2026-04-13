#include "meetup.h"
#include <ctime>

namespace meetup {

int scheduler::weekday_of(int day) const {
    struct tm t = {};
    t.tm_year = year_ - 1900;
    t.tm_mon  = month_ - 1;
    t.tm_mday = day;
    mktime(&t);
    return t.tm_wday;
}

int scheduler::days_in_month() const {
    struct tm t = {};
    t.tm_year = year_ - 1900;
    t.tm_mon  = month_;
    t.tm_mday = 0;
    mktime(&t);
    return t.tm_mday;
}

int scheduler::find_day(int wd, int week) const {
    if (week == 0) {
        for (int d = 13; d <= 19; ++d)
            if (weekday_of(d) == wd) return d;
    } else if (week == -1) {
        int last = days_in_month();
        for (int d = last; d >= last - 6; --d)
            if (weekday_of(d) == wd) return d;
    } else {
        for (int d = 1; d <= 7; ++d)
            if (weekday_of(d) == wd)
                return d + (week - 1) * 7;
    }
    return -1;
}

int scheduler::monteenth()    const { return find_day(1, 0); }
int scheduler::tuesteenth()   const { return find_day(2, 0); }
int scheduler::wednesteenth() const { return find_day(3, 0); }
int scheduler::thursteenth()  const { return find_day(4, 0); }
int scheduler::friteenth()    const { return find_day(5, 0); }
int scheduler::saturteenth()  const { return find_day(6, 0); }
int scheduler::sunteenth()    const { return find_day(0, 0); }

int scheduler::first_monday()    const { return find_day(1, 1); }
int scheduler::first_tuesday()   const { return find_day(2, 1); }
int scheduler::first_wednesday() const { return find_day(3, 1); }
int scheduler::first_thursday()  const { return find_day(4, 1); }
int scheduler::first_friday()    const { return find_day(5, 1); }
int scheduler::first_saturday()  const { return find_day(6, 1); }
int scheduler::first_sunday()    const { return find_day(0, 1); }

int scheduler::second_monday()    const { return find_day(1, 2); }
int scheduler::second_tuesday()   const { return find_day(2, 2); }
int scheduler::second_wednesday() const { return find_day(3, 2); }
int scheduler::second_thursday()  const { return find_day(4, 2); }
int scheduler::second_friday()    const { return find_day(5, 2); }
int scheduler::second_saturday()  const { return find_day(6, 2); }
int scheduler::second_sunday()    const { return find_day(0, 2); }

int scheduler::third_monday()    const { return find_day(1, 3); }
int scheduler::third_tuesday()   const { return find_day(2, 3); }
int scheduler::third_wednesday() const { return find_day(3, 3); }
int scheduler::third_thursday()  const { return find_day(4, 3); }
int scheduler::third_friday()    const { return find_day(5, 3); }
int scheduler::third_saturday()  const { return find_day(6, 3); }
int scheduler::third_sunday()    const { return find_day(0, 3); }

int scheduler::fourth_monday()    const { return find_day(1, 4); }
int scheduler::fourth_tuesday()   const { return find_day(2, 4); }
int scheduler::fourth_wednesday() const { return find_day(3, 4); }
int scheduler::fourth_thursday()  const { return find_day(4, 4); }
int scheduler::fourth_friday()    const { return find_day(5, 4); }
int scheduler::fourth_saturday()  const { return find_day(6, 4); }
int scheduler::fourth_sunday()    const { return find_day(0, 4); }

int scheduler::last_monday()    const { return find_day(1, -1); }
int scheduler::last_tuesday()   const { return find_day(2, -1); }
int scheduler::last_wednesday() const { return find_day(3, -1); }
int scheduler::last_thursday()  const { return find_day(4, -1); }
int scheduler::last_friday()    const { return find_day(5, -1); }
int scheduler::last_saturday()  const { return find_day(6, -1); }
int scheduler::last_sunday()    const { return find_day(0, -1); }

} // namespace meetup

int main() { return 0; }