/* NAME - Vikas Jayavarapu
   PRN - 24070123166
   CLASS - ENTC - B3 */
   
#include <iostream>
using namespace std;

#define SIZE 5
class Queue{
    int arr[SIZE];
    int front,rear;
    
public:
    Queue(){
        front = -1;
        rear = -1;
    }
    void enqueue(int value){
        if(rear==SIZE-1){
            cout << "Queue Overflow!" << endl;
            return;
        }
        if(front == -1)front = 0;
        arr[++rear] = value;
        cout << value << " Inserted into queue."<<endl << endl;
    }
    
    void dequeue(){
        if(front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front] << " Removed from queue." << endl<< endl;
        front++;
    }
    void display(){
        if(front==-1 || front > rear){
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements:";
        for(int i=front;i<=rear;i++){
            cout << arr[i] << " ";
        }
        cout << endl<<endl;
    }
};
int main(){
    Queue q;
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    q.dequeue();
    q.display();
    
    q.enqueue(40);
    q.display();
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.display();
    
    return 0;
}





/* OUTPUT 
10 Inserted into queue.

20 Inserted into queue.

30 Inserted into queue.

Queue elements:10 20 30 

10 Removed from queue.

Queue elements:20 30 

40 Inserted into queue.

Queue elements:20 30 40 

50 Inserted into queue.

Queue Overflow!
Queue Overflow!
Queue elements:20 30 40 50 
*/
