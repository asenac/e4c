#ifndef EMF_CPP_BINTREE_PACKAGE_HPP
#define EMF_CPP_BINTREE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <bintree/fwd.hpp>

namespace bintree
{


class BintreePackage : public ::ecore::EPackage
{
public:
    static const BintreePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_BinTreeNode() const;
 
 	// Structural features
 	e4c::tag_t getTag_BinTreeNode__parent() const;
 	e4c::tag_t getTag_BinTreeNode__left() const;
 	e4c::tag_t getTag_BinTreeNode__right() const;
 	e4c::tag_t getTag_BinTreeNode__data() const;

protected:
    BintreePackage();
};

} // bintree


#endif // EMF_CPP_BINTREE_PACKAGE_HPP
