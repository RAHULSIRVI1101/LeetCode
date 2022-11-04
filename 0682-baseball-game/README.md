<h2><a href="https://leetcode.com/problems/baseball-game/">682. Baseball Game</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.</p>

<p style="user-select: auto;">You are given a list of strings <code style="user-select: auto;">operations</code>, where <code style="user-select: auto;">operations[i]</code> is the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> operation you must apply to the record and is one of the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">An integer <code style="user-select: auto;">x</code>.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">Record a new score of <code style="user-select: auto;">x</code>.</li>
	</ul>
	</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'+'</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">Record a new score that is the sum of the previous two scores.</li>
	</ul>
	</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'D'</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">Record a new score that is the double of the previous score.</li>
	</ul>
	</li>
	<li style="user-select: auto;"><code style="user-select: auto;">'C'</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">Invalidate the previous score, removing it from the record.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the sum of all the scores on the record after applying all the operations</em>.</p>

<p style="user-select: auto;">The test cases are generated such that the answer and all intermediate calculations fit in a <strong style="user-select: auto;">32-bit</strong> integer and that all operations are valid.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["5","2","C","D","+"]
<strong style="user-select: auto;">Output:</strong> 30
<strong style="user-select: auto;">Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["5","-2","4","C","D","9","+","+"]
<strong style="user-select: auto;">Output:</strong> 27
<strong style="user-select: auto;">Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["1","C"]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>
"1" - Add 1 to the record, record is now [1].
"C" - Invalidate and remove the previous score, record is now [].
Since the record is empty, the total sum is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= operations.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">operations[i]</code> is <code style="user-select: auto;">"C"</code>, <code style="user-select: auto;">"D"</code>, <code style="user-select: auto;">"+"</code>, or a string representing an integer in the range <code style="user-select: auto;">[-3 * 10<sup style="user-select: auto;">4</sup>, 3 * 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;">For operation <code style="user-select: auto;">"+"</code>, there will always be at least two previous scores on the record.</li>
	<li style="user-select: auto;">For operations <code style="user-select: auto;">"C"</code> and <code style="user-select: auto;">"D"</code>, there will always be at least one previous score on the record.</li>
</ul>
</div>