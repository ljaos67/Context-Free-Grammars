# Context-Free-Grammars
A program that accepts as input a context free grammar followed by a sequence of one or more words. Program reports whether each word is accepted or rejected by the grammar.
1 Input
Your program will read its input from stdin.
The first line will have one integer, n, that tells you how many of the next lines in the input file
describe productions. Capital letters represent variables, lower case letters and single digits (e.g., 0
and 1) represent terminals, and the lower case e represents ǫ.
Each of the the next n lines will represent start with a single variable (i.e., the left hand side of
the production) followed by one or more, but no more than 100, productions. For example, a single
line in the input file that looks like this:
H aHb e
represents these productions: H → aHb | ǫ
Following that there will be a line with a single integer, nwords > 0. That will be followed by
nwords line(s) where each line will have a single word, w. You may assume that w 6= . Here is an
example of an input file:
3
S HT
H aHb e
T cTd e
6
a
b
ab
cd
cabd
abcd
It describes a CFG with five productions; S → HT , H → aHb | ǫ, and T → cT d | ǫ that accepts
the language ajbjckdk for j, k ≥ 0 and concludes with six words; a, b, ab, cd, cadb, and abcd.
2 Output
The output first presents the CFG. Immediately thereafter there must be one line for each of the
words from the input file. Each line should print the input word, w followed by either the word
accepted or rejected to indicate whether w was accepted or rejected by the CFG. Using the
example input above, the output should look exactly like this:
S -> HT
H -> aHb | e
T -> cTd | e
a rejected
b rejected
ab accepted
cd accepted
cabd rejected
abcd accepted
1
3 Additional Note
There are a number of ways in which to implement this programming assignment. Some methods
attempt to build a derivation tree or a derivation path to determine if a given word is in the language.
Those are reasonable approaches, but should you choose to use one of those a strategies, then you
need to be aware of a trap that you must take care to avoid. Consider, for example, the CFG
presented in the previous sections:
S → HT
H → aHb | ǫ
T → cT d | ǫ
Leftmost derivations from that CFG never end: S ⇒ HT ⇒ aHbT ⇒ aaHbbT ⇒ aaaHbbbT ⇒ . . .
To help avoid the trap of a never-ending derivation or a never-ending derivation tree, you may
assume for this assignment that any word can be derived by applying ≤ 30 of the input grammar’s
productions.
