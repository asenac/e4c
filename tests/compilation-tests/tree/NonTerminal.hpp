
#ifndef EMF_CPP_TREE_NONTERMINAL__HPP
#define EMF_CPP_TREE_NONTERMINAL__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <tree/TreeNode.hpp>

#include <e4c/mapping.hpp>

namespace tree
{


class NonTerminal :  public virtual ::tree::TreeNode
{
public:

    typedef NonTerminal_ptr ptr_type;

    NonTerminal();
    virtual ~NonTerminal();

    typedef std::vector < tree::TreeNode_ptr > children_t;

    children_t getChildren() const;
    void addChildren(tree::TreeNode_ptr children_);
    void addAllChildren(const children_t& children_);


    /*PROTECTED REGION ID(tree::NonTerminal public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class TreePackage;

    std::vector < std::unique_ptr < tree::TreeNode > > m_children;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(tree::NonTerminal protected) START*/
    /*PROTECTED REGION END*/
};

} // tree


#endif // EMF_CPP_TREE_NONTERMINAL__HPP
