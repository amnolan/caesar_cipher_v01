# caesar_cipher
A traditional casear_cipher which allows you to encode or decode messages via the command line.

To compile:

    gcc -o caesar_cipher caesar_cipher.c

To run (*nix systems):

    $ ./caesar_cipher

To run (Windows systems):

    > caesar_cipher

You can encode any message you want by entering a message and then a shift amount.

To decode the same message or any caesar cipher message, you will need to input the encoded message and subtract the number of
places shifted from 26 and use that as your input.

For instance:

    $ ./caesar_cipher 
    Enter message to be encrypted: The quick brown fox, is beggin' for beggin strips
    Enter shift amount (1-25): 17
    Encrypted message: Kyv hlztb sifne wfo, zj svxxze' wfi svxxze jkizgj
    
Great, now how does my partner decrypt this highly encrypted message? With maths of course!
What is 26 - 17 ? That's right it's 11, I mean 8, oops 9!

    $ ./caesar_cipher 
    Enter message to be encrypted: Kyv hlztb sifne wfo, zj svxxze' wfi svxxze jkizgj
    Enter shift amount (1-25): 9
    Encrypted message: The quick brown fox, is beggin' for beggin strips
    
Have fun!
