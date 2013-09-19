#include "TreeFactory.hpp"
#include "TreePackage.hpp"
#include "include.hpp"

using namespace tree;

TreeFactory::TreeFactory()
{
	m_ePackage = TreePackage::_instance();
	// std::bind(&TreeFactory::createLeaf, this);
	// m_ePackage->getTag_Leaf();
	// std::bind(&TreeFactory::createNonTerminal, this);
	// m_ePackage->getTag_NonTerminal();
}

const TreeFactory_ptr TreeFactory::_instance()
{
	static TreeFactory __instance;
	return &__instance;
}

Leaf_ptr TreeFactory::createLeaf() const
{
	return new Leaf();
}

NonTerminal_ptr TreeFactory::createNonTerminal() const
{
	return new NonTerminal();
}

