#include "CSTPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace CST;

CSTPackage::CSTPackage()
{
}

CSTPackage_ptr CSTPackage::_instance()
{
	static CSTPackage __instance;
	return &__instance;
}

e4c::tag_t CSTPackage::getTag_Tree()
{
	return e4c::tag< Tree >::get();
}
 
e4c::tag_t CSTPackage::getTag_Element()
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t CSTPackage::getTag_Node()
{
	return e4c::tag< Node >::get();
}
 
e4c::tag_t CSTPackage::getTag_Leaf()
{
	return e4c::tag< Leaf >::get();
}
 
e4c::tag_t CSTPackage::getTag_Element__kind()
{
	return e4c::tag< Element__kind_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Node__children()
{
	return e4c::tag< Node__children_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__value()
{
	return e4c::tag< Leaf__value_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__pos()
{
	return e4c::tag< Leaf__pos_tag >::get();
}

e4c::tag_t CSTPackage::getTag_Leaf__line()
{
	return e4c::tag< Leaf__line_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_CST()
{
	return ::CST::CSTPackage::_instance();
}
