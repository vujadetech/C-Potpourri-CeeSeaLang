
### Notes, Holub's "The C companion"

* Alignment: Chapter 3 has an ingenious analogy of word alignment to explain why even boundaries are needed by comparing it to storing a number on facing pages of a book.


* The passes of a Compiler, Fig 1-1, p2. [1]
    * *Program,		Function*
    * cc, Driver program
    * cpp, C preprocessor (pass 1)
    * c0, C compiler pass2
    * c1, C compiler pass3
    * c2, C compiler pass4
    * as, Assembler
    * ld, Linker
    * ar, Librarian (archive)
   
[1]: I left the masm related stuff off since I don't use it. Hopefully that won't bother ~~my mancrush~~ [retired Microsoft CEO Steve Ballmer](https://www.youtube.com/watch?v=xqmj-9XlDzY). :D

* Makin' some ~~copies~~ code snippets...
```javascript
function test() {
 console.log("look ma’, no spaces");
}
```

```C
void main() {
	int sq(int x) { return x * x; }
	return sq(3);
}
```

```Scheme
(define (sq x) (* x x))
(define (fourth x)
  (lambda (x) (sq (sq x))))
```


* END

* Table example from adam-p's Markdown cheatsheet:

    | Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| col 3 is      | right-aligned | $1600 |
| col 2 is      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |
Markdown | Less | Pretty
--- | --- | ---
*Still* | `renders` | **nicely**
1 | 2 | 3
