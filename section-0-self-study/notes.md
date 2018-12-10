Native Americans used a Base-8 number system?

Sign and Magnitude Representation = +/- is the first bit, providing a sign

2s Complement - Most Significant Bit is always treated as a negative value.

Encoding

Text is encoded using character sets. ASCII, EBCDIC, ASCII

ASCII is basically evolved from the old teletype standard, so it inlcudes teletype control characters like \r \t \n. It is only 7 bit and includes 128 characters

There is also an extended ASCII that uses 8 bits to add an additional 128 characters.

Some different languages used differing extended ASCII character sets, which made it difficult to send messages across computers

This was solved with UNICODE to make it easier to exchange text across the Internet.

EBCDIC is 8-bit and it uses binary coded decimal.

UTF-8 allowed more characters by using variable width

Unicode extended this to 16-bit and 32-bit

Parts of a processor

A processor has a clock speed, which is the number of times that a processor "ticks" per second. A processor can do tasks that might take several "ticks" to complete.

- CU (Control Unit) decides which instructions the CPU should execute next and fetches them from memory. The instructions might need to be decoded. It then sends signals to other parts of the processors containing bits of work to do. It synchronizes the work performed by the different parts of the processor using the clock.
- ALU (Arithmetic Logic Unit) - Brains of the CPU. It does arithmatic and logic (comparing values using various operators like >, <, etc.). It acts as the gateway between the CPU and other parts of the computer, meaning that all I/O goes the to ALU first and queues until the CU decideds what to do with the I/O operations
- MU (Memory Unit) Also known as IAS (Immediate Access Store) or Main Memory or Primary Memory. Holds/stores all instructions and data that the rest of the CPU is going to use. Only part of this might be on the chip. Additional DRAMs are off the chip and connected via a motherboard.

Registers are small memory spaces in the processor that hold single values. They are either special registers or general registers.

The Control Unit has a register called the Program Counter (PC), which keeps track of the memory address of the next instruction to be executed. This basically acts as an ordered to do list for the Control Unit. It also keeps a running count of the number of instructions that have been executed.

The Memory Address Register stores the address of the next instruction to be executed. Addresses are stored so the CU knows where to look. The CU writes to and reads from teh MAR

The Memory Data Register is essentially a scratchpad that the processor uses to copy instructions from main memory.

The Current Instruction Register is copies the current instruction from the MDR and represents the current instruction being executed. It splits the instruction into the operation to be performed and the data that the operation is to be performed against.

The Accumulator is a register in the ALU that stores any value that is needed as part of an arithmetic operation.

Little Man Computer Simulation...

Von Neumann Computer Architecture

Buses - A bus is a pathway used to transfer data. This might be general purpose or reserved for a particular type of data transfer

Data Bus is the bus between MDR and the memory unit.

Carries data from one register to another register bi-directionally.

Address Bus is between the PC and the MAR. Carries the location address to which data is going. This is unidirectional and is only inside the CPU.

The Control Bus is a set of buses that allows the control unit to talk to the different parts of the processor.

Primary Memory. Different types of memory have different capacities, speed, and are either volitile or persistant. Tiered storage... Virtual Storage is extended the adressable memory from the RAM to the Hard Drive.

ROM includes the bootstrap program to load up an operating system.

Persistent Storage

- Magnetic, Optical, Solid State

DVDs have several layers...

Programs and "Top Down Modular Design" - Represented using Structure Diagrams

Decompose a large problem into subtasks over and over until the subtask is small enough to encode as an algorithm. The various subtasks are modules and the interfaces between the modules can be defined prior to implementation.

This can even be decomposed into distributed system or different languages. Modules have to be "linked" together.

gRPC or RPC calls. CORBA, etc.

Algortithms are often depicted using either flowcharts or pseudocode

Subroutines.

Subroutines are blocks of code. There are two types: Procedures and Functions....
