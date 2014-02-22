
#ifndef EMF_CPP_BINTREE_BINTREENODE__HPP
#define EMF_CPP_BINTREE_BINTREENODE__HPP

#include <bintree/fwd.hpp>
#include <bintree/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace bintree
{


class BinTreeNode : ::ecore::EObject
{
public:

    typedef BinTreeNode_ptr ptr_type;

    BinTreeNode();
    virtual ~BinTreeNode();

    typedef bintree::BinTreeNode_ptr parent_t;
    typedef bintree::BinTreeNode_ptr left_t;
    typedef bintree::BinTreeNode_ptr right_t;
    typedef ::ecore::EString data_t;

    parent_t getParent() const;
    void setParent(parent_t parent_);
    left_t getLeft() const;
    void setLeft(left_t left_);
    left_t releaseLeft();
    right_t getRight() const;
    void setRight(right_t right_);
    right_t releaseRight();
    void setData(data_t _data);
    data_t getData() const;


    /*PROTECTED REGION ID(bintree::BinTreeNode public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class BintreePackage;

    bintree::BinTreeNode_ptr m_parent;
    std::unique_ptr < bintree::BinTreeNode > m_left;
    std::unique_ptr < bintree::BinTreeNode > m_right;
    data_t m_data;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(bintree::BinTreeNode protected) START*/
    /*PROTECTED REGION END*/
};

} // bintree


#endif // EMF_CPP_BINTREE_BINTREENODE__HPP
