#ifndef __SYNTAXBASENODE_HPP__
#define __SYNTAXBASENODE_HPP__

#include <string>

class SyntaxBaseNode
{
public:
    SyntaxBaseNode(const std::string& value = "");
    SyntaxBaseNode(const SyntaxBaseNode& otherNode);
    SyntaxBaseNode(const SyntaxBaseNode&& otherNode);
    virtual ~SyntaxBaseNode();
    virtual SyntaxBaseNode& operator=(const SyntaxBaseNode& rhs);
    virtual SyntaxBaseNode& operator=(const SyntaxBaseNode&& rhs);


    virtual std::string getValue();

protected:
    std::string mValue;
};

#endif //__SYNTAXBASENODE_HPP__