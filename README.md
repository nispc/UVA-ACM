UVA-ACM
=======
|ID|Title|
|--------|----------------|
|[UVA10103](#uva10103-karpovich-blocks)|Karpovich blocks|
|[UVA10340](#all-in-all)|All in All|
|UVA10343|Base64 Decoding|
|UVA10552|?|
|UVA10582|?|
|UVA10666|The Eurocup is Here!|

##UVA10103: Karpovich blocks

###The Problem
From the unit blocks of three kinds one creates a cube N×N×N (1< N<10). Some minutes later all the unit blocks of the same kind with common faces glue together. So three details appeared.

Determine, if there is possible to separate all the details not destroying them.
###The Input
The input will consist of several input blocks. Each input block begins with the integer N, the size of the cube. Then there is an empty line. Then N series of N lines, determined N cube layers. Each line contains N letters (R, G, B), defining the kind of the block. Each layer-series except the last one in the last input block is followed by an empty line. The last input block is followed by <EOF>.
###The Output
For each input block the output line should contain a word "NO" if there is impossible to separate details. In another case it should consist of the kinds of details which can be separated. (R should precede G, G precedes B).

###Sample Input
2

RR
RR

GB
GR

3

BRR
RRR
RBB

BRR
GGG
RGB

BBR
BBR
BBB

###Sample Output

RGB
NO

##All in All
You have devised a new encryption technique which encodes a message by inserting between its characters randomly generated strings in a clever way. Because of pending patent issues we will not discuss in detail how the strings are generated and inserted into the original message. To validate your method, however, it is necessary to write a program that checks if the message is really encoded in the final string.

Given two strings s and t, you have to decide whether s is a subsequence of t, i.e. if you can remove characters from t such that the concatenation of the remaining characters is s.

###Input Specification
The input contains several testcases. Each is specified by two strings s, t of alphanumeric ASCII characters separated by whitespace. Input is terminated by EOF.

###Output Specification
For each test case output, if s is a subsequence of t.

###Sample Input
sequence subsequence

person compression

VERDI vivaVittorioEmanueleReDiItalia

caseDoesMatter CaseDoesMatter

###Sample Output
Yes

No

Yes

No
