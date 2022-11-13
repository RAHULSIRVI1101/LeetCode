<h2><a href="https://leetcode.com/problems/goat-latin/">824. Goat Latin</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">sentence</code> that consist of words separated by spaces. Each word consists of lowercase and uppercase letters only.</p>

<p style="user-select: auto;">We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.) The rules of Goat Latin are as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If a word begins with a vowel (<code style="user-select: auto;">'a'</code>, <code style="user-select: auto;">'e'</code>, <code style="user-select: auto;">'i'</code>, <code style="user-select: auto;">'o'</code>, or <code style="user-select: auto;">'u'</code>), append <code style="user-select: auto;">"ma"</code> to the end of the word.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, the word <code style="user-select: auto;">"apple"</code> becomes <code style="user-select: auto;">"applema"</code>.</li>
	</ul>
	</li>
	<li style="user-select: auto;">If a word begins with a consonant (i.e., not a vowel), remove the first letter and append it to the end, then add <code style="user-select: auto;">"ma"</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, the word <code style="user-select: auto;">"goat"</code> becomes <code style="user-select: auto;">"oatgma"</code>.</li>
	</ul>
	</li>
	<li style="user-select: auto;">Add one letter <code style="user-select: auto;">'a'</code> to the end of each word per its word index in the sentence, starting with <code style="user-select: auto;">1</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, the first word gets <code style="user-select: auto;">"a"</code> added to the end, the second word gets <code style="user-select: auto;">"aa"</code> added to the end, and so on.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the final sentence representing the conversion from sentence to Goat Latin</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentence = "I speak Goat Latin"
<strong style="user-select: auto;">Output:</strong> "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"
</pre><p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sentence = "The quick brown fox jumped over the lazy dog"
<strong style="user-select: auto;">Output:</strong> "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sentence.length &lt;= 150</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentence</code> consists of English letters and spaces.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentence</code> has no leading or trailing spaces.</li>
	<li style="user-select: auto;">All the words in <code style="user-select: auto;">sentence</code> are separated by a single space.</li>
</ul>
</div>