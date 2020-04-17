# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class AirportNode:
    def __init__(self, airport):
        self.airport = airport
        self.connections = []
        self.isReachable = True
        self.unreachableConnections = []
