# CS340-Assn4

Assignment 4 - Part II

Written By: Chelsey Mitchell

Written in C++ using Visual Studio 2017

Assignment Description:
1. Choose one to implement:
a. Dijkstra's Algorithm
b. A* Algorithm
c. DFS to check if a graph is 2-colorable or not
The input graph format is open: STL, adjacent lists, matrices, .txt, .json, user input,
etc. The solution just cannot be hard coded. You may also fork a project that
deals with graphs - for obvious reasons do not fork the search algorithm.
It can be done in any programming language of your choosing.
Create one repository for the search algorithm on GitHub. Besides the coding files,
the repository must contain:
i. a READ.me file with proper instructions on how to run it
ii. either a script/log text file or a video of your algorithm running.
Add the web address of your GitHub repository as the answer of Part II Question 1.

Solution Description:
I chose to implement Dijkstra's Algorithm. My program creates a 6x6 matrix with 6 vertices: 0, 1, 2, 3, 4, 5.  The user is asked to input up to 10 edges as well as the weight of each edge.  Using Dijkstra's Algorithm the shortest path from the starting vertex 0 to each of the other 5 vertices is calculated and displayed.

User Instructions: 
1. Run the program
2. Enter an edge. Example:  If you would like to enter and edge between vertex 0 and vertex 1, you would enter 0 1
3. Enter the weight of the edge. Example if the weight of edge 0 1 is 5, enter 5.
4. Confirm if you want to continue to add more edges. Repeat adding edges and their weights until you are done or you have entere 10 edges.

