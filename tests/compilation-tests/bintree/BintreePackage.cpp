#include "BintreePackage.hpp"
#include "BintreeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace bintree;

BintreePackage::BintreePackage()
{
    m_eFactoryInstance = BintreeFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_BinTreeNode = ecoreFactory->createEClass();
    m_BinTreeNode->setName("BinTreeNode");
    addEClassifiers(m_BinTreeNode);


    {
        m_BinTreeNode__parent = ecoreFactory->createEReference();
        m_BinTreeNode__parent->setName("parent");
        m_BinTreeNode->addEStructuralFeatures(m_BinTreeNode__parent);
        m_BinTreeNode->addEAllStructuralFeatures(m_BinTreeNode__parent);
        m_BinTreeNode->addEReferences(m_BinTreeNode__parent);
        m_BinTreeNode->addEAllReferences(m_BinTreeNode__parent);
    }
    {
        m_BinTreeNode__left = ecoreFactory->createEReference();
        m_BinTreeNode__left->setName("left");
        m_BinTreeNode->addEStructuralFeatures(m_BinTreeNode__left);
        m_BinTreeNode->addEAllStructuralFeatures(m_BinTreeNode__left);
        m_BinTreeNode->addEReferences(m_BinTreeNode__left);
        m_BinTreeNode->addEAllReferences(m_BinTreeNode__left);
    }
    {
        m_BinTreeNode__right = ecoreFactory->createEReference();
        m_BinTreeNode__right->setName("right");
        m_BinTreeNode->addEStructuralFeatures(m_BinTreeNode__right);
        m_BinTreeNode->addEAllStructuralFeatures(m_BinTreeNode__right);
        m_BinTreeNode->addEReferences(m_BinTreeNode__right);
        m_BinTreeNode->addEAllReferences(m_BinTreeNode__right);
    }
    {
        m_BinTreeNode__data = ecoreFactory->createEAttribute();
        m_BinTreeNode__data->setName("data");
        m_BinTreeNode->addEStructuralFeatures(m_BinTreeNode__data);
        m_BinTreeNode->addEAllStructuralFeatures(m_BinTreeNode__data);
        m_BinTreeNode->addEAttributes(m_BinTreeNode__data);
        m_BinTreeNode->addEAllAttributes(m_BinTreeNode__data);
    }



    m_BinTreeNode->addFeatureAccesors(m_BinTreeNode__parent,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< bintree::BinTreeNode_ptr >(o)->getParent()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BinTreeNode->addFeatureAccesors(m_BinTreeNode__left,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< bintree::BinTreeNode_ptr >(o)->getLeft()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BinTreeNode->addFeatureAccesors(m_BinTreeNode__right,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< bintree::BinTreeNode_ptr >(o)->getRight()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BinTreeNode->addFeatureAccesors(m_BinTreeNode__data,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< bintree::BinTreeNode_ptr >(o)->getData()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const BintreePackage_ptr BintreePackage::_instance()
{
    static BintreePackage __instance;
    return &__instance;
}

ecore::EClass_ptr BintreePackage::getBinTreeNode() const
{
    return m_BinTreeNode;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode() const
{
    return e4c::tag< BinTreeNode >::get();
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__parent() const
{
    return e4c::tag< BinTreeNode__parent_tag >::get();
}

ecore::EReference_ptr BintreePackage::getBinTreeNode__parent() const
{
    return m_BinTreeNode__parent;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__left() const
{
    return e4c::tag< BinTreeNode__left_tag >::get();
}

ecore::EReference_ptr BintreePackage::getBinTreeNode__left() const
{
    return m_BinTreeNode__left;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__right() const
{
    return e4c::tag< BinTreeNode__right_tag >::get();
}

ecore::EReference_ptr BintreePackage::getBinTreeNode__right() const
{
    return m_BinTreeNode__right;
}

e4c::tag_t BintreePackage::getTag_BinTreeNode__data() const
{
    return e4c::tag< BinTreeNode__data_tag >::get();
}

ecore::EAttribute_ptr BintreePackage::getBinTreeNode__data() const
{
    return m_BinTreeNode__data;
}


extern "C" ::ecore::EPackage_ptr e4c_bintree()
{
    return ::bintree::BintreePackage::_instance();
}
