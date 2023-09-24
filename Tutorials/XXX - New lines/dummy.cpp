/*
    Endl flushed immediately 
    New line buffers

    Both serve the same purpose, putting a new line. The only difference is that endl 
    causes flushing of the output buffer every time it is called where as ‘\n’ does not.

    Anything to be output is first queued into an output buffer and written to the device 
    (hard disk, monitor etc…) when the queue is full. Of course, this is to ensure speed 
    of execution as the access to the external device is less frequent.

    If you are in a situation where you have to avoid buffering, you can use std::endl 
    instead of ‘\n’. An example of the above situation is when you are using old style 
    debugging using multiple cout statements between code lines  to see where exactly a 
    crash occurs.
*/