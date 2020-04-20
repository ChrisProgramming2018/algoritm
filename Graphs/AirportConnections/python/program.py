# Copyright 2020
# Author: Christian Leininger <info2016frei@gmail.com>


class AirportNdoe:
	def __init__(self, airport):
		self.airport = airport
		self.connections = []
		self.isReachable = True
		self.unreachableConnections = []



def airportConnections(airports, routes, startingAirport):
    """ 

    Args:
        param1(airports): 
        param2(routes):
        param3(startingAirport):
    Return:
    """

    airportGraph = createAirportGraph(airports, routes)
    unreachableAirportNodes = getUnreachableAirportNodes(airportGraph, airports, startingAirport)
    markUnreachableConnections(airportGraph, unreachableAirportNodes)
    return getMinNumberOfNewConnections(airportGraph, unreachableAirportNodes)


def createAirportGraph(airports, routes):
    """


    Args:
        param1(airports):
        param2(routes):
    Return: airportGraph
    """
    airportGraph = {}
    for airport in airports:
        airportGraph[airport] = AirportNdoe(airport)
    for route in routes:
        airport, connection = route
        airportGraph[airport].connections.append(connection)
    return airportGraph

	
def getMinNumberOfNewConnections(airportGraph, unreachableAirportNodes):
	unreachableAirportNodes.sort(key=lamda airport: len(airport.unreachableConnections), reverse=True)
	
def depthFirstTraverseAirport(airportGraph, airport, visitedAirports):
	for airport
	
	
	for connections
	
def getUnreachableAirportNodes(airportGraph, airports, startingAirport):
	return unreachableAirportNodes

def markUnreachableConnections(airportGraph, unreachableAirportNodes)
