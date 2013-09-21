
#include "Node.hpp"
#include <CST/Element.hpp>

using namespace CST;

Node::Node() : 
	m_children()
{
}

Node::~Node()
{
}

Node::children_t Node::getChildren() const
{
	return e4c::returned(m_children);
}



