#include "CSTFactory.hpp"
#include "CSTPackage.hpp"
#include "include.hpp"

using namespace CST;

CSTFactory::CSTFactory()
{
    // m_ePackage = CSTPackage::_instance();
    // std::bind(&CSTFactory::createTree, this);
    // m_ePackage->getTag_Tree();
    // std::bind(&CSTFactory::createElement, this);
    // m_ePackage->getTag_Element();
    // std::bind(&CSTFactory::createNode, this);
    // m_ePackage->getTag_Node();
    // std::bind(&CSTFactory::createLeaf, this);
    // m_ePackage->getTag_Leaf();
}

const CSTFactory_ptr CSTFactory::_instance()
{
    static CSTFactory __instance;
    return &__instance;
}

Tree_ptr CSTFactory::createTree() const
{
    return new Tree();
}

Element_ptr CSTFactory::createElement() const
{
    return new Element();
}

Node_ptr CSTFactory::createNode() const
{
    return new Node();
}

Leaf_ptr CSTFactory::createLeaf() const
{
    return new Leaf();
}

