
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

TreeNode::data_t TreeNode::getData() const
{
	return m_data;
}

TreeNode::parent_t TreeNode::getParent() const
{
	return e4c::returned(m_parent);
}



