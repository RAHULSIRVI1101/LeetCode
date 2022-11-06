<h2><a href="https://leetcode.com/problems/shortest-completing-word/">748. Shortest Completing Word</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">licensePlate</code> and an array of strings <code style="user-select: auto;">words</code>, find the <strong style="user-select: auto;">shortest completing</strong> word in <code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">completing</strong> word is a word that <strong style="user-select: auto;">contains all the letters</strong> in <code style="user-select: auto;">licensePlate</code>. <strong style="user-select: auto;">Ignore numbers and spaces</strong> in <code style="user-select: auto;">licensePlate</code>, and treat letters as <strong style="user-select: auto;">case insensitive</strong>. If a letter appears more than once in <code style="user-select: auto;">licensePlate</code>, then it must appear in the word the same number of times or more.</p>

<p style="user-select: auto;">For example, if <code style="user-select: auto;">licensePlate</code><code style="user-select: auto;"> = "aBc 12c"</code>, then it contains letters <code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'b'</code> (ignoring case), and <code style="user-select: auto;">'c'</code> twice. Possible <strong style="user-select: auto;">completing</strong> words are <code style="user-select: auto;">"abccdef"</code>, <code style="user-select: auto;">"caaacab"</code>, and <code style="user-select: auto;">"cbca"</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the shortest <strong style="user-select: auto;">completing</strong> word in </em><code style="user-select: auto;">words</code><em style="user-select: auto;">.</em> It is guaranteed an answer exists. If there are multiple shortest <strong style="user-select: auto;">completing</strong> words, return the <strong style="user-select: auto;">first</strong> one that occurs in <code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> licensePlate = "1s3 PSt", words = ["step","steps","stripe","stepple"]
<strong style="user-select: auto;">Output:</strong> "steps"
<strong style="user-select: auto;">Explanation:</strong> licensePlate contains letters 's', 'p', 's' (ignoring case), and 't'.
"step" contains 't' and 'p', but only contains 1 's'.
"steps" contains 't', 'p', and both 's' characters.
"stripe" is missing an 's'.
"stepple" is missing an 's'.
Since "steps" is the only word containing all the letters, that is the answer.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> licensePlate = "1s3 456", words = ["looks","pest","stew","show"]
<strong style="user-select: auto;">Output:</strong> "pest"
<strong style="user-select: auto;">Explanation:</strong> licensePlate only contains the letter 's'. All the words contain 's', but among these "pest", "stew", and "show" are shortest. The answer is "pest" because it is the word that appears earliest of the 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= licensePlate.length &lt;= 7</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">licensePlate</code> contains digits, letters (uppercase or lowercase), or space <code style="user-select: auto;">' '</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 15</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> consists of lower case English letters.</li>
</ul>
</div>