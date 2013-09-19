#include "BintreeFactory.hpp"
#include "BintreePackage.hpp"
#include "include.hpp"

using namespace bintree;

BintreeFactory::BintreeFactory()
{
	m_ePackage = BintreePackage::_instance();
	// std::bind(&BintreeFactory::createBinTreeNode, this);
	// m_ePackage->getTag_BinTreeNode();
}

const BintreeFactory_ptr BintreeFactory::_instance()
{
	static BintreeFactory __instance;
	return &__instance;
}

BinTreeNode_ptr BintreeFactory::createBinTreeNode() const
{
	return new BinTreeNode();
}

