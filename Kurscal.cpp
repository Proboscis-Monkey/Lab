#include<bits/stdc++.h>
using namespace std;

/**
 * u = node1
 * v = node 2
 * w = weight
*/
class Edge {
	public:
    int u, v, w;
};

bool Comparator(Edge& a, Edge& b)
{
    return a.w < b.w;
}

void PrintAllEdges(vector<Edge>& edges)
{
    int n = edges.size();
    cout << "Node1\tNode2\tWeight\n";
    for (int i = 0; i < n; i++) {
        cout << edges[i].u << "\t" << edges[i].v << "\t" << edges[i].w << '\n';
    }
}
int32_t main()
{
    int n; 
    cin >> n;
    vector<Edge> edges(n);
    for (auto& it : edges) {
        cin >> it.u >> it.v >> it.w; 
    }
    // Sorted in descendend order
    sort(edges.begin(), edges.end(), Comparator);
    PrintAllEdges(edges);
    return 0;
}
