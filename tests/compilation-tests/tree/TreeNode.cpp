
#include "TreeNode.hpp"
#include <tree/TreeNode.hpp>

using namespace tree;

TreeNode::TreeNode() : 
	m_data(),
    m_parent()
{
}

TreeNode::~TreeNode()
{
}

void TreeNode::setData(data_t _data)
{
	m_data = _data;;
}

data_t TreeNode::getData() const
{
	return m_data;
}



