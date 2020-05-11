# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


def getLowestCommonManager(topManager, reportOne, reportTwo):
    return getInfo(topManager, reportOne, reportTwo).lowestCommonManager


def getInfo(manager, reportOne , reportTwo):
    numimRe = 0

    for dirRe in manager.directReports:
        info = getInfo(dirRe, reportOne, reportTwo)
        if info.lowestCommonManager is not None:
            return info
        numimRe +=1
    if manager == reportOne or manager == reportTwo:
        numimRe += 1

    lowestCommonManager = manager if numimRe == 2 else None
    return Info(lowestCommonManager, numimRe)



class Info:
    def __init__(self, lowestCommonManager, numRe):
        self.lowestCommonManager = lowestCommonManager
        self.numImReports = numRe
            
