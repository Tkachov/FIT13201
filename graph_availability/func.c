#define N 100
char visited[N] = {0};

/*
 struct graph {
  struct array* edges[N];
 };
*/

void dfs(int start_vertex, struct graph* G) {
 int i;
 visited[start_vertex]=1;
 for(i=0; i<array_length(G->edges[start_vertex]); ++i)
  if(!visited[array_get(G->edges[start_vertex], i)])
   dfs(array_get(G->edges[start_vertex], i), G);
}

//using:
// - run dfs(<vertex>)
// - ???
// - PROFIT! (visited[] contains 1 if vertex is available)
