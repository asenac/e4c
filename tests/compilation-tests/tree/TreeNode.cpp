
#include "TreeNode.hpp"
#include <tree/TreePackage.hpp>
#include <tree/TreeNode.hpp>

using namespace tree;

/*PROTECTED REGION ID(tree::TreeNode include) START*/
/*PROTECTED REGION END*/

TreeNode::TreeNode() :
    m_data(),
    m_parent()
{
    /*PROTECTED REGION ID(TreeNode constructor) START*/
    /*PROTECTED REGION END*/
}

TreeNode::~TreeNode()
{
    /*PROTECTED REGION ID(TreeNode destructor) START*/
    /*PROTECTED REGION END*/
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

void TreeNode::setParent(parent_t parent_)
{
    if (m_parent == parent_)
        return;
    m_parent = parent_;
}



/*PROTECTED REGION ID(tree::TreeNode implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TreeNode::eClassImpl() const
{
    return TreePackage::_instance()->getTreeNode();
}

