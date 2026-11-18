#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;

void insertSample(int value)
{
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}
void printSamples()
 {
    if (count == 0)
        {
        printf("Buffer is empty.\n");
        return;
        }

    int oldest;
    if (count < BUFFER_SIZE)
        {
        oldest = 0;
        }
    else
        {
        oldest = head;
        }

    printf("Stored samples (oldest -> newest): ");
    for (int i = 0; i < count; i++)
        {
        int index = (oldest + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
        }
    printf("\n");
}

int main()
 {
    int value;
    printf("Enter sensor values (-1 to stop):\n");
    while (1)
        {
        scanf("%d", &value);
        if (value == -1) {
            break;
        }
        insertSample(value);
        printSamples();
        }

    return 0;
}
