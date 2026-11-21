# cis165-lab10
Name: Kamryn Davis

Course section: CIS-165-W099
# Step-by-Step Process
  	lottery.cpp 
    (1) Set NUM to 5 outside the main 
  	(2) In the main, declare the player array, winningDigits array, and matches
  	(3) Create the random-number generator, then use a loop with winningDigits equal to rand() % 10
    (4) Ask the user for five digits and store each one in the player using a loop 
    (5) In a loop, compare each digit in player[i] with winningDigits[i] 
    (6) Each time both of them match, add 1 to _matches_ 
	(7) Display the winning digits, player's digits, and matches 
	

# Test Table 
Restored it back to random generation, even though the test table also shows fixed winning arrays. Ran it again after restoring it.

| Value Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- |  --- |
| Fixed winning [7,4,9,1,3]; player [4,2,9,7,3]  | 2 matches | 2 matches | Match |
| Same fixed winning array; player [7,4,9,1,3] | 5 matches | 5 matches | Match | 
| Same fixed winning array; player [0,0,0,0,0] | 0 matches | 0 matches| Match | 
| Fixed winning [1,1,2,2,3]; player [1,2,2,3,3] | 3 matches | 3 matches| Match | 
| Fixed winning [5,4,3,1,1]; player [4,4,2,1,5] | 2 matches | 2 matches| Match | 
| Final random-generation run winning [8,0,4,8,5]; player [4,2,7,8,3] | 1 match | 1 match| Match | 

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation
**How does the random expression keep every digit between 0 and 9?**
The random expression keeps every digit between 0 and 9 by using rand(). Also, the purpose of rand() is to return nonnegative integers.
**Why does a matching digit in another position not count?**
 The matching digit in another position does not count because it only compares digits that are in the same position in each array. For example, the winning 5 from the first digit and 5 from the player from the fifth digit are the same number but do not match because they are in different positions (Fixed winning [5,4,3,1,1]; player [4,4,2,1,5]). 
**Trace the count through the example arrays.**
Fixed winning [5,4,3,1,1]; player [4,4,2,1,5];
 First digit: 5 vs. 4;
 Second digit: 4 vs 4. --match; 
 Third digit: 3 vs. 2;
 Fourth digit: 1 vs. 1 --match;
 Fifth digit: 1 vs. 5;
 2 MATCHES 
**Why do array loops stop before SIZE, and what did your fixed tests establish?**
The array loop runs the loop 5 times, it checks if i = 0,1,2,3,4. After i = 5, the loop stops before making another valid position. The fixed tests used the same winning digits to make sure when the user inputs five digits, the program would count the matches correctly. 
