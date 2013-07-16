#ifndef EMF_CPP_BINTREE_PACKAGE_HPP
#define EMF_CPP_BINTREE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <bintree/fwd.hpp>

namespace bintree
{


class BintreePackage : public ::ecore::EPackage
{
public:
    static BintreePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_BinTreeNode();
 
 	// Structural features
 	e4c::tag_t getTag_BinTreeNode__parent();
 	e4c::tag_t getTag_BinTreeNode__left();
 	e4c::tag_t getTag_BinTreeNode__right();
 	e4c::tag_t getTag_BinTreeNode__data();

protected:
    BintreePackage();
};

} // bintree


#endif // EMF_CPP_BINTREE_PACKAGE_HPP
