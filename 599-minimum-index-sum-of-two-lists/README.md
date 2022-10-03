<h2><a href="https://leetcode.com/problems/minimum-index-sum-of-two-lists/">599. Minimum Index Sum of Two Lists</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two arrays of strings <code style="user-select: auto;">list1</code> and <code style="user-select: auto;">list2</code>, find the <strong style="user-select: auto;">common strings with the least index sum</strong>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">common string</strong> is a string that appeared in both <code style="user-select: auto;">list1</code> and <code style="user-select: auto;">list2</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">common string with the least index sum</strong> is a common string such that if it appeared at <code style="user-select: auto;">list1[i]</code> and <code style="user-select: auto;">list2[j]</code> then <code style="user-select: auto;">i + j</code> should be the minimum value among all the other <strong style="user-select: auto;">common strings</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">all the <strong style="user-select: auto;">common strings with the least index sum</strong></em>. Return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]
<strong style="user-select: auto;">Output:</strong> ["Shogun"]
<strong style="user-select: auto;">Explanation:</strong> The only common string is "Shogun".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> list1 = ["Shogun","Tapioca Express","Burger King","KFC"], list2 = ["KFC","Shogun","Burger King"]
<strong style="user-select: auto;">Output:</strong> ["Shogun"]
<strong style="user-select: auto;">Explanation:</strong> The common string with the least index sum is "Shogun" with index sum = (0 + 1) = 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> list1 = ["happy","sad","good"], list2 = ["sad","happy","good"]
<strong style="user-select: auto;">Output:</strong> ["sad","happy"]
<strong style="user-select: auto;">Explanation:</strong> There are three common strings:
"happy" with index sum = (0 + 1) = 1.
"sad" with index sum = (1 + 0) = 1.
"good" with index sum = (2 + 2) = 4.
The strings with the least index sum are "sad" and "happy".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= list1.length, list2.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= list1[i].length, list2[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">list1[i]</code> and <code style="user-select: auto;">list2[i]</code> consist of spaces <code style="user-select: auto;">' '</code> and English letters.</li>
	<li style="user-select: auto;">All the strings of <code style="user-select: auto;">list1</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">All the strings of <code style="user-select: auto;">list2</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>