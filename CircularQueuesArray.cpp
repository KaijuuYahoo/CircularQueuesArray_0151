#include<iostream>
#include<string>
using namespace std;

class Queues
{
private:
    static const int max = 5;
    int FRONT, REAR;
    int queue_array[5];
public:
        Queues(){
        FRONT = -1;
        REAR = -1;
    };
        void insert(){
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        //1. cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max-1)||(FRONT == REAR+1))
        {
        cout << "Queue Overflow \n";//1a

        }
        
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
