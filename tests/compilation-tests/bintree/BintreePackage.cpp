#include "BintreePackage.hpp"
#include "BintreeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace bintree;

BintreePackage::BintreePackage()
{
	m_eFactoryInstance = BintreeFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const BintreePackage_ptr BintreePackage::_instance()
{
	static BintreePackage __instance;
	return &__instance;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode() const
{
	return e4c::tag< BinTreeNode >::get();
}
 
e4c::tag_t BintreePackage::getTag_BinTreeNode__parent() const
{
	return e4c::tag< BinTreeNode__parent_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__left() const
{
	return e4c::tag< BinTreeNode__left_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__right() const
{
	return e4c::tag< BinTreeNode__right_tag >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__data() const
{
	return e4c::tag< BinTreeNode__data_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_bintree()
{
	return ::bintree::BintreePackage::_instance();
}
