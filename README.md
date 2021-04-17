# Longest Common Strand of Bytes  
The main goal of this program is to find the longest strand of bytes that is identical between two or more files among a large number of binary files (files sample.*).

## Table of contents
* [General Information](#general-information) 
* [File Description](#file-description)
* [Output](#output)
* [Result](#result)
* [Contact](#contact)

## General Information
C++

Longest common substring

Valgrind prevent memory leak

## File Description
main.cpp is the main driver. 

sample.* are the datasets to be analyzed. 

## Output
Reading 17408 characters from sample.1 ...  Successfully reading all characters.
Reading 30720 characters from sample.2 ...  Successfully reading all characters.
Reading 45056 characters from sample.3 ...  Successfully reading all characters.
Reading 30720 characters from sample.4 ...  Successfully reading all characters.
Reading 23552 characters from sample.5 ...  Successfully reading all characters.
Reading 27648 characters from sample.6 ...  Successfully reading all characters.
Reading 21504 characters from sample.7 ...  Successfully reading all characters.
Reading 20480 characters from sample.8 ...  Successfully reading all characters.
Reading 13312 characters from sample.9 ...  Successfully reading all characters.
Reading 14336 characters from sample.10 ...  Successfully reading all characters.

Length of longest common substring between sample.1 and sample.2 is: 8192
Offset = 9216 in sample.1
Offset = 14336 in sample.2

Length of longest common substring between sample.1 and sample.3 is: 8192
Offset = 9216 in sample.1
Offset = 28672 in sample.3

Length of longest common substring between sample.1 and sample.4 is: 8192
Offset = 8192 in sample.1
Offset = 6144 in sample.4

Length of longest common substring between sample.1 and sample.5 is: 8192
Offset = 8192 in sample.1
Offset = 8192 in sample.5

Length of longest common substring between sample.1 and sample.6 is: 7168
Offset = 9216 in sample.1
Offset = 6144 in sample.6

Length of longest common substring between sample.1 and sample.7 is: 8192
Offset = 9216 in sample.1
Offset = 6144 in sample.7

Length of longest common substring between sample.1 and sample.8 is: 8192
Offset = 8192 in sample.1
Offset = 1024 in sample.8

Length of longest common substring between sample.1 and sample.9 is: 8192
Offset = 8192 in sample.1
Offset = 1024 in sample.9

Length of longest common substring between sample.1 and sample.10 is: 5120
Offset = 3072 in sample.1
Offset = 5120 in sample.10

Length of longest common substring between sample.2 and sample.3 is: 27648
Offset = 3072 in sample.2
Offset = 17408 in sample.3

Length of longest common substring between sample.2 and sample.4 is: 16384
Offset = 14336 in sample.2
Offset = 14336 in sample.4

Length of longest common substring between sample.2 and sample.5 is: 7168
Offset = 14336 in sample.2
Offset = 9216 in sample.5

Length of longest common substring between sample.2 and sample.6 is: 7168
Offset = 14336 in sample.2
Offset = 6144 in sample.6

Length of longest common substring between sample.2 and sample.7 is: 8192
Offset = 14336 in sample.2
Offset = 6144 in sample.7

Length of longest common substring between sample.2 and sample.8 is: 7168
Offset = 14336 in sample.2
Offset = 2048 in sample.8

Length of longest common substring between sample.2 and sample.9 is: 7168
Offset = 14336 in sample.2
Offset = 2048 in sample.9

Length of longest common substring between sample.2 and sample.10 is: 3072
Offset = 0 in sample.2
Offset = 1024 in sample.10

Length of longest common substring between sample.3 and sample.4 is: 16384
Offset = 28672 in sample.3
Offset = 14336 in sample.4

Length of longest common substring between sample.3 and sample.5 is: 7168
Offset = 28672 in sample.3
Offset = 9216 in sample.5

Length of longest common substring between sample.3 and sample.6 is: 7168
Offset = 28672 in sample.3
Offset = 6144 in sample.6

Length of longest common substring between sample.3 and sample.7 is: 8192
Offset = 28672 in sample.3
Offset = 6144 in sample.7

Length of longest common substring between sample.3 and sample.8 is: 7168
Offset = 28672 in sample.3
Offset = 2048 in sample.8

Length of longest common substring between sample.3 and sample.9 is: 7168
Offset = 28672 in sample.3
Offset = 2048 in sample.9

Length of longest common substring between sample.3 and sample.10 is: 3072
Offset = 0 in sample.3
Offset = 1024 in sample.10

Length of longest common substring between sample.4 and sample.5 is: 8192
Offset = 6144 in sample.4
Offset = 8192 in sample.5

Length of longest common substring between sample.4 and sample.6 is: 14336
Offset = 7168 in sample.4
Offset = 6144 in sample.6

Length of longest common substring between sample.4 and sample.7 is: 8192
Offset = 14336 in sample.4
Offset = 6144 in sample.7

Length of longest common substring between sample.4 and sample.8 is: 15360
Offset = 6144 in sample.4
Offset = 1024 in sample.8

Length of longest common substring between sample.4 and sample.9 is: 8192
Offset = 6144 in sample.4
Offset = 1024 in sample.9

Length of longest common substring between sample.4 and sample.10 is: 3072
Offset = 0 in sample.4
Offset = 1024 in sample.10

Length of longest common substring between sample.5 and sample.6 is: 14336
Offset = 9216 in sample.5
Offset = 13312 in sample.6

Length of longest common substring between sample.5 and sample.7 is: 7168
Offset = 9216 in sample.5
Offset = 6144 in sample.7

Length of longest common substring between sample.5 and sample.8 is: 8192
Offset = 8192 in sample.5
Offset = 1024 in sample.8

Length of longest common substring between sample.5 and sample.9 is: 8192
Offset = 8192 in sample.5
Offset = 1024 in sample.9

Length of longest common substring between sample.5 and sample.10 is: 3072
Offset = 0 in sample.5
Offset = 1024 in sample.10

Length of longest common substring between sample.6 and sample.7 is: 13312
Offset = 0 in sample.6
Offset = 0 in sample.7

Length of longest common substring between sample.6 and sample.8 is: 14336
Offset = 6144 in sample.6
Offset = 2048 in sample.8

Length of longest common substring between sample.6 and sample.9 is: 7168
Offset = 6144 in sample.6
Offset = 2048 in sample.9

Length of longest common substring between sample.6 and sample.10 is: 3072
Offset = 0 in sample.6
Offset = 1024 in sample.10

Length of longest common substring between sample.7 and sample.8 is: 7168
Offset = 6144 in sample.7
Offset = 2048 in sample.8

Length of longest common substring between sample.7 and sample.9 is: 7168
Offset = 6144 in sample.7
Offset = 2048 in sample.9

Length of longest common substring between sample.7 and sample.10 is: 3072
Offset = 0 in sample.7
Offset = 1024 in sample.10

Length of longest common substring between sample.8 and sample.9 is: 11264
Offset = 9216 in sample.8
Offset = 2048 in sample.9

Length of longest common substring between sample.8 and sample.10 is: 4096
Offset = 16384 in sample.8
Offset = 1024 in sample.10

Length of longest common substring between sample.9 and sample.10 is: 4096
Offset = 9216 in sample.9
Offset = 1024 in sample.10

## Result
1. The length of the longest strand of bytes is 27648
2. This strand is identical between sample.2 and sample.3
3. The corresponding offsets are 3072 and 17408
```
## Contact
Created by Buyun Liang [liang664@umn.edu] (https://www.linkedin.com/in/buyun-liang/) - feel free to contact me if you have any questions!
