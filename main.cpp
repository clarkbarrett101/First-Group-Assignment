#include "ProcessControlBlock.h"
#include "ReadyQueue.h"
#include "Scheduler.h"
#include "SystemCall.h"
#include "ContextSwitch.h"
#include "SpinlLock.h"

int main()
{
    Scheduler scheduler;
    SystemCall sysCall(scheduler);
    ContextSwitch contextSwitch;
    SpinLock spinLock();

    sysCall.createProcess(1, 1);
    sysCall.createProcess(2, 2);
    sysCall.createProcess(3, 3);
    sysCall.createProcess(4, 4);
    sysCall.createProcess(5, 5);

    sysCall.terminateProcess(3);
    sysCall.terminateProcess(4);

    scheduler.schedule();

    return 0;
}
