/*
 * Topic: Pattern Printing Questions
 * Contains: Easy, Medium, Hard, Bonus Challenges, and Image Reference Patterns
 */

// ============================================================================
// LEVEL 1 — EASY PATTERN QUESTIONS
// ============================================================================

// 1. Print an n x n square of * characters.
// 2. Print an n x n square where every row contains the row number repeated n times.
// 3. Print an n x n square where every row contains the same letter repeated n times.
// 4. Print a left-aligned half pyramid of * with row i containing i stars.
// 5. Print an inverted left-aligned half pyramid of *.
// 6. Print a right-aligned half pyramid of *.
// 7. Print an inverted right-aligned half pyramid of *.
// 8. Print a left-aligned number triangle: 1 / 1 2 / 1 2 3 / ...
// 9. Print a repeated-number triangle: 1 / 2 2 / 3 3 3 / ...
// 10. Print an alphabet triangle: A / A B / A B C / ...
// 11. Print a repeated-letter triangle: A / B B / C C C / ...
// 12. Print a full centered star pyramid with n rows.
// 13. Print an inverted centered star pyramid with n rows.
// 14. Print a centered number pyramid where row i contains 1 through i.
// 15. Print a centered pyramid where row i contains the same number i repeated i times.
// 16. Print Floyd's triangle for n rows.
// 17. Print a triangle containing consecutive integers starting from 1.
// 18. Print a triangle containing consecutive alphabets starting from A and restarting at A on every row.
// 19. Print an n x n matrix of alternating 0 and 1, starting with 1.
// 20. Print an n x n checkerboard pattern using * and space.
// 21. Print an n x n square with 1 on the main diagonal and 0 elsewhere.
// 22. Print an n x n square with * on both diagonals and spaces elsewhere.
// 23. Print an n x n square with * on the border and spaces inside.
// 24. Print a hollow rectangle with r rows and c columns.
// 25. Print a plus/cross pattern in an odd-sized n x n grid.
// 26. Print an n-row right-aligned triangle of numbers 1 to i.
// 27. Print an inverted number triangle: 1 2 3 ... n, then one fewer number per row.
// 28. Print an alphabet pyramid using A, B, C... with letters increasing across each row.
// 29. Print a triangle of multiplication values: row i contains i, 2i, 3i, ... i*i.
// 30. Print an n x n table where cell (i,j) contains i*j.
// 31. Print an n x n matrix where cell (i,j) contains i+j.
// 32. Print an n x n matrix where cell (i,j) contains |i-j|.
// 33. Print a hollow right triangle of *.
// 34. Print a hollow inverted right triangle of *.
// 35. Print a hollow centered pyramid of *.
// 36. Print a hollow inverted centered pyramid of *.
// 37. Print a diamond of * with n rows in the upper half.
// 38. Print an inverted diamond of *.
// 39. Print a vertical line of * on both sides of an n-row pattern, with a centered filled row at the middle.
// 40. Print the first n rows of Pascal's triangle.


// ============================================================================
// LEVEL 2 — MEDIUM PATTERN QUESTIONS
// ============================================================================

// 1. Print a number pyramid in which each row is a palindrome: 1 / 121 / 12321 / ...
// 2. Print a palindromic number pyramid with row i using 1..i..1.
// 3. Print an alphabet palindrome pyramid: A / ABA / ABCBA / ...
// 4. Print a continuous alphabet triangle where letters continue across rows without restarting.
// 5. Print a continuous number pyramid where counting continues across every row.
// 6. Print a rotated number pyramid: numbers increase from the left edge toward the right.
// 7. Print a flipped version of the rotated number pyramid.
// 8. Print a half-diamond: increasing star rows followed by decreasing star rows.
// 9. Print a flipped half-diamond.
// 10. Print a full diamond with hollow interior.
// 11. Print an hourglass/sandglass pattern of *.
// 12. Print a hollow hourglass pattern.
// 13. Print a butterfly pattern: two mirrored triangles separated by spaces.
// 14. Print an inverted butterfly pattern.
// 15. Print a bow-tie pattern using stars and spaces.
// 16. Print an hourglass made of numbers, with row values increasing from the edges toward the center.
// 17. Print a diamond where the numbers increase toward the center and decrease symmetrically.
// 18. Print a vertical number palindrome pattern such as 1, 232, 34543 with a user-defined n.
// 19. Print an n x n hollow square whose border contains the row number on each side.
// 20. Print a hollow square with 1 on the top border, 2 on the next border, etc., forming layers.
// 21. Print a concentric square pattern where the outer layer is n and the center is 1.
// 22. Print a concentric square pattern of alternating * and # layers.
// 23. Print an n x n matrix with 1 on the border and 0 inside.
// 24. Print an n x n matrix with increasing values only on the boundary and blanks inside.
// 25. Print a lower triangular matrix of numbers where cell (i,j)=j.
// 26. Print an upper triangular matrix of numbers where cell (i,j)=j.
// 27. Print an upper triangular matrix of consecutive numbers.
// 28. Print a lower triangular matrix of consecutive numbers.
// 29. Print a binary triangle: 1 / 01 / 101 / 0101 / ...
// 30. Print a binary triangle where the starting bit alternates every row.
// 31. Print a checkerboard triangle using 0 and 1.
// 32. Print a right-aligned alphabet triangle with A B C... on each row.
// 33. Print an inverted alphabet triangle where each row starts at A and gets shorter.
// 34. Print an alphabet diamond with A at the top and increasing letters toward the center.
// 35. Print a hollow alphabet diamond with letters only on the boundary.
// 36. Print an n-row pattern in which row i contains the first i multiples of i.
// 37. Print multiplication tables 1 to n in triangular form.
// 38. Print a triangle where each row contains i repeated i times, but reverse the row order.
// 39. Print a square in which odd rows contain increasing numbers and even rows contain decreasing numbers.
// 40. Print a square in which odd rows contain A B C... and even rows contain Z Y X... as far as needed.
// 41. Print a hollow rectangle with a diagonal from top-left to bottom-right.


// ============================================================================
// LEVEL 3 — HARD PATTERN QUESTIONS
// ============================================================================

// 1. Print a butterfly pattern whose upper and lower halves are both hollow.
// 2. Print a hollow butterfly with stars on both outer boundaries and inner wings.
// 3. Print a double diamond: two diamonds sharing a center row.
// 4. Print a mirrored double pyramid joined at the center.
// 5. Print a sandglass with a hollow border and a filled center line.
// 6. Print a diamond in which each row is palindromic numbers and spacing is centered.
// 7. Print an alphabet diamond where each row is a palindrome and letters continue symmetrically.
// 8. Print a continuous alphabet diamond using A-Z cyclically when the sequence exceeds Z.
// 9. Print a number diamond using consecutive integers, continuing the count across rows.
// 10. Print a hollow number diamond whose boundary values follow the row number.
// 11. Print a rhombus of * with n rows and n columns.
// 12. Print a hollow rhombus of *.
// 13. Print a parallelogram of numbers with each row shifted right by one position.
// 14. Print a hollow parallelogram of *.
// 15. Print an X pattern where the two diagonals use increasing numbers instead of stars.
// 16. Print an X pattern where both diagonals contain the same row-dependent number.
// 17. Print a plus pattern with increasing numbers on the horizontal and vertical arms.
// 18. Print a plus pattern where the center contains n and values decrease away from it.
// 19. Print a border matrix with clockwise increasing numbers around the perimeter.
// 20. Print a matrix where the outer layer contains n, the next layer n-1, down to 1.
// 21. Print a matrix where each concentric layer contains a different alphabet.
// 22. Print a matrix whose top-left quadrant mirrors the top-right and bottom halves mirror the top.
// 23. Print a square pattern that is horizontally and vertically symmetric using *.
// 24. Print a pattern where the number of spaces decreases by 2 while the number of stars increases by 2 each row, then reverse it.
// 25. Print an hourglass where the number of stars decreases to 1 and then increases, while row numbers remain visible.
// 26. Print a butterfly whose wings contain consecutive numbers rather than stars.
// 27. Print an alphabet butterfly where each wing uses A, B, C... symmetrically.
// 28. Print a hollow butterfly with a filled central vertical axis.
// 29. Print a pattern that alternates between a full row, hollow row, full row, hollow row.
// 30. Print a square where the top-left to bottom-right diagonal contains 1..n and the opposite diagonal contains n..1.
// 31. Print a matrix pattern with values equal to min(i,j,n-i+1,n-j+1).
// 32. Print a matrix pattern with values equal to max(i,j,n-i+1,n-j+1).
// 33. Print a matrix whose value at each cell is the Manhattan distance from the center.
// 34. Print a matrix whose value at each cell is the minimum distance to any border.
// 35. Print a spiral matrix containing 1 to n^2.
// 36. Print an anti-clockwise spiral matrix containing 1 to n^2.
// 37. Print a matrix filled in a zigzag row-wise pattern with consecutive integers.
// 38. Print a matrix filled in a zigzag column-wise pattern with consecutive integers.
// 39. Print Pascal's triangle centered using proper spacing and n rows.
// 40. Print a Pascal-style triangle but replace each value with '*' whenever it is odd and a space whenever it is even.
// 41. Print a pattern combining a hollow diamond with an X inside it.
// 42. Print a pattern combining a hollow square, both diagonals and a center plus.
// 43. Print a number pyramid in which each row starts from the row number and increases to a peak, then decreases.
// 44. Print a pattern where row i contains i numbers, but the sequence reverses direction on every row.
// 45. Print a continuous alphabet pattern that wraps from Z back to A.
// 46. Print a cyclic number pattern using digits 1-9 repeatedly.
// 47. Print a pattern where primes occupy the star positions and composite numbers occupy the blank positions.
// 48. Print a pattern where Fibonacci numbers are printed along the rows instead of ordinary counting.
// 49. Print a pattern where each row contains the first i Fibonacci numbers.
// 50. Print a pattern where each cell contains '*' if i+j is even and '#' otherwise.
// 51. Print a pattern where each cell contains '*' if i*j is even and '#' otherwise.


// ============================================================================
// LEVEL 4 — BONUS CHALLENGES
// ============================================================================

// 1. For a given n, print all 4 rotations of a half-pyramid in one output: left, right, inverted-left, inverted-right.
// 2. For a given odd n, print square, X, plus, hollow square, and border-number patterns one after another.
// 3. Given n and a character ch, generate all basic star patterns using ch instead of '*'.
// 4. Given n and two characters a and b, generate an alternating checkerboard pattern.
// 5. Given n, print a diamond, then its 90-degree rotated equivalent using the same number of symbols.
// 6. Given rows and columns, print every possible border-only rectangle variation: top, bottom, left, right, and full border.
// 7. Generate a menu-driven pattern program that lets the user choose among at least 15 patterns.
// 8. Build one reusable function per pattern and call the selected function from a menu.
// 9. Take n and a symbol from the user and generate hollow square, hollow triangle, hollow diamond and hollow rhombus.
// 10. Generate the same 10 selected patterns in both C++ and Python and ensure their outputs match for n=5.


// ============================================================================
// PATTERN-SOLVING CHECKLIST
// ============================================================================

// - Can I identify the total number of rows?
// - For row i, how many spaces are printed?
// - For row i, how many symbols/numbers/letters are printed?
// - Does the sequence restart on every row or continue globally?
// - Is the pattern left-aligned, right-aligned, or centered?
// - Is the pattern symmetric?
// - If it is hollow, which cells are boundary cells?
// - Can I express the condition using i and j?
// - Can I test the pattern with n = 3 before n = 5?
// - Can I implement the same logic in both C++ and Python?
// - Can I convert the repeated logic into a function?
// - Can I explain the time complexity in terms of n?


// ============================================================================
// ADDITIONAL SECTION — ALL PATTERNS FROM REFERENCE IMAGES
// ============================================================================

// --- Image 1 ---
// 1. Print a Simple Pyramid of stars: 1, 2, 3, ..., n stars centered on each row.
// 2. Print a Flipped Simple Pyramid of stars, with the alignment reversed.
// 3. Print an Inverted Pyramid of stars: n stars down to 1 star.
// 4. Print a Flipped Inverted Pyramid of stars, with the inverted alignment reversed.
// 5. Print a centered Triangle pattern of stars with increasing row width.
// 6. Print an Inverted Triangle pattern of stars with decreasing row width.
// 7. Print a Half Diamond: increasing stars to n, then decreasing back to 1.
// 8. Print a Flipped Half Diamond with the opposite alignment.
// 9. Print a full Diamond of stars with equal upper and lower halves.
// 10. Print an Hourglass/Sandglass pattern of stars.
// 11. Print a Number Pyramid where row i contains the number i repeated i times.
// 12. Print a Rotated Number Pyramid with numbers arranged in the rotated triangular form shown in the reference.
// 13. Print a Palindrome Triangle where each row reads the same forward and backward, such as 1, 232, 34543.
// 14. Print an Alphabet Pyramid with A, AB, ABC, ... centered by row.
// 15. Print a Continuous Alphabet Pyramid where alphabet characters continue counting across rows instead of restarting.

// --- Image 2 — C++ Pattern Collection ---
// 1. Print a solid n x n star square.
// 2. Print a left-aligned star half pyramid.
// 3. Print an inverted left-aligned star half pyramid.
// 4. Print an n x n square where row i contains i repeated across the row.
// 5. Print a half pyramid where row i contains i repeated i times.
// 6. Print an inverted repeated-number half pyramid.
// 7. Print a square where every row prints 1 2 3 ... n.
// 8. Print a number half pyramid where counting restarts from 1 on every row.
// 9. Print an inverted number half pyramid where each row starts at 1 and becomes shorter.
// 10. Print a square filled with consecutive numbers row-wise from 1 to n^2.
// 11. Print a lower triangular consecutive-number pattern, continuing the count across rows.
// 12. Print an inverted version of the continuous-number triangle.

// --- Image 3 — Symmetric Grid Pattern ---
// 1. Print the symmetric star-grid pattern shown in the reference: for each row, stars extend from both left and right edges toward the center, with the middle row completely filled.
// 2. Generalize the same pattern for any odd n using row distance from the center.
// 3. Print the horizontally and vertically symmetric version where the number of stars in row i is determined by min(i, n-i+1) on both sides.

// --- Image 4 — Complete C++ Pattern Collection ---
// 1. Print a solid star square.
// 2. Print a left-aligned star half pyramid.
// 3. Print an inverted half pyramid.
// 4. Print a square of repeated row numbers: 1 1 1..., 2 2 2..., etc.
// 5. Print a repeated-number half pyramid: 1 / 2 2 / 3 3 3 / ...
// 6. Print an inverted repeated-number half pyramid.
// 7. Print a square where every row is 1 2 3 ... n.
// 8. Print a left-aligned increasing number triangle where each row restarts at 1.
// 9. Print an inverted increasing number triangle.
// 10. Print a square of continuous numbers from 1 to n^2.
// 11. Print a continuous-number lower triangle.
// 12. Print an inverted continuous-number triangle.
// 13. Print a centered star pyramid.
// 14. Print an inverted centered star pyramid.
// 15. Print a centered number pyramid.
// 16. Print a centered inverted number pyramid.
// 17. Print a hollow star rectangle with only the boundary printed.
// 18. Print a hollow star square.
// 19. Print a hollow centered pyramid.
// 20. Print a hollow inverted centered pyramid.
// 21. Print a diamond of stars.
// 22. Print an inverted diamond/sandglass.
// 23. Print a butterfly pattern with two mirrored triangular wings.
// 24. Print an inverted butterfly pattern.
// 25. Print a hollow diamond.
// 26. Print a pattern containing stars only on the outer boundary and a separate central line.

// --- Image 5 — Hollow Split / Mirror Pattern ---
// 1. Print the exact hollow split pattern shown: the first and last positions are always stars, while the inner star groups expand toward the middle and contract symmetrically.
// 2. Generalize the pattern for odd n so the center row is completely filled.
// 3. Create the same pattern using a user-provided symbol instead of *.

// --- Image 6 — Java Pattern Programs Sheet ---
// 1. Print a left-aligned number triangle: 1 / 1 2 / 1 2 3 / ...
// 2. Print an inverted number triangle.
// 3. Print a right-aligned number triangle.
// 4. Print a reversed right-aligned number triangle.
// 5. Print a number triangle with continuous counting across rows.
// 6. Print a number triangle whose row length decreases from n to 1.
// 7. Print a star half pyramid.
// 8. Print a right-aligned star pyramid.
// 9. Print an inverted star pyramid.
// 10. Print an inverted right-aligned star pyramid.
// 11. Print a centered star pyramid.
// 12. Print a centered inverted star pyramid.
// 13. Print a hollow centered pyramid.
// 14. Print a hollow inverted pyramid.
// 15. Print an alphabet triangle A / AB / ABC / ...
// 16. Print an inverted alphabet triangle.
// 17. Print a right-aligned alphabet triangle.
// 18. Print a reversed/right-to-left alphabet triangle.
// 19. Print a continuous alphabet triangle.
// 20. Print an alphabet pattern where each row decreases from the previous row.
// 21. Print a centered alphabet pyramid.
// 22. Print an inverted centered alphabet pyramid.
// 23. Print a hollow alphabet pyramid.
// 24. Print a hollow inverted alphabet pyramid.
// 25. Print a diamond-shaped alphabet pattern.
// 26. Print an inverted diamond-shaped alphabet pattern.
// 27. Print a number diamond.
// 28. Print a palindromic number diamond.
// 29. Print a star diamond.
// 30. Print a hollow star diamond.
// 31. Print a butterfly star pattern.
// 32. Print an inverted butterfly pattern.
// 33. Print a number butterfly.
// 34. Print an alphabet butterfly.
// 35. Print an hourglass star pattern.
// 36. Print a hollow hourglass.
// 37. Print a number hourglass.
// 38. Print a continuous-number hourglass.
// 39. Print a square of repeated numbers.
// 40. Print a square of continuous numbers.
// 41. Print a hollow number square.
// 42. Print a square of repeated alphabets.
// 43. Print a continuous alphabet square.
// 44. Print a hollow alphabet square.
// 45. Print a checkerboard using stars and spaces.
// 46. Print alternating 1 and 0 rows.
// 47. Print an X-shaped star pattern.
// 48. Print a plus-shaped star pattern.
// 49. Print a rhombus of stars.
// 50. Print a hollow rhombus.
// 51. Print a parallelogram of stars.
// 52. Print a hollow parallelogram.
// 53. Print a Pascal triangle.

// --- Image 7 — Number Pyramid / Diamond / Vertical Pyramid ---
// 1. Print the Number Pyramid shown: row i contains 1 through i.
// 2. Print the Number Diamond shown: rows increase from 1..n and then decrease back to 1.
// 3. Print the Vertical Number Pyramid shown, where each row is a palindrome such as 1, 232, 34543, and the sequence continues downward.
// 4. Generalize the vertical number pyramid for arbitrary n.
// 5. Create a centered version of the same palindrome-number pyramid.
