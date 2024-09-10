// Author: Joleen Chong
// Purpose: The main program for the scheduler. This will run when the CubeSAT powers up.

#include <iostream>
#include <thread>
using namespace std;

void telemetryThread(int foo)
{
    cout << foo << endl;
}

void communicationsThread(int fee)
{
    cout << fee << endl;
}

int main()
{
    cout << "Hello World!" << endl;
    std::thread thread_tele(telemetryThread, 1);
    std::thread thread_comm(communicationsThread, 2);
    
    return 0;
}