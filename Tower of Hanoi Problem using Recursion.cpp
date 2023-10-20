#include <iostream>
using namespace std;
//implementing Tower of hanoi function
void tower_of_hanoi(int n, char Source, char Auxillary, char Destination)
{
    if (n == 1) {
        cout << "Move Disk " << n << " from " << Source << " to " << Destination << endl;
        return;
    }

   tower_of_hanoi(n - 1, Source, Destination, Auxillary);
    cout << "Move Disk " << n << " from " << Source << " to " << Destination << endl;
   tower_of_hanoi(n - 1, Auxillary, Source, Destination);
}

//main program
int main()
{
    int n;

    cout << "Enter no. of disks:";
    cin >> n;
    //calling the Tower of hanoi
   tower_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}
