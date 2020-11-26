![#Cisfun](https://www.flaticon.com/svg/static/icons/svg/2092/2092440.svg)
#  Our own Simple Shell

This repository contains our own simple version of the `shell`, that is a command interpreter to read, write, execute files or programs, using command in a terminal, for more context read [linux command](https://linuxcommand.org/lc3_lts0010.php)

##  Example to use this simple_shell

Iteractive mode:
 - Execute the `simple_shell` file, then you will be inside the minishell

       $ ./simple_shell
       ¥ minishell ¶:
       ¥ minishell ¶: ls
        built-in.c header.h ctrl_c.c minishell.c splits_string.c
        exec.c sfree.c string_directory.c 
       ¥ minishell ¶: /bin/ls
        built-in.c header.h ctrl_c.c minishell.c splits_string.c
        exec.c sfree.c string_directory.c 

Non/interactive
 - Write `echo` and between doble quotes `" "` put the command to execute and after the pipeline `|` execute the `simple_shell` file

    `$ echo "ls" | ./simple_shell` 
   ` ¥ minishell ¶:`
`built-in.c header.h ctrl_c.c minishell.c splits_string.c
exec.c sfree.c string_directory.c`

# Flowchart
![enter image description here](https://gm1.ggpht.com/ZqRcx-SadNXQPKPp-S-xXGwpnCyiw0KTKmQC_QXbDETbvjj8MgPcFhULb5bcB8h9Xrrc02GvUY-FNBEbjQEKb2D5JhpiE-KxYJDvT9Q2YJYn1YJped0NZ99ornuuEcTSs20QF642hVp_lKksxg0ynhDHlBDwn8W8vz85MIZ-aDhS1POcvpBCvbpPvwAjTA8hzuMxVQrL_3S8Gpw0NiQW_sbBqGrlSYAvKI-O3eq_elshxhcJK6FJwiE0ByoLz-T_yspSHCd0Z05amIvNrxfechPhbgmLmM5gJfp7AaS8uuc7jgleNlGs_l0sezMZKVLrL2nxWWAj-8Qd4_mmSRt_NPgBzL847APHVZuGqmTBc-Y7EPGxHpoE90fVpSvYoGnYvbJZXlFlYwvWvnLqM11zIwxHkZdaGB3Y9DyUaqLUBN3nSFykxBy2iTPq_g3hTx0xbn2vT5izZaO_4w0cz_VYm_9H7zwEfZiNPCKq_yPCnr7nl-NqGuJiI8TNhNc_kL_nB7xbJqGQbBVlGTtggMBXytexZRNZ49vhr2IWB-gmlWVExdmkX1Q8h1l654vBncj_JvWmobUCW2z3-5PHBLUjHTDfPmGpBi9npS1k5HbmymzCTrXGUF0YeucMbDgmYz6voBtPIP77t15GU7EkysBs-PR6w39zuUVJgMJcr_BwFJZAoBpNdAvCWycMX9W6E1GJfZoN95b-dQPIk24fsvd3Ws2tBZZNzeQkBp4zpYZiWI2KyE_7uNP7UkA5wT4Di_XGVZ7S8g=s0-l75-ft-l75-ft)


 

# Files

 - **README** : It contains all the information about the project and
   all its content. 
 - **header.h** : It is the header file you can find all the libraries that we use to create this program, also all the prototypes of the functions that we create to navigate and run the `shell`
 - **shell.c** : This is the main program to start the infinity loop of the simple_shell, it contains the SIGNAL to campture the `ctrl + c`, it evaluate if the entry command is a built-in, a program or just a non existent value.
 - **strfunctions.c** : Contains the function to create copies of a string, copare it or divided by tokens.
 - **advstr.c** : Have functions to divide an entry string or the PATH depends of the entry argument.
 - **executable.c** : In this file you can find the executable fucntions from the shell like fork process, print the enviroment or concatenate the PATH.
 -  **extra.c** : There are the final functions like convert a integers into a string, handle error in the prompt and a function to free memory from a double pointer string.
 - **man_1_simple_shell.1.gz** : This is the manual that contains the synopsis, description, return, and more  specifiers of the simple_shell that we create.


##  To compile

    $ gcc -Wall -Werror -Wextra -pedantic header.h *.c -o minishell

## For check memory

    valgrind --leak-check=full --show-leak-kinds=all ./minishell

##  Requirements

 - Ubuntu 16.04.7 LTS
 - Functions and files will be compiled with gcc 4.8.4
   with flags 
   
 - All the files must have [Betty](https://github.com/holbertonschool/Betty/wiki) style


## Authors
 
  - **Diego Ahumada** : [@XvariaDev](https://twitter.com/XvariaDev)
 - **Juan Carlos Hernandez** : [@luigi_jong](https://twitter.com/luigi_jong)

##  info

 - 24/11/2020 
 - Holberton school Colombia 
 - Cohort #13 BOG0920
