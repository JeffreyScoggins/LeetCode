/*
67. Add Binary
Solved
Easy
Topics
Companies
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/


using namespace std;
class Solution {
public:

    string addBinary(string a, string b) {
        string sum = "";
        string carry = "0";



        for (;!a.empty() || !b.empty();) {
            string top = "";
            string bottom = "";



            if (a.empty()){
                a.insert(0,"0");
            }
            if (b.empty()){
                b.insert(0,"0");
            }
            top = a.substr(a.length()-1, 1);
            bottom = b.substr(b.length()-1, 1);
            cout<<top<<endl;
            cout<<bottom<<endl;


            if (top == "0" && bottom == "0" && carry == "0") {
                    carry = "0";
                    sum = "0" + sum;
            }
            else if (top == "0" && bottom == "0" && carry == "1") {
                    carry = "0";
                    sum ="1" + sum;
                }
            else if (top == "0" && bottom == "1" && carry == "0") {
                    carry = "0";
                    sum = "1" + sum;
                }
            else if (top == "0" && bottom == "1" && carry == "1") {
                    carry = "1";
                    sum = "0" + sum;
                }
             else if (top == "1" && bottom == "0" && carry == "0") {
                    carry = "0";
                    sum = "1" + sum;
                }
             else if (top == "1" && bottom == "0" && carry == "1") {
                    carry = "1";
                    sum = "0" + sum;
                }
             else if (top == "1" && bottom == "1" && carry == "0") {
                    carry = "1";
                    sum = "0" + sum;
                }
             else if (top == "1" && bottom == "1" && carry == "1") {
                    carry = "1";
                    sum = "1" + sum;
                }



                a.pop_back();
                b.pop_back();



        }

        if (carry == "1"){
            sum = "1" + sum;
            return sum;
        }

        else {
            return sum;
        }


    }

int main() {
    string top = "101";
    string bottom = "1100";
    cout<<addBinary(top, bottom);
    return 0;
}

};