
#include "NonTerminal.hpp"
#include <tree/TreeNode.hpp>

using namespace tree;

NonTerminal::NonTerminal() : 
	m_children()
{
}

NonTerminal::~NonTerminal()
{
}

NonTerminal::children_t NonTerminal::getChildren() const
{
	return e4c::returned(m_children);
}



