https://open.kattis.com/problems/dasblinkenlights

Das Blinkenlights

NOTE: I reccomend going to the url for this problem to see the image. 

Problem: There are two lights that blink at regular intervals. When each one blinks, 
it turns on and then immediately back off; they don't toggle. They are both off at 
time t=0. The first one blinks at t=p,2p,3p, seconds; the second one blinks at 
t=q,2q,3q, seconds. Once they start, they both keep blinking forever. 
It is very exciting to see them blink at the same time (on the same second). 
But your patience is going to run out eventually, in s seconds. Will they blink at 
same time between t=1 and t=s (inclusive)? Write a program that can answer this 
question, quick, before they start blinking again!

Input: Input consists of one line containing three space-separated integers 
p, q, and s. The first light blinks every p seconds, the second every q seconds. 
The value of s represents the maximum number of seconds to consider when 
determining if the two lights blink at the same time.

Output: Output yes if the two lights blink on the same second between time 
1 and time s, or no otherwise.
