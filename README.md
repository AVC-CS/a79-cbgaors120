[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=23887816)
# A79: Vector Insertion and Deletion

**Code your program here:** [https://classroom.github.com/a/1TCvJdAL](https://classroom.github.com/a/1TCvJdAL)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.cpp in your cloned Repository.**

In this assignment, you will complete **makeVector()**, **insertVector()**, and **deleteVector()** in main.hpp. The vector keeps a sorted order. **Do NOT edit main.cpp.**

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function 1: void makeVector(vector<int> &number) |
|---|
| • Fill number with random integers in the range [0, 20).<br>• The vector size is set by main.cpp (10 elements). Use number.size().<br>• Sort the vector after filling: sort(number.begin(), number.end()). |

Implementation Hint

| Function 2: void insertVector(vector<int> &number, int usernum) |
|---|
| • Insert usernum into the sorted vector while keeping the sort order.<br>• Requirement: use vector::insert(). Do NOT call sort() again.<br>• Walk the vector with an iterator. When you find the first element greater than usernum, insert before it.<br>• If usernum is greater than every element, append at the end. |

Implementation Hint

| Function 3: int deleteVector(vector<int> &number, int usernum) |
|---|
| • Erase every occurrence of usernum from the vector.<br>• Use find() in a loop and vector::erase(iterator) to remove each one.<br>• Return value: -1 if no occurrence was found; otherwise the number of occurrences erased. |

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run (random vector, insert 15, delete 3):

```cpp
    1    4    7    9   12   13   17   18   19   19
Enter your input
   1    4    7    9   12   13   15   17   18   19   19
Enter your input
The deleted element is 1
    1    4    7    9   12   13   15   18   19   19
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | makeVector on size-10 vector — values in [0, 20), sorted | all elements in range and non-decreasing | 20 |
| T2 | insertVector with mid-range value; insertVector with value larger than all | value placed in correct sorted position; appended at end | 20 |
| T3 | deleteVector when value is present (multiple); deleteVector when absent | count of erased values; -1 when absent | 20 |
| T4 | round-trip insert + delete; deleteVector on single-element vector | original restored; correct return for found vs not-found | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

