
#include "BinTreeNode.hpp"
#include <bintree/BintreePackage.hpp>
#include <bintree/BinTreeNode.hpp>

using namespace bintree;

/*PROTECTED REGION ID(bintree::BinTreeNode include) START*/
/*PROTECTED REGION END*/

BinTreeNode::BinTreeNode() : 
	m_parent(),
    m_left(),
    m_right(),
    m_data()
{
	/*PROTECTED REGION ID(BinTreeNode constructor) START*/
	/*PROTECTED REGION END*/
}

BinTreeNode::~BinTreeNode()
{
	/*PROTECTED REGION ID(BinTreeNode destructor) START*/
	/*PROTECTED REGION END*/
}

BinTreeNode::parent_t BinTreeNode::getParent() const
{
	return e4c::returned(m_parent);
}

void BinTreeNode::setParent(parent_t parent_)
{
	if (m_parent == parent_)
		return;
	m_parent = parent_;
}

BinTreeNode::left_t BinTreeNode::getLeft() const
{
	return e4c::returned(m_left);
}


void BinTreeNode::setLeft(left_t left_)
{
	m_left.reset(left_);
}

BinTreeNode::left_t BinTreeNode::releaseLeft()
{
	return m_left.release();
}

BinTreeNode::right_t BinTreeNode::getRight() const
{
	return e4c::returned(m_right);
}


void BinTreeNode::setRight(right_t right_)
{
	m_right.reset(right_);
}

BinTreeNode::right_t BinTreeNode::releaseRight()
{
	return m_right.release();
}

void BinTreeNode::setData(data_t _data)
{
	m_data = _data;;
}

BinTreeNode::data_t BinTreeNode::getData() const
{
	return m_data;
}



/*PROTECTED REGION ID(bintree::BinTreeNode implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BinTreeNode::eClassImpl() const
{
	return BintreePackage::_instance()->getBinTreeNode();
}
 
