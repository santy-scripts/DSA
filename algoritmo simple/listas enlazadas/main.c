#include <stdio.h>
#include <stdlib.h>

//definicion de la estructura del nodo
struct Node
{
    int data; // Valor almacenado en el nodo 
    struct Node* next; //puntero al siguiente nodo
};

//operacion basica para crear un nodo
struct Node* createNode(int value)
{

    //asignar memoria para crear un nuevo nodo
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {   
        printf("Memory allocator failed");
        exit(1);
    }

    newNode->data = value; //asignar el valor (value) al campo data de la estructura Node
    newNode->next = NULL; //asignar valor null al puntero del siguiente nodo

    //retorna el puntero del nuevo nodo creado
    return newNode;

};

