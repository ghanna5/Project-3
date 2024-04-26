

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TODO: Your code here
		CPSC131::MyStack<char> first;
		CPSC131::MyQueue<char> second;

		for (size_t i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]))
            {
				first.push(tolower(s[i]));
                second.enqueue(tolower(s[i]));
            }
        }

        while (!second.empty() && !first.empty())
        {
            if (first.top() != second.front())
                return false;

            first.pop();
			second.dequeue();
        }

        return true;
	}
}