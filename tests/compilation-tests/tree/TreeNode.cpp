
#include "TreeNode.hpp"
#include <tree/TreeNode.hpp>

using namespace tree;

TreeNode::TreeNode() : data(this), parent(this)
{
}

TreeNode::~TreeNode()
{
}

