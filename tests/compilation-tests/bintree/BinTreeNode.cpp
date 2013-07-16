
#include "BinTreeNode.hpp"
#include <bintree/BinTreeNode.hpp>

using namespace bintree;

BinTreeNode::BinTreeNode() : parent(this), left(this), right(this), data(this)
{
}

BinTreeNode::~BinTreeNode()
{
}

