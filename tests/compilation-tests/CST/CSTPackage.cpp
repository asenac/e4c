#include "CSTPackage.hpp"
#include "CSTFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace CST;

CSTPackage::CSTPackage()
{
    m_eFactoryInstance = CSTFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_Tree = ecoreFactory->createEClass();
    m_Tree->setName("Tree");
    addEClassifiers(m_Tree);
    m_Element = ecoreFactory->createEClass();
    m_Element->setName("Element");
    addEClassifiers(m_Element);
    m_Node = ecoreFactory->createEClass();
    m_Node->setName("Node");
    addEClassifiers(m_Node);
    m_Leaf = ecoreFactory->createEClass();
    m_Leaf->setName("Leaf");
    addEClassifiers(m_Leaf);


    {
        m_Element__kind = ecoreFactory->createEAttribute();
        m_Element__kind->setName("kind");
        m_Element->addEStructuralFeatures(m_Element__kind);
        m_Element->addEAllStructuralFeatures(m_Element__kind);
        m_Element->addEAttributes(m_Element__kind);
        m_Element->addEAllAttributes(m_Element__kind);
    }
    {
        m_Node__children = ecoreFactory->createEReference();
        m_Node__children->setName("children");
        m_Node->addEStructuralFeatures(m_Node__children);
        m_Node->addEAllStructuralFeatures(m_Node__children);
        m_Node->addEReferences(m_Node__children);
        m_Node->addEAllReferences(m_Node__children);
    }
    {
        m_Leaf__value = ecoreFactory->createEAttribute();
        m_Leaf__value->setName("value");
        m_Leaf->addEStructuralFeatures(m_Leaf__value);
        m_Leaf->addEAllStructuralFeatures(m_Leaf__value);
        m_Leaf->addEAttributes(m_Leaf__value);
        m_Leaf->addEAllAttributes(m_Leaf__value);
    }
    {
        m_Leaf__pos = ecoreFactory->createEAttribute();
        m_Leaf__pos->setName("pos");
        m_Leaf->addEStructuralFeatures(m_Leaf__pos);
        m_Leaf->addEAllStructuralFeatures(m_Leaf__pos);
        m_Leaf->addEAttributes(m_Leaf__pos);
        m_Leaf->addEAllAttributes(m_Leaf__pos);
    }
    {
        m_Leaf__line = ecoreFactory->createEAttribute();
        m_Leaf__line->setName("line");
        m_Leaf->addEStructuralFeatures(m_Leaf__line);
        m_Leaf->addEAllStructuralFeatures(m_Leaf__line);
        m_Leaf->addEAttributes(m_Leaf__line);
        m_Leaf->addEAllAttributes(m_Leaf__line);
    }

    m_Tree->addESuperTypes(m_Node);
    m_Tree->addAllEAllOperations(m_Node->getEOperations());
    m_Tree->addAllEAllReferences(m_Node->getEReferences());
    m_Tree->addAllEAllAttributes(m_Node->getEAttributes());
    m_Tree->addAllEAllStructuralFeatures(m_Node->getEStructuralFeatures());
    m_Node->addESuperTypes(m_Element);
    m_Node->addAllEAllOperations(m_Element->getEOperations());
    m_Node->addAllEAllReferences(m_Element->getEReferences());
    m_Node->addAllEAllAttributes(m_Element->getEAttributes());
    m_Node->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_Leaf->addESuperTypes(m_Element);
    m_Leaf->addAllEAllOperations(m_Element->getEOperations());
    m_Leaf->addAllEAllReferences(m_Element->getEReferences());
    m_Leaf->addAllEAllAttributes(m_Element->getEAttributes());
    m_Leaf->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());


    m_Element->addFeatureAccesors(m_Element__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< CST::Element_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Node->addFeatureAccesors(m_Node__children,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< CST::Node_ptr >(o)->getChildren()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Leaf->addFeatureAccesors(m_Leaf__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< CST::Leaf_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Leaf->addFeatureAccesors(m_Leaf__pos,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< CST::Leaf_ptr >(o)->getPos()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Leaf->addFeatureAccesors(m_Leaf__line,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< CST::Leaf_ptr >(o)->getLine()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const CSTPackage_ptr CSTPackage::_instance()
{
    static CSTPackage __instance;
    return &__instance;
}

ecore::EClass_ptr CSTPackage::getTree() const
{
    return m_Tree;
}

e4c::tag_t CSTPackage::getTag_Tree() const
{
    return e4c::tag< Tree >::get();
}

ecore::EClass_ptr CSTPackage::getElement() const
{
    return m_Element;
}

e4c::tag_t CSTPackage::getTag_Element() const
{
    return e4c::tag< Element >::get();
}

ecore::EClass_ptr CSTPackage::getNode() const
{
    return m_Node;
}

e4c::tag_t CSTPackage::getTag_Node() const
{
    return e4c::tag< Node >::get();
}

ecore::EClass_ptr CSTPackage::getLeaf() const
{
    return m_Leaf;
}

e4c::tag_t CSTPackage::getTag_Leaf() const
{
    return e4c::tag< Leaf >::get();
}

e4c::tag_t CSTPackage::getTag_Element__kind() const
{
    return e4c::tag< Element__kind_tag >::get();
}

ecore::EAttribute_ptr CSTPackage::getElement__kind() const
{
    return m_Element__kind;
}

e4c::tag_t CSTPackage::getTag_Node__children() const
{
    return e4c::tag< Node__children_tag >::get();
}

ecore::EReference_ptr CSTPackage::getNode__children() const
{
    return m_Node__children;
}

e4c::tag_t CSTPackage::getTag_Leaf__value() const
{
    return e4c::tag< Leaf__value_tag >::get();
}

ecore::EAttribute_ptr CSTPackage::getLeaf__value() const
{
    return m_Leaf__value;
}

e4c::tag_t CSTPackage::getTag_Leaf__pos() const
{
    return e4c::tag< Leaf__pos_tag >::get();
}

ecore::EAttribute_ptr CSTPackage::getLeaf__pos() const
{
    return m_Leaf__pos;
}

e4c::tag_t CSTPackage::getTag_Leaf__line() const
{
    return e4c::tag< Leaf__line_tag >::get();
}

ecore::EAttribute_ptr CSTPackage::getLeaf__line() const
{
    return m_Leaf__line;
}


extern "C" ::ecore::EPackage_ptr e4c_CST()
{
    return ::CST::CSTPackage::_instance();
}
