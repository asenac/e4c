
#include "BinTreeNode.hpp"
#include <bintree/BinTreeNode.hpp>

using namespace bintree;

BinTreeNode::BinTreeNode() : 
	m_parent(),
    m_left(),
    m_right(),
    m_data()
{
}

BinTreeNode::~BinTreeNode()
{
}

BinTreeNode::parent_t BinTreeNode::getParent() const
{
	return e4c::returned(m_parent);
}

BinTreeNode::left_t BinTreeNode::getLeft() const
{
	return e4c::returned(m_left);
}

BinTreeNode::right_t BinTreeNode::getRight() const
{
	return e4c::returned(m_right);
}

void BinTreeNode::setData(data_t _data)
{
	m_data = _data;;
}

BinTreeNode::data_t BinTreeNode::getData() const
{
	return m_data;
}



