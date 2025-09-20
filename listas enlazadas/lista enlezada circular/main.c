#include <stdio.h>
#include <stdlib.h>

//estructura del nodo con punteros para siguiente y anterior
typedef struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

}Node;

//estuctura de lista para añadir nodos al inicio y al final
typedef struct List
{
    struct Node* head; //cabeza
    struct Node* slow; //cola
}List;

//añadir nuevo nodo
struct Node* crearNodo(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("error in memory allocator");
        exit(1);
    }

    newNode -> data = value;
    newNode -> next = NULL;
    newNode -> prev = NULL;

    return newNode;
}

//añadir al inicio
void headNode(List* list, int value)
{
    struct Node* newNode = crearNodo(value); //primero se crea un nodo utilizando la funcion anterior

    if(list->head == NULL) //si el puntero al inicio esta vacio entonces
    {
        list->head = newNode; //apunta al nodo cread00
        newNode->next = newNode; //la direccipon del siguiente nodo se apunta a si mismo por ser circular
    }else{
        Node* last = list->head;
        while(last->next != list->head)
        {
            last = last->next;
        }
        newNode->next = list->head;
        last->next = newNode;
        list->head = newNode;
    }

}


//funcion para recorrer lista circular
void travelList(List* list)
{
    Node* actual = list->head; //toma el valor del primer nodo
    Node* next; //variable para el siguiente nodo

    if(list->head == NULL) //verificar que la lista no sea nula o vacia
    {
        printf("lista vacia");
    }else
    {
        Node* last = list->head; //hacer una variable que contenga el puntero next

        while(last->next) //si next es verdadero entonces
        {
            printf("puntero actual %d", last->data);
            last = last->next;

            if(last == list-> head)
            {
                break;
            }
        }
        last->next = NULL; //romper el enlace circular para no hacer un bucle infinito

        //liberar memoria
        actual = list->head;
        while(actual != NULL)
        {
            next = actual->next;
            free(actual); //liberar el nodo desde la cabeza hacia atras
            actual = next;
        }
        list->head = NULL;
    }
}

void main()
{
    List list = {NULL}; // Inicializar la lista

    // Añadir nodos al inicio
    headNode(&list, 10);

    // Recorrer la lista
    printf("Lista circular: ");
    travelList(&list);


}
