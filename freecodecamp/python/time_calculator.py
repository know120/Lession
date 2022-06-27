def add_time(start, duration, day=''):

    days = ['Monday', 'Tuesday', 'Wednesday',
            'Thursday', 'Friday', 'Saturday', 'Sunday']
    # to find out exact day
    day_index = 0

    # processing inputs
    time, time_period = start.split()
    start_hour, start_minute = time.split(':')
    duration_hour, duration_minute = duration.split(':')

    # converts time in hour and minute
    new_minute = int(start_minute) + int(duration_minute)
    new_hour = int(start_hour) + int(duration_hour)
    new_days = 0

    # check "AM"/"PM"
    if time_period == 'PM':
        new_hour = int(new_hour) + 12

    # hours from adding minute
    if new_minute >= 60:
        new_hour += new_minute // 60
        new_minute = new_minute % 60

    # to handle single digit minutes
    if new_minute < 10:
        new_minute = '0' + str(new_minute)
    else:
        new_minute = str(new_minute)

    # calculate number of days
    if new_hour > 24:
        new_days = new_hour // 24
        new_hour = new_hour % 24

    # adjust "AM"/"PM"
    if new_hour > 11:
        new_hour -= 12
        time_period = 'PM'
    else:
        time_period = 'AM'
    # handling mid-night timing
    if new_hour == 0:
        new_hour = 12

    # adding hour, minute & AM/PM
    new_time = (':').join([str(new_hour), str(new_minute)])
    new_time = (' ').join([new_time, time_period])

    # checks optional parameter
    if len(day) > 0:
        if new_days == 0:
            new_time = new_time + ', ' + day
        else:
            # finding out exact day
            for _day in days:
                if _day.lower() == day.lower():
                    day_index = days.index(_day) + new_days
            day_index %= 7
            # prepare final time string
            if new_days == 1:
                new_time = new_time + ', ' + days[day_index] + ' (next day)'
            else:
                new_time = new_time + ', ' + \
                    days[day_index] + ' (' + str(new_days) + ' days later)'
    # incase optional parameter is not there
    else:
        if new_days == 0:
            new_time = new_time
        elif new_days == 1:
            new_time = new_time + ' (next day)'
        else:
            new_time = new_time + ' (' + str(new_days) + ' days later)'

    return new_time

