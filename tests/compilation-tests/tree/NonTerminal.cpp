
#include "NonTerminal.hpp"
#include <tree/TreePackage.hpp>
#include <tree/TreeNode.hpp>

using namespace tree;

/*PROTECTED REGION ID(tree::NonTerminal include) START*/
/*PROTECTED REGION END*/

NonTerminal::NonTerminal() :
    m_children()
{
    /*PROTECTED REGION ID(NonTerminal constructor) START*/
    /*PROTECTED REGION END*/
}

NonTerminal::~NonTerminal()
{
    /*PROTECTED REGION ID(NonTerminal destructor) START*/
    /*PROTECTED REGION END*/
}

NonTerminal::children_t NonTerminal::getChildren() const
{
    return e4c::returned(m_children);
}


void NonTerminal::addChildren(tree::TreeNode_ptr children_)
{
    m_children.push_back(std::unique_ptr < tree::TreeNode >(children_));
}

void NonTerminal::addAllChildren(const children_t& children_)
{
    for (auto i = children_.begin(); i != children_.end(); i++)
        addChildren(*i);
}



/*PROTECTED REGION ID(tree::NonTerminal implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NonTerminal::eClassImpl() const
{
    return TreePackage::_instance()->getNonTerminal();
}

