
#include "Node.hpp"
#include <CST/CSTPackage.hpp>
#include <CST/Element.hpp>

using namespace CST;

/*PROTECTED REGION ID(CST::Node include) START*/
/*PROTECTED REGION END*/

Node::Node() : 
	m_children()
{
	/*PROTECTED REGION ID(Node constructor) START*/
	/*PROTECTED REGION END*/
}

Node::~Node()
{
	/*PROTECTED REGION ID(Node destructor) START*/
	/*PROTECTED REGION END*/
}

Node::children_t Node::getChildren() const
{
	return e4c::returned(m_children);
}


void Node::addChildren(CST::Element_ptr children_)
{
	m_children.push_back(std::unique_ptr < CST::Element >(children_));
}

void Node::addAllChildren(const children_t& children_)
{
	for (auto i = children_.begin(); i != children_.end(); i++)
		addChildren(*i);
}



/*PROTECTED REGION ID(CST::Node implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Node::eClassImpl() const
{
	return CSTPackage::_instance()->getNode();
}
 
