<h2><a href="https://leetcode.com/problems/find-smallest-letter-greater-than-target/">744. Find Smallest Letter Greater Than Target</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of characters <code style="user-select: auto;">letters</code> that is sorted in <strong style="user-select: auto;">non-decreasing order</strong>, and a character <code style="user-select: auto;">target</code>. There are <strong style="user-select: auto;">at least two different</strong> characters in <code style="user-select: auto;">letters</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the smallest character in </em><code style="user-select: auto;">letters</code><em style="user-select: auto;"> that is lexicographically greater than </em><code style="user-select: auto;">target</code>. If such a character does not exist, return the first character in <code style="user-select: auto;">letters</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["c","f","j"], target = "a"
<strong style="user-select: auto;">Output:</strong> "c"
<strong style="user-select: auto;">Explanation:</strong> The smallest character that is lexicographically greater than 'a' in letters is 'c'.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["c","f","j"], target = "c"
<strong style="user-select: auto;">Output:</strong> "f"
<strong style="user-select: auto;">Explanation:</strong> The smallest character that is lexicographically greater than 'c' in letters is 'f'.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> letters = ["x","x","y","y"], target = "z"
<strong style="user-select: auto;">Output:</strong> "x"
<strong style="user-select: auto;">Explanation:</strong> There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= letters.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters[i]</code> is a lowercase English letter.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters</code> is sorted in <strong style="user-select: auto;">non-decreasing</strong> order.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">letters</code> contains at least two different characters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">target</code> is a lowercase English letter.</li>
</ul>
</div>