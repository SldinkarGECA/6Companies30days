**An axis-aligned rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) is the coordinate of its bottom-left corner, and (x2, y2) is the coordinate of its top-right corner. Its top and bottom edges are parallel to the X-axis, and its left and right edges are parallel to the Y-axis.
Two rectangles overlap if the area of their intersection is positive. To be clear, two rectangles that only touch at the corner or edges do not overlap.
Given two axis-aligned rectangles rec1 and rec2, return true if they overlap, otherwise return false.
Example 1:
Input: rec1 = [0,0,2,2], rec2 = [1,1,3,3]
Output: true**

```
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], y1 = rec1[1], x2 = rec1[2], y2 = rec1[3];
	    int x3 = rec2[0], y3 = rec2[1], x4 = rec2[2], y4 = rec2[3];
	    return (x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2);
    }
};
```

[Explaination](https://leetcode.com/problems/rectangle-overlap/discuss/133175/C%2B%2B-Solution-with-easy-explanation)
