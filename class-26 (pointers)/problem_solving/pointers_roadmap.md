# C Pointers — Core Fundamentals & Pattern Recognition

Goal: not "solve 60 problems," but build a mental model solid enough that when you see *any* problem, you instinctively recognize "this needs a pointer" and know *which* pointer pattern fits. Depth over volume.

---

## Part 1 — The Mental Model (spend real time here, don't rush)

A pointer is just a variable whose value is a memory address. That's it. Everything else — arrays, strings, structs, linked lists, function callbacks — is this one idea reused in different shapes.

Before writing any code, be able to answer these without hesitation:

- What is stored *in* a pointer variable? (an address, not a value)
- What does `*p` mean when reading vs when declaring? (`int *p;` declares — `*` is part of the type. `*p` in an expression dereferences — gives you the value at that address.)
- What is `&x`? (the address of `x`, type `type*`)
- If `p` points to `x`, is `*p = 5` the same as `x = 5`? (yes — they refer to the same memory)
- Why does `p++` on an `int*` move 4 bytes, but on a `char*` move 1 byte? (pointer arithmetic is scaled by the size of the pointed-to type — this single fact explains half of all pointer bugs)

**Exercise:** For every pointer problem below, before writing code, draw boxes (memory) and arrows (pointers) on paper. If you can't draw it, you don't understand it yet — writing code won't fix that.

---

## Part 2 — The Five Reasons You'd Ever Reach for a Pointer

Almost every pointer use case in C falls into one of these five buckets. Learn to *recognize* which bucket a problem belongs to — that's the actual skill, more than syntax.

### 1. "I need a function to modify a caller's variable"
C passes arguments **by value**. If a function needs to change something in the caller, it needs the *address* of that thing, not a copy.
- Recognize this when a problem says: "write a function that updates/swaps/modifies X and the caller should see the change."
- Practice: `swap(int*, int*)`, `increment(int*)`, a function returning two values via `int *out1, int *out2`.

### 2. "I need to work with arrays/strings efficiently"
Arrays decay to pointers to their first element. Walking memory with a pointer is often more natural (and was historically faster) than indexing.
- Recognize this when a problem involves: traversing, searching, or reversing a sequence.
- Practice: sum an array using `*(p+i)`, reverse a string with two pointers walking inward, your own `strlen`/`strcpy`.

### 3. "I need memory that outlives a function call, or whose size I don't know until runtime"
Local variables die when a function returns. If you need data to persist, or you don't know the size in advance, you need heap memory — and `malloc` returns a pointer, so you must have one to use it.
- Recognize this when a problem says: "size determined by user input," "grows dynamically," "should still exist after the function returns."
- Practice: dynamically sized array with `malloc`/`realloc`, a growable string buffer.

### 4. "I need to build a structure where each piece points to the next"
Arrays are contiguous and fixed-shape. When you need flexible, non-contiguous relationships (this node connects to that node), you store a pointer *inside* the data itself.
- Recognize this when a problem says: "linked," "tree," "graph," "each element refers to another," "insert/delete without shifting everything."
- Practice: build a 3-node linked list by hand, no shortcuts — write the `struct`, `malloc` each node, wire the `next` pointers yourself, then free it.

### 5. "I need to pass behavior, not just data, into a function"
Sometimes what varies between calls isn't a value but *which function runs*. A pointer to a function lets you pass "do this" as an argument.
- Recognize this when a problem says: "custom comparator," "callback," "different operation depending on input," "plug in different behavior."
- Practice: a function pointer used to pick between add/subtract/multiply at runtime.

**This is the real skill you're asking for:** when you read a new problem, ask "which of these five needs does it have?" That question — not memorized syntax — is what tells you a pointer is the tool.

---

## Part 3 — Core Practice Set (deliberately short — master these fully before moving on)

Do these slowly. For each one, first say out loud which of the 5 buckets above it belongs to.

1. `swap(int *a, int *b)` — bucket 1
2. `void min_max(int *arr, int n, int *min_out, int *max_out)` — bucket 1
3. Sum an array using only pointer arithmetic (no `[]`) — bucket 2
4. Reverse a string in place with two pointers — bucket 2
5. Your own `strlen`, `strcpy`, `strcmp` — bucket 2
6. Dynamically allocate an array whose size comes from user input, fill it, free it — bucket 3
7. Grow a buffer with `realloc` as you append characters to it — bucket 3
8. Build a 3-node linked list by hand: struct, malloc, wire `next`, print, free — bucket 4
9. Insert a node at the head of a linked list — bucket 4
10. A calculator that picks `add`/`sub`/`mul` via a function pointer based on an operator character — bucket 5

Stop after these ten and make sure each one is *effortless* — no hesitation, no looking things up — before doing anything harder. Speed and confidence here is what makes every future pointer problem (trees, graphs, custom allocators, whatever you meet later) just a bigger combination of the same five ideas.

---

## Part 4 — Self-Test: "Would I need a pointer here?"

Read each prompt and answer only which bucket (1–5) it needs, without writing code:

- "Write a function that doubles every element of an array in place."
- "Write a function that finds a value in a sorted list and returns whether it exists, without knowing the list size until the program runs."
- "Implement an undo feature where each state points back to the previous state."
- "Write a sort function where the user can supply their own comparison rule (ascending, descending, by length, etc.)."
- "Write a function that reads a file of unknown length into memory."
- "Write a function that takes a temperature and converts it to both Celsius and Fahrenheit, filling in both results."

Answering these correctly and quickly — that's the actual goal. Syntax is secondary; it comes for free once the recognition is automatic.

---

## How to use this file
- Don't skip to Part 3 — the recognition skill in Part 2 is the point of this whole file.
- Compile everything with `-Wall -Wextra` and read every warning; pointer bugs mostly show up as warnings before they show up as crashes.
- Once Part 3 is effortless and Part 4 answers come instantly, you're ready for harder combined problems (trees, graphs, allocators) — say the word and I'll put together a next-level set.