class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>rpn;
        for(string i:tokens)
        {
            char a=i[0];
            if(!isdigit(a)&&i.size()==1)
            {
                switch(a)
                {
                    case '+':
                    {
                        int num1=rpn.top();
                        rpn.pop();
                        int num2=rpn.top();
                        rpn.pop();
                        rpn.push(num2+num1);
                        break;
                    }
                    case '/':
                    {
                        int num1=rpn.top();
                        rpn.pop();
                        int num2=rpn.top();
                        rpn.pop();
                        rpn.push(int(num2/num1));
                        break;
                    }
                    case '-':
                    {
                        int num1=rpn.top();
                        rpn.pop();
                        int num2=rpn.top();
                        rpn.pop();
                        rpn.push(num2-num1);
                        break;
                    }
                    case '*':
                    {
                        int num1=rpn.top();
                        rpn.pop();
                        int num2=rpn.top();
                        rpn.pop();
                        rpn.push(num2*num1);
                        break;
                    }
                    default:
                    {
                        break;
                    }
                }
            }
            else{
                int b=std::stoi(i);
                rpn.push(b);
            }
        }
        return rpn.top();
    }
};
