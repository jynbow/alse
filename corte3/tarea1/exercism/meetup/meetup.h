#pragma once

namespace meetup {

    enum month_t {
        Jan=1, Feb, Mar, Apr, May, Jun,
        Jul, Aug, Sep, Oct, Nov, Dec
    };

    class scheduler {
    private:
        int month_;
        int year_;

        int weekday_of(int day) const;
        int days_in_month() const;
        int find_day(int wd, int week) const;

    public:
        scheduler(month_t m, int y) : month_((int)m), year_(y) {}

        int monteenth()    const;
        int tuesteenth()   const;
        int wednesteenth() const;
        int thursteenth()  const;
        int friteenth()    const;
        int saturteenth()  const;
        int sunteenth()    const;

        int first_monday()    const;
        int first_tuesday()   const;
        int first_wednesday() const;
        int first_thursday()  const;
        int first_friday()    const;
        int first_saturday()  const;
        int first_sunday()    const;

        int second_monday()    const;
        int second_tuesday()   const;
        int second_wednesday() const;
        int second_thursday()  const;
        int second_friday()    const;
        int second_saturday()  const;
        int second_sunday()    const;

        int third_monday()    const;
        int third_tuesday()   const;
        int third_wednesday() const;
        int third_thursday()  const;
        int third_friday()    const;
        int third_saturday()  const;
        int third_sunday()    const;

        int fourth_monday()    const;
        int fourth_tuesday()   const;
        int fourth_wednesday() const;
        int fourth_thursday()  const;
        int fourth_friday()    const;
        int fourth_saturday()  const;
        int fourth_sunday()    const;

        int last_monday()    const;
        int last_tuesday()   const;
        int last_wednesday() const;
        int last_thursday()  const;
        int last_friday()    const;
        int last_saturday()  const;
        int last_sunday()    const;
    };

} // namespace meetup