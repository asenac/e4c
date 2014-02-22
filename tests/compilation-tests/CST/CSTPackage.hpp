#ifndef EMF_CPP_CST_PACKAGE_HPP
#define EMF_CPP_CST_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <CST/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace CST
{


class CSTPackage : public ::ecore::EPackage
{
public:
    static const CSTPackage_ptr _instance();

     ::ecore::EClass_ptr getTree() const;
     ::ecore::EClass_ptr getElement() const;
     ::ecore::EClass_ptr getNode() const;
     ::ecore::EClass_ptr getLeaf() const;

     ::ecore::EAttribute_ptr getElement__kind() const;
     ::ecore::EReference_ptr getNode__children() const;
     ::ecore::EAttribute_ptr getLeaf__value() const;
     ::ecore::EAttribute_ptr getLeaf__pos() const;
     ::ecore::EAttribute_ptr getLeaf__line() const;

     e4c::tag_t getTag_Tree() const;
     e4c::tag_t getTag_Element() const;
     e4c::tag_t getTag_Node() const;
     e4c::tag_t getTag_Leaf() const;

     e4c::tag_t getTag_Element__kind() const;
     e4c::tag_t getTag_Node__children() const;
     e4c::tag_t getTag_Leaf__value() const;
     e4c::tag_t getTag_Leaf__pos() const;
     e4c::tag_t getTag_Leaf__line() const;

protected:
    CSTPackage();

     ::ecore::EClass_ptr m_Tree;
     ::ecore::EClass_ptr m_Element;
     ::ecore::EClass_ptr m_Node;
     ::ecore::EClass_ptr m_Leaf;
     ::ecore::EAttribute_ptr m_Element__kind;
     ::ecore::EReference_ptr m_Node__children;
     ::ecore::EAttribute_ptr m_Leaf__value;
     ::ecore::EAttribute_ptr m_Leaf__pos;
     ::ecore::EAttribute_ptr m_Leaf__line;
};

} // CST


#endif // EMF_CPP_CST_PACKAGE_HPP
