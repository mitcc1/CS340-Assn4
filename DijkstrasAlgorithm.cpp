/*
Written By: Chelsey Mitchell
CS340: Assignment 4 - Part II
Dijkstra's Algorithm
*/
#include "pch.h"
#include<iostream>
#include<climits>  


using namespace std;
#define infinity 9999
#define size 6
#define numEdges 10

void Dijkstra(int graph[size][size], int start);
int minDistance(int distance[], bool visited[]);

int main() 
{
	int graph[size][size]; //Create the 5x5 matrix
	int x, y;
	char addEdges = 'y';

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			graph[i][j] = 0; //set all weights to 0
		}
	}
	cout << "Your graph is size 6x6 and it contains 6 vertices, 0, 1, 2, 3, 4 and 5. " << endl;
	cout << "Input: This program allows you to input upto 10 edges and their weights " << endl;
	cout << "Output: Using Dijkstra's Algorithm, the shortest path from the start vertex 0 " << endl;
	cout << "to each of the other 5 vertices will be calculate and displayed " << endl;

	int k = 1;
	for (int k = 1; k <= numEdges; k++) //enter up to 10 edges and their weights
	{
		cout << "Enter edge number " << k << " by typing the two connecting vertices. Ex: 0 1 " << endl;
		cin >> x >> y;
		if (x >= size || y >= size)
		{
			cout << "Your vertices must be between 0 and 4. Enter an edge by typing the two connecting vertices. Ex: 0 1 " << endl;
			cin >> x >> y;
		}
		cout << "Enter the weight of the edge " << endl;
		cin >> graph[x][y];
		graph[y][x] = graph[x][y];

		
		if (k < numEdges)
		{
			cout << "Do you want to add another edge Y/N? " << endl;
			cin >> addEdges;

			if (addEdges == 'n' || addEdges == 'N')
			{
				k = numEdges;
			}
		}
	}

	Dijkstra(graph, 0);

	return 0;
}


void Dijkstra(int graph[size][size], int start)
{
	int distance[size]; //array to hold the calculated min distance for each vertex.                            
	bool visited[size];//array to mark which vertex has been visited.

	
	// Set all vertice to inifinity distance and unvisited.  
	for (int i = 0; i < size; i++)
	{
		distance[i] = infinity;
		visited[i] = false;
	}

	distance[start] = 0;   //Set the start vertex (0) to zero distance             

	for (int i = 0; i < size; i++)
	{
		int min = minDistance(distance, visited); // vertex not yet included.
		visited[min] = true;// min with minimum distance included in visited.
		for (int i = 0; i < size; i++)
		{
			// Updating the minimum distance for the part.
			if (!visited[i] && graph[min][i] && distance[min] != infinity && distance[min] + graph[min][i] < distance[i])
				distance[i] = distance[min] + graph[min][i];
		}
	}
	cout << "Vertex\t\tDistance from Start" << endl;
	for (int i = 0; i < size; i++)
	{ 		
		cout << i << "\t\t " << distance[i] << endl;
	}
}
// Returns the min distance 
int minDistance(int distance[], bool visited[])
{
	int min = infinity, index;

	for (int i = 0; i < size; i++)
	{
		if (distance[i] <= min && visited[i] == false)
		{
			min = distance[i];
			index = i;
		}
	}
	return index;

}
