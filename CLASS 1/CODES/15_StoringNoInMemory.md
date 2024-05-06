# Let say we want to store :

## Storing Positive value:

- Here are the process that is followed to store it.
- For int a = 5;
- int is of 4 byte(architectecture dependent) = (4 * 8) bits = 32 bits.

1. So, 5 is converted into 32 bit binary:
   1. 00000000 00000000 00000000 00000101
2. when need to display it takes that 32 bit and notice the type which is int by default it is signed and the first digit is 0 which represent positive value, so it will just display 5 as output.

## Storing Negative value:

- Here are the process that is followed to store it.
- For int a = -5;
- int is of 4 byte(architectecture dependent) = 4*8 bits = 32 bits.

1. So, first "-" signed is ignored, then 5 is converted into binary:

   1. 00000000 00000000 00000000 00000101
   2. Then we take 2's complement of it and store it.

      1. First let take 1's complement by reversing all bits :
         11111111 11111111 11111111 11111010
         (Note the first 1 from left hand side here represent the negative value)

      2. Then take 2's complement by adding 1 to 1's complement:
         11111111 11111111 11111111 11111011 (Now it is stored)

      3. To Print it back just take 2's complement of stored value and add negative sign to it. because the int type is signed by default unless explicitly specify as unsigned, and 1 at starting represent a negative number followed by integer default data type which is unsigned.

If we try to print :
unsigned int = -112;
Here's what happen behind the hood:

1. negative sign is ignored and converted to binary and taking 2's complement storation is fulfilled.
   1. binary : 00000000 00000000 00000000 01110000
   2. 1's : 11111111 11111111 11111111 10001111
   3. 2's : 11111111 11111111 11111111 10010000
2. Now, to display it back it's not going to change again into 2's because it look to int type and it is unsigned so it just change stored binary to decimal and display it.
   11111111 11111111 11111111 10010000 is equal to : 4,294,967,216.


