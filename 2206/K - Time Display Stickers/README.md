<h2><a href="https://codeforces.com/contest/2206/problem/K" target="_blank" rel="noopener noreferrer">2206K — Time Display Stickers</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2206K](https://codeforces.com/contest/2206/problem/K) |

## Topics
`binary search`

---

## Problem Statement

<div class="header"><div class="title">K. Time Display Stickers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a collection of $$$n$$$ digit stickers, represented by a string $$$S$$$ of length $$$n$$$. Each character of $$$S$$$ is a digit <span class="tex-font-style-tt">0</span> through <span class="tex-font-style-tt">9</span>, representing one sticker of that digit.</p><p>You want to create <span class="tex-font-style-underline">time displays</span> using these stickers. Each time display shows a time in the format <span class="tex-font-style-tt">HH:MM</span>, where: </p><ul> <li> <span class="tex-font-style-tt">HH</span> is a two-digit hour between $$$00$$$ and $$$11$$$ (inclusive), and </li><li> <span class="tex-font-style-tt">MM</span> is a two-digit minute between $$$00$$$ and $$$59$$$ (inclusive). </li></ul><p>In other words, each time display requires exactly four stickers: two for the hours and two for the minutes. Each sticker can only be used for at most one time display.</p><p>What is the maximum number of time displays you can create?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains one integer $$$t$$$ ($$$1 \le t \le 10\,000$$$) representing the number of test cases. After that, $$$t$$$ test cases follow. Each of them is presented as follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 10^6$$$).</p><p>The second line contains a string $$$S$$$ of length $$$n$$$, consisting only of digits <span class="tex-font-style-tt">0</span>–<span class="tex-font-style-tt">9</span>.</p><p>The sum of $$$n$$$ across all test cases in one input file does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum number of time displays you can create.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005630115287979103" id="id00935702364633748" class="input-output-copier">Copy</div></div><pre id="id005630115287979103">4
10
0123456789
11
00123456789
8
99111111
4
1234
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003638238274822606" id="id008296961535219732" class="input-output-copier">Copy</div></div><pre id="id003638238274822606">1
2
2
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p><span class="tex-font-style-it">Explanation for the sample input/output #1</span></p><p>For the first test case, you can create one time display <span class="tex-font-style-tt">10:59</span>. It can be shown that you cannot create two displays for a given collection of stickers.</p><p>For the second test case, you can create two time displays: <span class="tex-font-style-tt">10:59</span> and <span class="tex-font-style-tt">04:27</span>.</p><p>For the third test case, you can create two time displays: <span class="tex-font-style-tt">11:19</span> and <span class="tex-font-style-tt">11:19</span>.</p><p>For the fourth test case, you cannot create any time displays.</p></div>