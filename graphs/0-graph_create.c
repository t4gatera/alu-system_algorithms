#include<stdlib.h>
#include<stdio.h>
#include"graphs.h"

struct mygraph{
int nodes;
char vertex;
};

graph_t *create_graph(void){
graph_t *graph;
graph = malloc(sizeof(*graph));
return graph;
}

int main(void){
graph_t *graph;
graph = (graph_t*) create_graph();
if(!graph){
fprintf(stderr, "Failed to create graph\n");
return (EXIT_FAILURE);
}
printf("Successfully created a graph\n");
return (EXIT_SUCCESS);
}
