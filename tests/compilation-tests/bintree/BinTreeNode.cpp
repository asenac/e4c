
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

void BinTreeNode::setData(data_t _data)
{
	m_data = _data;;
}

data_t BinTreeNode::getData() const
{
	return m_data;
}



