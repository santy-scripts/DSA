#include <stdio.h>
#include <stdlib.h>

//definicion de la estructura del nodo
typedef struct Node
{
    int data; // Valor almacenado en el nodo 
    struct Node* next; //puntero al siguiente nodo
    struct Node* prev; //puntero al anterior nodo
}Node;

typedef struct Lista
{
    Node* head; //puntero al primero nodo
}Lista; //apodo de la estructura


//operacion basica para crear un nodo
struct Node* createNode(int value)
{

    //asignar memoria para crear un nuevo nodo
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) //comprobación para hacer que asegurarse de que el nodo no sea nulo y no haya errores
    {   
        printf("Memory allocator failed");
        exit(1);
    }

    newNode->data = value; //asignar el valor (value) al campo data de la estructura Node
    newNode->next = NULL; //asignar valor null al puntero del siguiente nodo
    newNode->prev = NULL; //iniciar el puntero prev en nulo


    //retorna el puntero del nuevo nodo creado
    return newNode;

};

//inserción de nodo al inicio
struct Node* headNode(Lista* list) //se le pasa como parametro tambien el struct de lista
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //de nuevo se crea un espacio en memoria para crear el nodo

    if(list->head == newNode) //si el puntero head es el primer nodo entonces
    {
        newNode->next = NULL; //iniciar en nulo
        newNode->prev = NULL; //iniciar en nulo
    }else{ //si no es el primer nodo
        newNode->next = list->head; 
        list->head->prev = newNode;
    } 


    return newNode;
}


int main()
{
    struct Node* node = createNode(42);

    // Verificar que el nodo se creó correctamente imprimiendo su valor
    printf("Nodo creado con valor: %d\n", node->data);

    // Liberar la memoria asignada al nodo
    free(node);

    return 0;
}


