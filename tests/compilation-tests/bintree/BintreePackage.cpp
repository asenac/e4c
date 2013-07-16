#include "BintreePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace bintree;

BintreePackage::BintreePackage()
{
}

BintreePackage_ptr BintreePackage::_instance()
{
	static BintreePackage __instance;
	return &__instance;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode()
{
	return e4c::tag< BinTreeNode >::get();
}
 
e4c::tag_t BintreePackage::getTag_BinTreeNode__parent()
{
	return e4c::tag< BinTreeNode__parent_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__left()
{
	return e4c::tag< BinTreeNode__left_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__right()
{
	return e4c::tag< BinTreeNode__right_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__data()
{
	return e4c::tag< BinTreeNode__data_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_bintree()
{
	return ::bintree::BintreePackage::_instance();
}
