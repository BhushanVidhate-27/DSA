// Title: Min Stack
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-stack/

    }
        }
            topNode = newNode;
            newNode->down = topNode;
            Node* newNode = new Node(val, mn);
            int mn = min(val, topNode->currMin);
        } else {
            topNode = new Node(val, val);
        if (topNode == NULL) {
    void push(int val) {

    }
        topNode = NULL;
    MinStack() {

    Node* topNode;
public:

    void pop() {
        if (topNode == NULL)
