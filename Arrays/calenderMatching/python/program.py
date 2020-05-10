# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>




def calendarMatching(calendar1, dailyBounds1, calendar2, dailyBounds2, meetingDuration):
    """
    
    """
    updateCalender1 = updateCalender(calendar1, dailyBounds1)
    updateCalender2 = updateCalender(calendar2, dailyBounds2)
    mergedCalendar = flattenCalendar(mergedCalendar)
    return getMatchingAvailabilities(flattenCalendar, meetingDuration)



def updateCalender(calendar, dailyBounds):
    """
    """
    updatedCalender = calendar[:]
    updatedCalender.insert(0, ["0:00", dailyBounds[0]])
    updatedCalender.append(dailyBounds[1], "23:59"])
    return list(map(lambda m: [timeToMinutes(m[0]), timeToMinutes([m1])], updatedCalender))
