#ifndef EMF_CPP_BINTREE_PACKAGE_HPP
#define EMF_CPP_BINTREE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <bintree/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace bintree
{


class BintreePackage : public ::ecore::EPackage
{
public:
    static const BintreePackage_ptr _instance();

 	::ecore::EClass_ptr getBinTreeNode() const;
 	
 	::ecore::EReference_ptr getBinTreeNode__parent() const;
 	::ecore::EReference_ptr getBinTreeNode__left() const;
 	::ecore::EReference_ptr getBinTreeNode__right() const;
 	::ecore::EAttribute_ptr getBinTreeNode__data() const;

 	e4c::tag_t getTag_BinTreeNode() const;
 
 	e4c::tag_t getTag_BinTreeNode__parent() const;
 	e4c::tag_t getTag_BinTreeNode__left() const;
 	e4c::tag_t getTag_BinTreeNode__right() const;
 	e4c::tag_t getTag_BinTreeNode__data() const;

protected:
    BintreePackage();
    
 	::ecore::EClass_ptr m_BinTreeNode;
 	::ecore::EReference_ptr m_BinTreeNode__parent;
 	::ecore::EReference_ptr m_BinTreeNode__left;
 	::ecore::EReference_ptr m_BinTreeNode__right;
 	::ecore::EAttribute_ptr m_BinTreeNode__data;
};

} // bintree


#endif // EMF_CPP_BINTREE_PACKAGE_HPP
