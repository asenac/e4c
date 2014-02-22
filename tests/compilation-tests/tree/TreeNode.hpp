
#ifndef EMF_CPP_TREE_TREENODE__HPP
#define EMF_CPP_TREE_TREENODE__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace tree
{


class TreeNode : ::ecore::EObject
{
public:

    typedef TreeNode_ptr ptr_type;

    virtual ~TreeNode();

    typedef ::ecore::EString data_t;
    typedef tree::TreeNode_ptr parent_t;

    void setData(data_t _data);
    data_t getData() const;
    parent_t getParent() const;
    void setParent(parent_t parent_);


    /*PROTECTED REGION ID(tree::TreeNode public) START*/
    /*PROTECTED REGION END*/

protected:
    TreeNode();

    friend class TreePackage;

    data_t m_data;
    tree::TreeNode_ptr m_parent;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(tree::TreeNode protected) START*/
    /*PROTECTED REGION END*/
};

} // tree


#endif // EMF_CPP_TREE_TREENODE__HPP
