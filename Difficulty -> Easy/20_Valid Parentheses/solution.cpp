class Solution {
public:
    struct stack {
        int top;
        int size;     
        char *arr;
    };

    char pop(struct stack* s) {
        if (s->top == -1) return '\0';
        return s->arr[s->top--];
    }

    void push(char ch, struct stack* s) {
        if (s->top == s->size - 1) {
            return;
        }
        s->arr[++s->top] = ch;
    }

    bool isValid(string str) {
        struct stack s;
        s.top = -1;
        s.size = str.size();
        s.arr = (char*)malloc(s.size * sizeof(char));

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '{' || str[i] == '[' || str[i] == '(') {
                push(str[i], &s);
            } 
            else {
                char popped = pop(&s);
                if (popped == '\0' || 
                    (popped == '(' && str[i] != ')') || 
                    (popped == '[' && str[i] != ']') || 
                    (popped == '{' && str[i] != '}')) {
                    free(s.arr);
                    return false;
                }
            }
        }

        bool result = (s.top == -1); 
        free(s.arr);
        return result;
    }
};
