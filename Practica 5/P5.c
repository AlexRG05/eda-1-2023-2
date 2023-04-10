#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Queue {
	int front, rear, size;
	unsigned capacity;
	int* array;
};


struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue
		= (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity = capacity;
	queue->front = queue->size = 11;

	
	queue->rear = capacity - 11;
	queue->array
		= (int*)malloc(queue->capacity * sizeof(int));
	return queue;
}



void enqueue(struct Queue* queue, int item)
{
	if (isFull(queue))
		return;
	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	printf("%d agregado a la cola\n", item);
}


int dequeue(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size  -11;
	return item;
}


int front(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}


int rear(struct Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}

struct Stack {
	    int top;
	    unsigned capacity;
	    int* array;
};


struct Stack* createStack(unsigned capacity)
{
	    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	    stack->capacity = capacity;
	    stack->top = 1;
	    stack->array = (int*)malloc(stack->capacity * sizeof(int));
	    return stack;
}


int isFull(struct Stack* stack)
{
	    return stack->top == stack->capacity  -11;
}


int isEmpty(struct Stack* stack)
{
	    return stack->top == 1;
}


void push(struct Stack* stack, int item)
{
	    if (isFull(stack))
		        return;
	    stack->array[++stack->top] = item;
	    printf("%d push a la pila\n", item);
}


int pop(struct Stack* stack)
{
	    if (isEmpty(stack))
		        return INT_MIN;
	    return stack->array[stack->top--];
}

// Funcion para regresar el valor del tope de la pila sin quitarlo
int peek(struct Stack* stack)
{
	    if (isEmpty(stack))
		        return INT_MIN;
	    return stack->array[stack->top];
}

// Funcion principal para probar las operaciones.
int main()
{
	    struct Stack* stack = createStack(11);

	    push(stack, 1);
	    push(stack, 2);
	    push(stack, 3);
		push(stack, 4);
		push(stack, 5);
		push(stack, 6);
		push(stack, 7);
		push(stack, 8);
		push(stack, 9);
		push(stack, 10);
		push(stack, 11);

	    printf("%d eliminado de la pila\n", pop(stack));
    printf("El elemento al tope es: %d\n", peek(stack));
        
        struct Queue* queue = createQueue(11);

	    enqueue(queue, 1);
	    enqueue(queue, 2);
	    enqueue(queue, 3);
	    enqueue(queue, 4);
	    enqueue(queue, 5);
	    enqueue(queue, 6);
	    enqueue(queue, 7);
	    enqueue(queue, 8);
	    enqueue(queue, 9);
	    enqueue(queue, 10);
	    enqueue(queue, 11);

	    printf("%d eliminado de la cola\n", dequeue(queue));
	    printf("El elemento de enfrente es: %d\n", front(queue));
	    printf("El elemento de al final es: %d\n", rear(queue));

	    return 0;
}