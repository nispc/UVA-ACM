UVA-ACM
=======
|ID|Title|
|--------|----------------|
|<a name="UVA10103: Karpovich blocks"></a>UVA10103|Karpovich blocks|
|UVA10340|All in All|
|UVA10343|Base64 Decoding|
|UVA10552|?|
|UVA10582|?|
|UVA10666|The Eurocup is Here!|

#UVA10103: Karpovich blocks

##The Problem
From the unit blocks of three kinds one creates a cube N×N×N (1< N<10). Some minutes later all the unit blocks of the same kind with common faces glue together. So three details appeared.

Determine, if there is possible to separate all the details not destroying them.
##The Input
The input will consist of several input blocks. Each input block begins with the integer N, the size of the cube. Then there is an empty line. Then N series of N lines, determined N cube layers. Each line contains N letters (R, G, B), defining the kind of the block. Each layer-series except the last one in the last input block is followed by an empty line. The last input block is followed by <EOF>.
##The Output
For each input block the output line should contain a word "NO" if there is impossible to separate details. In another case it should consist of the kinds of details which can be separated. (R should precede G, G precedes B).
Sample Input

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

Sample Output

RGB
NO
