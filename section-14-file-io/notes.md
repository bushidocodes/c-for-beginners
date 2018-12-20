## Reading and Writing Files

stdio has the functions for reading and writing files

C and UNIX treat a file as continuous sequence of bytes

A file had a beginning, end, and a current position. It is terminated by an EOF marker at the end.

There are two types of files:

- text files are encoded using a character set (End of Line sequences differ between UNIX \n and Windows \r\n)
- binary files are a series of bytes written to a file just as they appear in memory

Streams are uniform interfaces for any kind of I/O. This could be to a file or it could be to a terminal.

C opens three streams up automatically:

- standard input - keyboard by default
  - getchar(), scanf()
- standard output - screen by default
  - putchar(), puts(), printf()
- standard error - screen by default
  - distinct location to send errors

Streams can be redirected using > and < characters

Things to keep in mind:

- Files have a name
- Filesystem Paths have different slashes

You associate a file pointer with a file located in the file system.
We then indirectly manipulate the file via the file pointer
We can reuse the file pointer to point to a different file in the file system

A file pointer points to a struct of type FILE, which contains permissions, the pointer to a file buffer, and a pointer storing the current position in the file

If you want to have multiple files open at the same time, you need a pointer open for each.

To Open a file,
fopen() associates the file pointer with a file on disk. You pass in a file name and a file mode

If you don't provide a path as part of the file name, the file is assumed to be in the current directory. Otherwise, you can use relative or absolute paths

File Modes:

- w = write a new file, discarding current contents
- w+ = write a new file, trucating to zero length if it exists and creating it if it doesn't???
- a = append to a file that exists
- a+ = append to an existing file, creating it if it doesn't exist
- r = read the content from a file
- r+ = open a file that already exists for reading and writing

```c
fopen("myFile.text", "r")
```

## Renaming a File

rename(old file name, new file name)

The operation fails if the file is open when this is run

## Close a file

fclose(pFile)

Takes a file pointer

Returns 0 if successfully closed and EOF (typically -1) if it failed.

## Delete a file

remove("myfile.txt");

## Read a character from a file

We need to open with r or r+ file mode.

`fgetc(pfile)` gets a character

Take a file pointer and returns a character code as an int.
Returns -1 (EOF) to signify EOF

getc is similar to fgetc but less safe.

`rewind(pfile)` returns the pointer to the start of the file

## Read a string from a file

`char *fgets(char *str, int nchars, FILE *stream)` will load `nchars` number of characters from `*stream` into the character buffer `*str`

## Read formatted Input from a file

`int fscanf(FILE *stream, const char *format, ...)`

has a delimiter or special format. The format is like the printf specifiers

## Write a character to a file

`int fputc(int ch, FILE *pfile)`
Writes a single character to the current location in memory.

putc is functionally equivalent, but can also be implemented as a macro.

## Write a string to a file

## File positioning

Figuring out where you are in a file

`long ftell(FILE *pfile)` - returns the offset bytes from the beginning of the open file

`long fgetpos(FILE *pfile, fpos_t *position)` takes a data type that records every position in a file.
Writes the positiion to position. This can later be used with `fsetpos`

```c
fpos_t here;
fgetpos(pfile, &here);
```

Moving to a given point in a file

```

```

Setting a position

`fseek` and `ftell` are used together

`fseek(FILE *pfile, long offset, int origin)`

In the file pfile, move offset number of bytes from the origin

the origin can be:

- SEEK_SET: the beginning of the file
- SEEK_CUR: the current position in the file
- SEEK_END: the end of the fiel

But for text files, the third argument can only be SEEK_SET, so we need to use ftell and then increment / decrement the value to come up with the offset value we want.

`fsetpos(FILE *pfile, const fpos_t *position)`

fsetpos and fgetpos are used together
