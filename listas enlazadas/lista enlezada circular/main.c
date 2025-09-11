#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

}Node;

//funcion para recorrer lista circular
void travelList(Node* list)
{
    if(list == NULL) //verificar que la lista no sea nula o vacia
    {
        printf("lista vacia");
    }else
    {
        Node* ptr = list->next; //hacer una variable que contenga el puntero next

        while(ptr->next) //si next es verdadero entonces
        {
            printf("puntero actual %d", ptr->data);
            ptr = ptr->next;

            if(ptr == list-> next)
            {
                break;
            }
        }
    }
}

int main()
{
    //struct Node* resul = travelList();

    return 0;

}
