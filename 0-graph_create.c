#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"graphs.h"

struct mygraph{
int nodes;
bool **edge;
};

graph_t *create_graph(){
graph_t *graph = (graph_t *) malloc(sizeof(*graph));
return graph;
}

int main(){
graph_t *graph;
graph = create_graph();
if(!graph){
fprintf(stderr, "Failed to create graph\n");
return (EXIT_FAILURE);
}

printf("Successfully created a graph\n");
return (EXIT_SUCCESS);
free(graph);
}
