def dfs(graph, start_node, visited=None):
    """
    Performs a Depth-First Search (DFS) on a graph.

    Args:
        graph (dict): A dictionary representing the graph where keys are nodes
                      and values are lists of adjacent nodes.
        start_node: The node from which to start the DFS.
        visited (set): A set to keep track of visited nodes (used for recursion).
                       Defaults to None for the initial call.
    """
    if visited is None:
        visited = set()

    visited.add(start_node)
    print(start_node, end=" ")  # Process the current node (e.g., print it)

    for neighbor in graph.get(start_node, []):
        if neighbor not in visited:
            dfs(graph, neighbor, visited)

# Example Usage:
if __name__ == "__main__":
    # Represent the graph using an adjacency list
    graph = {
        'A': ['B', 'C'],
        'B': ['A', 'D', 'E'],
        'C': ['A', 'F'],
        'D': ['B'],
        'E': ['B', 'F'],
        'F': ['C', 'E']
    }

    print("DFS Traversal starting from 'A':")
    dfs(graph, 'A')
    print("\n")

    graph2 = {
        0: [1, 2],
        1: [2],
        2: [0, 3],
        3: [3]
    }

    print("DFS Traversal starting from 2:")
    dfs(graph2, 2)
    print("\n")