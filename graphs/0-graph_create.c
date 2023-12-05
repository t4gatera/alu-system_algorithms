#include<stdlib.h>
#include<stdio.h>
#include "graphs.h"

struct mygraph{
int nodes;
char vertex;
};

graph_t *graph_create(){
graph_t *graph = malloc(sizeof(graph_t));
return graph;
}

int main(void)
{
    graph_t *graph;

    graph = graph_create();
    if (!graph)
    {
        fprintf(stderr, "Failed to create graph\n");
        return (EXIT_FAILURE);
    }

    printf("Successfully created graph\n");

    return (EXIT_SUCCESS);
}


