#include "StatementPackage.hpp"
#include "StatementFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::statement;

StatementPackage::StatementPackage()
{
    m_eFactoryInstance = StatementFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_AbstractStatement = ecoreFactory->createEClass();
    m_AbstractStatement->setName("AbstractStatement");
    addEClassifiers(m_AbstractStatement);
    m_ExpandStatement = ecoreFactory->createEClass();
    m_ExpandStatement->setName("ExpandStatement");
    addEClassifiers(m_ExpandStatement);
    m_ExpressionStatement = ecoreFactory->createEClass();
    m_ExpressionStatement->setName("ExpressionStatement");
    addEClassifiers(m_ExpressionStatement);
    m_ErrorStatement = ecoreFactory->createEClass();
    m_ErrorStatement->setName("ErrorStatement");
    addEClassifiers(m_ErrorStatement);
    m_AbstractStatementWithBody = ecoreFactory->createEClass();
    m_AbstractStatementWithBody->setName("AbstractStatementWithBody");
    addEClassifiers(m_AbstractStatementWithBody);
    m_FileStatement = ecoreFactory->createEClass();
    m_FileStatement->setName("FileStatement");
    addEClassifiers(m_FileStatement);
    m_ForEachStatement = ecoreFactory->createEClass();
    m_ForEachStatement->setName("ForEachStatement");
    addEClassifiers(m_ForEachStatement);
    m_IfStatement = ecoreFactory->createEClass();
    m_IfStatement->setName("IfStatement");
    addEClassifiers(m_IfStatement);
    m_LetStatement = ecoreFactory->createEClass();
    m_LetStatement->setName("LetStatement");
    addEClassifiers(m_LetStatement);
    m_ProtectStatement = ecoreFactory->createEClass();
    m_ProtectStatement->setName("ProtectStatement");
    addEClassifiers(m_ProtectStatement);
    m_TextStatement = ecoreFactory->createEClass();
    m_TextStatement->setName("TextStatement");
    addEClassifiers(m_TextStatement);


    {
        m_ExpandStatement__foreach = ecoreFactory->createEAttribute();
        m_ExpandStatement__foreach->setName("foreach");
        m_ExpandStatement->addEStructuralFeatures(m_ExpandStatement__foreach);
        m_ExpandStatement->addEAllStructuralFeatures(m_ExpandStatement__foreach);
        m_ExpandStatement->addEAttributes(m_ExpandStatement__foreach);
        m_ExpandStatement->addEAllAttributes(m_ExpandStatement__foreach);
    }
    {
        m_ExpandStatement__parameters = ecoreFactory->createEReference();
        m_ExpandStatement__parameters->setName("parameters");
        m_ExpandStatement->addEStructuralFeatures(m_ExpandStatement__parameters);
        m_ExpandStatement->addEAllStructuralFeatures(m_ExpandStatement__parameters);
        m_ExpandStatement->addEReferences(m_ExpandStatement__parameters);
        m_ExpandStatement->addEAllReferences(m_ExpandStatement__parameters);
    }
    {
        m_ExpandStatement__separator = ecoreFactory->createEReference();
        m_ExpandStatement__separator->setName("separator");
        m_ExpandStatement->addEStructuralFeatures(m_ExpandStatement__separator);
        m_ExpandStatement->addEAllStructuralFeatures(m_ExpandStatement__separator);
        m_ExpandStatement->addEReferences(m_ExpandStatement__separator);
        m_ExpandStatement->addEAllReferences(m_ExpandStatement__separator);
    }
    {
        m_ExpandStatement__target = ecoreFactory->createEReference();
        m_ExpandStatement__target->setName("target");
        m_ExpandStatement->addEStructuralFeatures(m_ExpandStatement__target);
        m_ExpandStatement->addEAllStructuralFeatures(m_ExpandStatement__target);
        m_ExpandStatement->addEReferences(m_ExpandStatement__target);
        m_ExpandStatement->addEAllReferences(m_ExpandStatement__target);
    }
    {
        m_ExpandStatement__definition = ecoreFactory->createEReference();
        m_ExpandStatement__definition->setName("definition");
        m_ExpandStatement->addEStructuralFeatures(m_ExpandStatement__definition);
        m_ExpandStatement->addEAllStructuralFeatures(m_ExpandStatement__definition);
        m_ExpandStatement->addEReferences(m_ExpandStatement__definition);
        m_ExpandStatement->addEAllReferences(m_ExpandStatement__definition);
    }
    {
        m_ExpressionStatement__expression = ecoreFactory->createEReference();
        m_ExpressionStatement__expression->setName("expression");
        m_ExpressionStatement->addEStructuralFeatures(m_ExpressionStatement__expression);
        m_ExpressionStatement->addEAllStructuralFeatures(m_ExpressionStatement__expression);
        m_ExpressionStatement->addEReferences(m_ExpressionStatement__expression);
        m_ExpressionStatement->addEAllReferences(m_ExpressionStatement__expression);
    }
    {
        m_ErrorStatement__message = ecoreFactory->createEReference();
        m_ErrorStatement__message->setName("message");
        m_ErrorStatement->addEStructuralFeatures(m_ErrorStatement__message);
        m_ErrorStatement->addEAllStructuralFeatures(m_ErrorStatement__message);
        m_ErrorStatement->addEReferences(m_ErrorStatement__message);
        m_ErrorStatement->addEAllReferences(m_ErrorStatement__message);
    }
    {
        m_AbstractStatementWithBody__body = ecoreFactory->createEReference();
        m_AbstractStatementWithBody__body->setName("body");
        m_AbstractStatementWithBody->addEStructuralFeatures(m_AbstractStatementWithBody__body);
        m_AbstractStatementWithBody->addEAllStructuralFeatures(m_AbstractStatementWithBody__body);
        m_AbstractStatementWithBody->addEReferences(m_AbstractStatementWithBody__body);
        m_AbstractStatementWithBody->addEAllReferences(m_AbstractStatementWithBody__body);
    }
    {
        m_FileStatement__fileNameExpression = ecoreFactory->createEReference();
        m_FileStatement__fileNameExpression->setName("fileNameExpression");
        m_FileStatement->addEStructuralFeatures(m_FileStatement__fileNameExpression);
        m_FileStatement->addEAllStructuralFeatures(m_FileStatement__fileNameExpression);
        m_FileStatement->addEReferences(m_FileStatement__fileNameExpression);
        m_FileStatement->addEAllReferences(m_FileStatement__fileNameExpression);
    }
    {
        m_FileStatement__outletNameIdentifier = ecoreFactory->createEReference();
        m_FileStatement__outletNameIdentifier->setName("outletNameIdentifier");
        m_FileStatement->addEStructuralFeatures(m_FileStatement__outletNameIdentifier);
        m_FileStatement->addEAllStructuralFeatures(m_FileStatement__outletNameIdentifier);
        m_FileStatement->addEReferences(m_FileStatement__outletNameIdentifier);
        m_FileStatement->addEAllReferences(m_FileStatement__outletNameIdentifier);
    }
    {
        m_FileStatement__once = ecoreFactory->createEAttribute();
        m_FileStatement__once->setName("once");
        m_FileStatement->addEStructuralFeatures(m_FileStatement__once);
        m_FileStatement->addEAllStructuralFeatures(m_FileStatement__once);
        m_FileStatement->addEAttributes(m_FileStatement__once);
        m_FileStatement->addEAllAttributes(m_FileStatement__once);
    }
    {
        m_ForEachStatement__target = ecoreFactory->createEReference();
        m_ForEachStatement__target->setName("target");
        m_ForEachStatement->addEStructuralFeatures(m_ForEachStatement__target);
        m_ForEachStatement->addEAllStructuralFeatures(m_ForEachStatement__target);
        m_ForEachStatement->addEReferences(m_ForEachStatement__target);
        m_ForEachStatement->addEAllReferences(m_ForEachStatement__target);
    }
    {
        m_ForEachStatement__separator = ecoreFactory->createEReference();
        m_ForEachStatement__separator->setName("separator");
        m_ForEachStatement->addEStructuralFeatures(m_ForEachStatement__separator);
        m_ForEachStatement->addEAllStructuralFeatures(m_ForEachStatement__separator);
        m_ForEachStatement->addEReferences(m_ForEachStatement__separator);
        m_ForEachStatement->addEAllReferences(m_ForEachStatement__separator);
    }
    {
        m_ForEachStatement__variable = ecoreFactory->createEReference();
        m_ForEachStatement__variable->setName("variable");
        m_ForEachStatement->addEStructuralFeatures(m_ForEachStatement__variable);
        m_ForEachStatement->addEAllStructuralFeatures(m_ForEachStatement__variable);
        m_ForEachStatement->addEReferences(m_ForEachStatement__variable);
        m_ForEachStatement->addEAllReferences(m_ForEachStatement__variable);
    }
    {
        m_ForEachStatement__iteratorName = ecoreFactory->createEReference();
        m_ForEachStatement__iteratorName->setName("iteratorName");
        m_ForEachStatement->addEStructuralFeatures(m_ForEachStatement__iteratorName);
        m_ForEachStatement->addEAllStructuralFeatures(m_ForEachStatement__iteratorName);
        m_ForEachStatement->addEReferences(m_ForEachStatement__iteratorName);
        m_ForEachStatement->addEAllReferences(m_ForEachStatement__iteratorName);
    }
    {
        m_IfStatement__condition = ecoreFactory->createEReference();
        m_IfStatement__condition->setName("condition");
        m_IfStatement->addEStructuralFeatures(m_IfStatement__condition);
        m_IfStatement->addEAllStructuralFeatures(m_IfStatement__condition);
        m_IfStatement->addEReferences(m_IfStatement__condition);
        m_IfStatement->addEAllReferences(m_IfStatement__condition);
    }
    {
        m_IfStatement__elseIf = ecoreFactory->createEReference();
        m_IfStatement__elseIf->setName("elseIf");
        m_IfStatement->addEStructuralFeatures(m_IfStatement__elseIf);
        m_IfStatement->addEAllStructuralFeatures(m_IfStatement__elseIf);
        m_IfStatement->addEReferences(m_IfStatement__elseIf);
        m_IfStatement->addEAllReferences(m_IfStatement__elseIf);
    }
    {
        m_LetStatement__varName = ecoreFactory->createEReference();
        m_LetStatement__varName->setName("varName");
        m_LetStatement->addEStructuralFeatures(m_LetStatement__varName);
        m_LetStatement->addEAllStructuralFeatures(m_LetStatement__varName);
        m_LetStatement->addEReferences(m_LetStatement__varName);
        m_LetStatement->addEAllReferences(m_LetStatement__varName);
    }
    {
        m_LetStatement__varValue = ecoreFactory->createEReference();
        m_LetStatement__varValue->setName("varValue");
        m_LetStatement->addEStructuralFeatures(m_LetStatement__varValue);
        m_LetStatement->addEAllStructuralFeatures(m_LetStatement__varValue);
        m_LetStatement->addEReferences(m_LetStatement__varValue);
        m_LetStatement->addEAllReferences(m_LetStatement__varValue);
    }
    {
        m_ProtectStatement__commentStart = ecoreFactory->createEReference();
        m_ProtectStatement__commentStart->setName("commentStart");
        m_ProtectStatement->addEStructuralFeatures(m_ProtectStatement__commentStart);
        m_ProtectStatement->addEAllStructuralFeatures(m_ProtectStatement__commentStart);
        m_ProtectStatement->addEReferences(m_ProtectStatement__commentStart);
        m_ProtectStatement->addEAllReferences(m_ProtectStatement__commentStart);
    }
    {
        m_ProtectStatement__commentEnd = ecoreFactory->createEReference();
        m_ProtectStatement__commentEnd->setName("commentEnd");
        m_ProtectStatement->addEStructuralFeatures(m_ProtectStatement__commentEnd);
        m_ProtectStatement->addEAllStructuralFeatures(m_ProtectStatement__commentEnd);
        m_ProtectStatement->addEReferences(m_ProtectStatement__commentEnd);
        m_ProtectStatement->addEAllReferences(m_ProtectStatement__commentEnd);
    }
    {
        m_ProtectStatement__id = ecoreFactory->createEReference();
        m_ProtectStatement__id->setName("id");
        m_ProtectStatement->addEStructuralFeatures(m_ProtectStatement__id);
        m_ProtectStatement->addEAllStructuralFeatures(m_ProtectStatement__id);
        m_ProtectStatement->addEReferences(m_ProtectStatement__id);
        m_ProtectStatement->addEAllReferences(m_ProtectStatement__id);
    }
    {
        m_ProtectStatement__disable = ecoreFactory->createEAttribute();
        m_ProtectStatement__disable->setName("disable");
        m_ProtectStatement->addEStructuralFeatures(m_ProtectStatement__disable);
        m_ProtectStatement->addEAllStructuralFeatures(m_ProtectStatement__disable);
        m_ProtectStatement->addEAttributes(m_ProtectStatement__disable);
        m_ProtectStatement->addEAllAttributes(m_ProtectStatement__disable);
    }
    {
        m_TextStatement__value = ecoreFactory->createEAttribute();
        m_TextStatement__value->setName("value");
        m_TextStatement->addEStructuralFeatures(m_TextStatement__value);
        m_TextStatement->addEAllStructuralFeatures(m_TextStatement__value);
        m_TextStatement->addEAttributes(m_TextStatement__value);
        m_TextStatement->addEAllAttributes(m_TextStatement__value);
    }
    {
        m_TextStatement__deleteLine = ecoreFactory->createEAttribute();
        m_TextStatement__deleteLine->setName("deleteLine");
        m_TextStatement->addEStructuralFeatures(m_TextStatement__deleteLine);
        m_TextStatement->addEAllStructuralFeatures(m_TextStatement__deleteLine);
        m_TextStatement->addEAttributes(m_TextStatement__deleteLine);
        m_TextStatement->addEAllAttributes(m_TextStatement__deleteLine);
    }

    m_AbstractStatement->addESuperTypes(m_SyntaxElement);
    m_AbstractStatement->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_AbstractStatement->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_AbstractStatement->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_AbstractStatement->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
    m_ExpandStatement->addESuperTypes(m_AbstractStatement);
    m_ExpandStatement->addAllEAllOperations(m_AbstractStatement->getEOperations());
    m_ExpandStatement->addAllEAllReferences(m_AbstractStatement->getEReferences());
    m_ExpandStatement->addAllEAllAttributes(m_AbstractStatement->getEAttributes());
    m_ExpandStatement->addAllEAllStructuralFeatures(m_AbstractStatement->getEStructuralFeatures());
    m_ExpressionStatement->addESuperTypes(m_AbstractStatement);
    m_ExpressionStatement->addAllEAllOperations(m_AbstractStatement->getEOperations());
    m_ExpressionStatement->addAllEAllReferences(m_AbstractStatement->getEReferences());
    m_ExpressionStatement->addAllEAllAttributes(m_AbstractStatement->getEAttributes());
    m_ExpressionStatement->addAllEAllStructuralFeatures(m_AbstractStatement->getEStructuralFeatures());
    m_ErrorStatement->addESuperTypes(m_AbstractStatement);
    m_ErrorStatement->addAllEAllOperations(m_AbstractStatement->getEOperations());
    m_ErrorStatement->addAllEAllReferences(m_AbstractStatement->getEReferences());
    m_ErrorStatement->addAllEAllAttributes(m_AbstractStatement->getEAttributes());
    m_ErrorStatement->addAllEAllStructuralFeatures(m_AbstractStatement->getEStructuralFeatures());
    m_AbstractStatementWithBody->addESuperTypes(m_AbstractStatement);
    m_AbstractStatementWithBody->addAllEAllOperations(m_AbstractStatement->getEOperations());
    m_AbstractStatementWithBody->addAllEAllReferences(m_AbstractStatement->getEReferences());
    m_AbstractStatementWithBody->addAllEAllAttributes(m_AbstractStatement->getEAttributes());
    m_AbstractStatementWithBody->addAllEAllStructuralFeatures(m_AbstractStatement->getEStructuralFeatures());
    m_FileStatement->addESuperTypes(m_AbstractStatementWithBody);
    m_FileStatement->addAllEAllOperations(m_AbstractStatementWithBody->getEOperations());
    m_FileStatement->addAllEAllReferences(m_AbstractStatementWithBody->getEReferences());
    m_FileStatement->addAllEAllAttributes(m_AbstractStatementWithBody->getEAttributes());
    m_FileStatement->addAllEAllStructuralFeatures(m_AbstractStatementWithBody->getEStructuralFeatures());
    m_ForEachStatement->addESuperTypes(m_AbstractStatementWithBody);
    m_ForEachStatement->addAllEAllOperations(m_AbstractStatementWithBody->getEOperations());
    m_ForEachStatement->addAllEAllReferences(m_AbstractStatementWithBody->getEReferences());
    m_ForEachStatement->addAllEAllAttributes(m_AbstractStatementWithBody->getEAttributes());
    m_ForEachStatement->addAllEAllStructuralFeatures(m_AbstractStatementWithBody->getEStructuralFeatures());
    m_IfStatement->addESuperTypes(m_AbstractStatementWithBody);
    m_IfStatement->addAllEAllOperations(m_AbstractStatementWithBody->getEOperations());
    m_IfStatement->addAllEAllReferences(m_AbstractStatementWithBody->getEReferences());
    m_IfStatement->addAllEAllAttributes(m_AbstractStatementWithBody->getEAttributes());
    m_IfStatement->addAllEAllStructuralFeatures(m_AbstractStatementWithBody->getEStructuralFeatures());
    m_LetStatement->addESuperTypes(m_AbstractStatementWithBody);
    m_LetStatement->addAllEAllOperations(m_AbstractStatementWithBody->getEOperations());
    m_LetStatement->addAllEAllReferences(m_AbstractStatementWithBody->getEReferences());
    m_LetStatement->addAllEAllAttributes(m_AbstractStatementWithBody->getEAttributes());
    m_LetStatement->addAllEAllStructuralFeatures(m_AbstractStatementWithBody->getEStructuralFeatures());
    m_ProtectStatement->addESuperTypes(m_AbstractStatementWithBody);
    m_ProtectStatement->addAllEAllOperations(m_AbstractStatementWithBody->getEOperations());
    m_ProtectStatement->addAllEAllReferences(m_AbstractStatementWithBody->getEReferences());
    m_ProtectStatement->addAllEAllAttributes(m_AbstractStatementWithBody->getEAttributes());
    m_ProtectStatement->addAllEAllStructuralFeatures(m_AbstractStatementWithBody->getEStructuralFeatures());
    m_TextStatement->addESuperTypes(m_AbstractStatement);
    m_TextStatement->addAllEAllOperations(m_AbstractStatement->getEOperations());
    m_TextStatement->addAllEAllReferences(m_AbstractStatement->getEReferences());
    m_TextStatement->addAllEAllAttributes(m_AbstractStatement->getEAttributes());
    m_TextStatement->addAllEAllStructuralFeatures(m_AbstractStatement->getEStructuralFeatures());


    m_ExpandStatement->addFeatureAccesors(m_ExpandStatement__foreach,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpandStatement_ptr >(o)->getForeach()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExpandStatement->addFeatureAccesors(m_ExpandStatement__parameters,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpandStatement_ptr >(o)->getParameters()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExpandStatement->addFeatureAccesors(m_ExpandStatement__separator,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpandStatement_ptr >(o)->getSeparator()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExpandStatement->addFeatureAccesors(m_ExpandStatement__target,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpandStatement_ptr >(o)->getTarget()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExpandStatement->addFeatureAccesors(m_ExpandStatement__definition,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpandStatement_ptr >(o)->getDefinition()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExpressionStatement->addFeatureAccesors(m_ExpressionStatement__expression,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ExpressionStatement_ptr >(o)->getExpression()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ErrorStatement->addFeatureAccesors(m_ErrorStatement__message,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ErrorStatement_ptr >(o)->getMessage()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractStatementWithBody->addFeatureAccesors(m_AbstractStatementWithBody__body,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::AbstractStatementWithBody_ptr >(o)->getBody()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_FileStatement->addFeatureAccesors(m_FileStatement__fileNameExpression,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::FileStatement_ptr >(o)->getFileNameExpression()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_FileStatement->addFeatureAccesors(m_FileStatement__outletNameIdentifier,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::FileStatement_ptr >(o)->getOutletNameIdentifier()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_FileStatement->addFeatureAccesors(m_FileStatement__once,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::FileStatement_ptr >(o)->getOnce()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ForEachStatement->addFeatureAccesors(m_ForEachStatement__target,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ForEachStatement_ptr >(o)->getTarget()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ForEachStatement->addFeatureAccesors(m_ForEachStatement__separator,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ForEachStatement_ptr >(o)->getSeparator()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ForEachStatement->addFeatureAccesors(m_ForEachStatement__variable,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ForEachStatement_ptr >(o)->getVariable()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ForEachStatement->addFeatureAccesors(m_ForEachStatement__iteratorName,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ForEachStatement_ptr >(o)->getIteratorName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_IfStatement->addFeatureAccesors(m_IfStatement__condition,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::IfStatement_ptr >(o)->getCondition()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_IfStatement->addFeatureAccesors(m_IfStatement__elseIf,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::IfStatement_ptr >(o)->getElseIf()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_LetStatement->addFeatureAccesors(m_LetStatement__varName,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::LetStatement_ptr >(o)->getVarName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_LetStatement->addFeatureAccesors(m_LetStatement__varValue,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::LetStatement_ptr >(o)->getVarValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProtectStatement->addFeatureAccesors(m_ProtectStatement__commentStart,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ProtectStatement_ptr >(o)->getCommentStart()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProtectStatement->addFeatureAccesors(m_ProtectStatement__commentEnd,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ProtectStatement_ptr >(o)->getCommentEnd()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProtectStatement->addFeatureAccesors(m_ProtectStatement__id,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ProtectStatement_ptr >(o)->getId()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProtectStatement->addFeatureAccesors(m_ProtectStatement__disable,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::ProtectStatement_ptr >(o)->getDisable()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TextStatement->addFeatureAccesors(m_TextStatement__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::TextStatement_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TextStatement->addFeatureAccesors(m_TextStatement__deleteLine,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::statement::TextStatement_ptr >(o)->getDeleteLine()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const StatementPackage_ptr StatementPackage::_instance()
{
    static StatementPackage __instance;
    return &__instance;
}

ecore::EClass_ptr StatementPackage::getAbstractStatement() const
{
    return m_AbstractStatement;
}

e4c::tag_t StatementPackage::getTag_AbstractStatement() const
{
    return e4c::tag< AbstractStatement >::get();
}

ecore::EClass_ptr StatementPackage::getExpandStatement() const
{
    return m_ExpandStatement;
}

e4c::tag_t StatementPackage::getTag_ExpandStatement() const
{
    return e4c::tag< ExpandStatement >::get();
}

ecore::EClass_ptr StatementPackage::getExpressionStatement() const
{
    return m_ExpressionStatement;
}

e4c::tag_t StatementPackage::getTag_ExpressionStatement() const
{
    return e4c::tag< ExpressionStatement >::get();
}

ecore::EClass_ptr StatementPackage::getErrorStatement() const
{
    return m_ErrorStatement;
}

e4c::tag_t StatementPackage::getTag_ErrorStatement() const
{
    return e4c::tag< ErrorStatement >::get();
}

ecore::EClass_ptr StatementPackage::getAbstractStatementWithBody() const
{
    return m_AbstractStatementWithBody;
}

e4c::tag_t StatementPackage::getTag_AbstractStatementWithBody() const
{
    return e4c::tag< AbstractStatementWithBody >::get();
}

ecore::EClass_ptr StatementPackage::getFileStatement() const
{
    return m_FileStatement;
}

e4c::tag_t StatementPackage::getTag_FileStatement() const
{
    return e4c::tag< FileStatement >::get();
}

ecore::EClass_ptr StatementPackage::getForEachStatement() const
{
    return m_ForEachStatement;
}

e4c::tag_t StatementPackage::getTag_ForEachStatement() const
{
    return e4c::tag< ForEachStatement >::get();
}

ecore::EClass_ptr StatementPackage::getIfStatement() const
{
    return m_IfStatement;
}

e4c::tag_t StatementPackage::getTag_IfStatement() const
{
    return e4c::tag< IfStatement >::get();
}

ecore::EClass_ptr StatementPackage::getLetStatement() const
{
    return m_LetStatement;
}

e4c::tag_t StatementPackage::getTag_LetStatement() const
{
    return e4c::tag< LetStatement >::get();
}

ecore::EClass_ptr StatementPackage::getProtectStatement() const
{
    return m_ProtectStatement;
}

e4c::tag_t StatementPackage::getTag_ProtectStatement() const
{
    return e4c::tag< ProtectStatement >::get();
}

ecore::EClass_ptr StatementPackage::getTextStatement() const
{
    return m_TextStatement;
}

e4c::tag_t StatementPackage::getTag_TextStatement() const
{
    return e4c::tag< TextStatement >::get();
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__foreach() const
{
    return e4c::tag< ExpandStatement__foreach_tag >::get();
}

ecore::EAttribute_ptr StatementPackage::getExpandStatement__foreach() const
{
    return m_ExpandStatement__foreach;
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__parameters() const
{
    return e4c::tag< ExpandStatement__parameters_tag >::get();
}

ecore::EReference_ptr StatementPackage::getExpandStatement__parameters() const
{
    return m_ExpandStatement__parameters;
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__separator() const
{
    return e4c::tag< ExpandStatement__separator_tag >::get();
}

ecore::EReference_ptr StatementPackage::getExpandStatement__separator() const
{
    return m_ExpandStatement__separator;
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__target() const
{
    return e4c::tag< ExpandStatement__target_tag >::get();
}

ecore::EReference_ptr StatementPackage::getExpandStatement__target() const
{
    return m_ExpandStatement__target;
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__definition() const
{
    return e4c::tag< ExpandStatement__definition_tag >::get();
}

ecore::EReference_ptr StatementPackage::getExpandStatement__definition() const
{
    return m_ExpandStatement__definition;
}

e4c::tag_t StatementPackage::getTag_ExpressionStatement__expression() const
{
    return e4c::tag< ExpressionStatement__expression_tag >::get();
}

ecore::EReference_ptr StatementPackage::getExpressionStatement__expression() const
{
    return m_ExpressionStatement__expression;
}

e4c::tag_t StatementPackage::getTag_ErrorStatement__message() const
{
    return e4c::tag< ErrorStatement__message_tag >::get();
}

ecore::EReference_ptr StatementPackage::getErrorStatement__message() const
{
    return m_ErrorStatement__message;
}

e4c::tag_t StatementPackage::getTag_AbstractStatementWithBody__body() const
{
    return e4c::tag< AbstractStatementWithBody__body_tag >::get();
}

ecore::EReference_ptr StatementPackage::getAbstractStatementWithBody__body() const
{
    return m_AbstractStatementWithBody__body;
}

e4c::tag_t StatementPackage::getTag_FileStatement__fileNameExpression() const
{
    return e4c::tag< FileStatement__fileNameExpression_tag >::get();
}

ecore::EReference_ptr StatementPackage::getFileStatement__fileNameExpression() const
{
    return m_FileStatement__fileNameExpression;
}

e4c::tag_t StatementPackage::getTag_FileStatement__outletNameIdentifier() const
{
    return e4c::tag< FileStatement__outletNameIdentifier_tag >::get();
}

ecore::EReference_ptr StatementPackage::getFileStatement__outletNameIdentifier() const
{
    return m_FileStatement__outletNameIdentifier;
}

e4c::tag_t StatementPackage::getTag_FileStatement__once() const
{
    return e4c::tag< FileStatement__once_tag >::get();
}

ecore::EAttribute_ptr StatementPackage::getFileStatement__once() const
{
    return m_FileStatement__once;
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__target() const
{
    return e4c::tag< ForEachStatement__target_tag >::get();
}

ecore::EReference_ptr StatementPackage::getForEachStatement__target() const
{
    return m_ForEachStatement__target;
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__separator() const
{
    return e4c::tag< ForEachStatement__separator_tag >::get();
}

ecore::EReference_ptr StatementPackage::getForEachStatement__separator() const
{
    return m_ForEachStatement__separator;
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__variable() const
{
    return e4c::tag< ForEachStatement__variable_tag >::get();
}

ecore::EReference_ptr StatementPackage::getForEachStatement__variable() const
{
    return m_ForEachStatement__variable;
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__iteratorName() const
{
    return e4c::tag< ForEachStatement__iteratorName_tag >::get();
}

ecore::EReference_ptr StatementPackage::getForEachStatement__iteratorName() const
{
    return m_ForEachStatement__iteratorName;
}

e4c::tag_t StatementPackage::getTag_IfStatement__condition() const
{
    return e4c::tag< IfStatement__condition_tag >::get();
}

ecore::EReference_ptr StatementPackage::getIfStatement__condition() const
{
    return m_IfStatement__condition;
}

e4c::tag_t StatementPackage::getTag_IfStatement__elseIf() const
{
    return e4c::tag< IfStatement__elseIf_tag >::get();
}

ecore::EReference_ptr StatementPackage::getIfStatement__elseIf() const
{
    return m_IfStatement__elseIf;
}

e4c::tag_t StatementPackage::getTag_LetStatement__varName() const
{
    return e4c::tag< LetStatement__varName_tag >::get();
}

ecore::EReference_ptr StatementPackage::getLetStatement__varName() const
{
    return m_LetStatement__varName;
}

e4c::tag_t StatementPackage::getTag_LetStatement__varValue() const
{
    return e4c::tag< LetStatement__varValue_tag >::get();
}

ecore::EReference_ptr StatementPackage::getLetStatement__varValue() const
{
    return m_LetStatement__varValue;
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__commentStart() const
{
    return e4c::tag< ProtectStatement__commentStart_tag >::get();
}

ecore::EReference_ptr StatementPackage::getProtectStatement__commentStart() const
{
    return m_ProtectStatement__commentStart;
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__commentEnd() const
{
    return e4c::tag< ProtectStatement__commentEnd_tag >::get();
}

ecore::EReference_ptr StatementPackage::getProtectStatement__commentEnd() const
{
    return m_ProtectStatement__commentEnd;
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__id() const
{
    return e4c::tag< ProtectStatement__id_tag >::get();
}

ecore::EReference_ptr StatementPackage::getProtectStatement__id() const
{
    return m_ProtectStatement__id;
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__disable() const
{
    return e4c::tag< ProtectStatement__disable_tag >::get();
}

ecore::EAttribute_ptr StatementPackage::getProtectStatement__disable() const
{
    return m_ProtectStatement__disable;
}

e4c::tag_t StatementPackage::getTag_TextStatement__value() const
{
    return e4c::tag< TextStatement__value_tag >::get();
}

ecore::EAttribute_ptr StatementPackage::getTextStatement__value() const
{
    return m_TextStatement__value;
}

e4c::tag_t StatementPackage::getTag_TextStatement__deleteLine() const
{
    return e4c::tag< TextStatement__deleteLine_tag >::get();
}

ecore::EAttribute_ptr StatementPackage::getTextStatement__deleteLine() const
{
    return m_TextStatement__deleteLine;
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_statement()
{
    return ::xpand3::statement::StatementPackage::_instance();
}
