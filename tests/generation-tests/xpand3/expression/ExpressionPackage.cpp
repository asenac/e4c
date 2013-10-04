#include "ExpressionPackage.hpp"
#include "ExpressionFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::expression;

ExpressionPackage::ExpressionPackage()
{
	m_eFactoryInstance = ExpressionFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_AbstractExpression = ecoreFactory->createEClass();
	m_AbstractExpression->setName("AbstractExpression");
	addEClassifiers(m_AbstractExpression);
	m_BooleanOperation = ecoreFactory->createEClass();
	m_BooleanOperation->setName("BooleanOperation");
	addEClassifiers(m_BooleanOperation);
	m_Cast = ecoreFactory->createEClass();
	m_Cast->setName("Cast");
	addEClassifiers(m_Cast);
	m_ChainExpression = ecoreFactory->createEClass();
	m_ChainExpression->setName("ChainExpression");
	addEClassifiers(m_ChainExpression);
	m_ConstructorCallExpression = ecoreFactory->createEClass();
	m_ConstructorCallExpression->setName("ConstructorCallExpression");
	addEClassifiers(m_ConstructorCallExpression);
	m_FeatureCall = ecoreFactory->createEClass();
	m_FeatureCall->setName("FeatureCall");
	addEClassifiers(m_FeatureCall);
	m_CollectionExpression = ecoreFactory->createEClass();
	m_CollectionExpression->setName("CollectionExpression");
	addEClassifiers(m_CollectionExpression);
	m_OperationCall = ecoreFactory->createEClass();
	m_OperationCall->setName("OperationCall");
	addEClassifiers(m_OperationCall);
	m_TypeSelectExpression = ecoreFactory->createEClass();
	m_TypeSelectExpression->setName("TypeSelectExpression");
	addEClassifiers(m_TypeSelectExpression);
	m_GlobalVarExpression = ecoreFactory->createEClass();
	m_GlobalVarExpression->setName("GlobalVarExpression");
	addEClassifiers(m_GlobalVarExpression);
	m_IfExpression = ecoreFactory->createEClass();
	m_IfExpression->setName("IfExpression");
	addEClassifiers(m_IfExpression);
	m_LetExpression = ecoreFactory->createEClass();
	m_LetExpression->setName("LetExpression");
	addEClassifiers(m_LetExpression);
	m_ListLiteral = ecoreFactory->createEClass();
	m_ListLiteral->setName("ListLiteral");
	addEClassifiers(m_ListLiteral);
	m_Literal = ecoreFactory->createEClass();
	m_Literal->setName("Literal");
	addEClassifiers(m_Literal);
	m_BooleanLiteral = ecoreFactory->createEClass();
	m_BooleanLiteral->setName("BooleanLiteral");
	addEClassifiers(m_BooleanLiteral);
	m_IntegerLiteral = ecoreFactory->createEClass();
	m_IntegerLiteral->setName("IntegerLiteral");
	addEClassifiers(m_IntegerLiteral);
	m_NullLiteral = ecoreFactory->createEClass();
	m_NullLiteral->setName("NullLiteral");
	addEClassifiers(m_NullLiteral);
	m_RealLiteral = ecoreFactory->createEClass();
	m_RealLiteral->setName("RealLiteral");
	addEClassifiers(m_RealLiteral);
	m_StringLiteral = ecoreFactory->createEClass();
	m_StringLiteral->setName("StringLiteral");
	addEClassifiers(m_StringLiteral);
	m_SwitchExpression = ecoreFactory->createEClass();
	m_SwitchExpression->setName("SwitchExpression");
	addEClassifiers(m_SwitchExpression);
	m_Case = ecoreFactory->createEClass();
	m_Case->setName("Case");
	addEClassifiers(m_Case);
	m_BinaryOperation = ecoreFactory->createEClass();
	m_BinaryOperation->setName("BinaryOperation");
	addEClassifiers(m_BinaryOperation);
	m_UnaryOperation = ecoreFactory->createEClass();
	m_UnaryOperation->setName("UnaryOperation");
	addEClassifiers(m_UnaryOperation);

	
    {
        m_Cast__type = ecoreFactory->createEReference();
        m_Cast__type->setName("type");
        m_Cast->addEStructuralFeatures(m_Cast__type);
        m_Cast->addEAllStructuralFeatures(m_Cast__type);
        m_Cast->addEReferences(m_Cast__type);
        m_Cast->addEAllReferences(m_Cast__type);
    }
    {
        m_Cast__target = ecoreFactory->createEReference();
        m_Cast__target->setName("target");
        m_Cast->addEStructuralFeatures(m_Cast__target);
        m_Cast->addEAllStructuralFeatures(m_Cast__target);
        m_Cast->addEReferences(m_Cast__target);
        m_Cast->addEAllReferences(m_Cast__target);
    }
    {
        m_ChainExpression__first = ecoreFactory->createEReference();
        m_ChainExpression__first->setName("first");
        m_ChainExpression->addEStructuralFeatures(m_ChainExpression__first);
        m_ChainExpression->addEAllStructuralFeatures(m_ChainExpression__first);
        m_ChainExpression->addEReferences(m_ChainExpression__first);
        m_ChainExpression->addEAllReferences(m_ChainExpression__first);
    }
    {
        m_ChainExpression__next = ecoreFactory->createEReference();
        m_ChainExpression__next->setName("next");
        m_ChainExpression->addEStructuralFeatures(m_ChainExpression__next);
        m_ChainExpression->addEAllStructuralFeatures(m_ChainExpression__next);
        m_ChainExpression->addEReferences(m_ChainExpression__next);
        m_ChainExpression->addEAllReferences(m_ChainExpression__next);
    }
    {
        m_ConstructorCallExpression__type = ecoreFactory->createEReference();
        m_ConstructorCallExpression__type->setName("type");
        m_ConstructorCallExpression->addEStructuralFeatures(m_ConstructorCallExpression__type);
        m_ConstructorCallExpression->addEAllStructuralFeatures(m_ConstructorCallExpression__type);
        m_ConstructorCallExpression->addEReferences(m_ConstructorCallExpression__type);
        m_ConstructorCallExpression->addEAllReferences(m_ConstructorCallExpression__type);
    }
    {
        m_FeatureCall__target = ecoreFactory->createEReference();
        m_FeatureCall__target->setName("target");
        m_FeatureCall->addEStructuralFeatures(m_FeatureCall__target);
        m_FeatureCall->addEAllStructuralFeatures(m_FeatureCall__target);
        m_FeatureCall->addEReferences(m_FeatureCall__target);
        m_FeatureCall->addEAllReferences(m_FeatureCall__target);
    }
    {
        m_FeatureCall__name = ecoreFactory->createEReference();
        m_FeatureCall__name->setName("name");
        m_FeatureCall->addEStructuralFeatures(m_FeatureCall__name);
        m_FeatureCall->addEAllStructuralFeatures(m_FeatureCall__name);
        m_FeatureCall->addEReferences(m_FeatureCall__name);
        m_FeatureCall->addEAllReferences(m_FeatureCall__name);
    }
    {
        m_CollectionExpression__closure = ecoreFactory->createEReference();
        m_CollectionExpression__closure->setName("closure");
        m_CollectionExpression->addEStructuralFeatures(m_CollectionExpression__closure);
        m_CollectionExpression->addEAllStructuralFeatures(m_CollectionExpression__closure);
        m_CollectionExpression->addEReferences(m_CollectionExpression__closure);
        m_CollectionExpression->addEAllReferences(m_CollectionExpression__closure);
    }
    {
        m_CollectionExpression__eleName = ecoreFactory->createEReference();
        m_CollectionExpression__eleName->setName("eleName");
        m_CollectionExpression->addEStructuralFeatures(m_CollectionExpression__eleName);
        m_CollectionExpression->addEAllStructuralFeatures(m_CollectionExpression__eleName);
        m_CollectionExpression->addEReferences(m_CollectionExpression__eleName);
        m_CollectionExpression->addEAllReferences(m_CollectionExpression__eleName);
    }
    {
        m_OperationCall__params = ecoreFactory->createEReference();
        m_OperationCall__params->setName("params");
        m_OperationCall->addEStructuralFeatures(m_OperationCall__params);
        m_OperationCall->addEAllStructuralFeatures(m_OperationCall__params);
        m_OperationCall->addEReferences(m_OperationCall__params);
        m_OperationCall->addEAllReferences(m_OperationCall__params);
    }
    {
        m_TypeSelectExpression__typeLiteral = ecoreFactory->createEReference();
        m_TypeSelectExpression__typeLiteral->setName("typeLiteral");
        m_TypeSelectExpression->addEStructuralFeatures(m_TypeSelectExpression__typeLiteral);
        m_TypeSelectExpression->addEAllStructuralFeatures(m_TypeSelectExpression__typeLiteral);
        m_TypeSelectExpression->addEReferences(m_TypeSelectExpression__typeLiteral);
        m_TypeSelectExpression->addEAllReferences(m_TypeSelectExpression__typeLiteral);
    }
    {
        m_GlobalVarExpression__globalVarName = ecoreFactory->createEReference();
        m_GlobalVarExpression__globalVarName->setName("globalVarName");
        m_GlobalVarExpression->addEStructuralFeatures(m_GlobalVarExpression__globalVarName);
        m_GlobalVarExpression->addEAllStructuralFeatures(m_GlobalVarExpression__globalVarName);
        m_GlobalVarExpression->addEReferences(m_GlobalVarExpression__globalVarName);
        m_GlobalVarExpression->addEAllReferences(m_GlobalVarExpression__globalVarName);
    }
    {
        m_IfExpression__condition = ecoreFactory->createEReference();
        m_IfExpression__condition->setName("condition");
        m_IfExpression->addEStructuralFeatures(m_IfExpression__condition);
        m_IfExpression->addEAllStructuralFeatures(m_IfExpression__condition);
        m_IfExpression->addEReferences(m_IfExpression__condition);
        m_IfExpression->addEAllReferences(m_IfExpression__condition);
    }
    {
        m_IfExpression__thenPart = ecoreFactory->createEReference();
        m_IfExpression__thenPart->setName("thenPart");
        m_IfExpression->addEStructuralFeatures(m_IfExpression__thenPart);
        m_IfExpression->addEAllStructuralFeatures(m_IfExpression__thenPart);
        m_IfExpression->addEReferences(m_IfExpression__thenPart);
        m_IfExpression->addEAllReferences(m_IfExpression__thenPart);
    }
    {
        m_IfExpression__elsePart = ecoreFactory->createEReference();
        m_IfExpression__elsePart->setName("elsePart");
        m_IfExpression->addEStructuralFeatures(m_IfExpression__elsePart);
        m_IfExpression->addEAllStructuralFeatures(m_IfExpression__elsePart);
        m_IfExpression->addEReferences(m_IfExpression__elsePart);
        m_IfExpression->addEAllReferences(m_IfExpression__elsePart);
    }
    {
        m_LetExpression__varExpression = ecoreFactory->createEReference();
        m_LetExpression__varExpression->setName("varExpression");
        m_LetExpression->addEStructuralFeatures(m_LetExpression__varExpression);
        m_LetExpression->addEAllStructuralFeatures(m_LetExpression__varExpression);
        m_LetExpression->addEReferences(m_LetExpression__varExpression);
        m_LetExpression->addEAllReferences(m_LetExpression__varExpression);
    }
    {
        m_LetExpression__targetExpression = ecoreFactory->createEReference();
        m_LetExpression__targetExpression->setName("targetExpression");
        m_LetExpression->addEStructuralFeatures(m_LetExpression__targetExpression);
        m_LetExpression->addEAllStructuralFeatures(m_LetExpression__targetExpression);
        m_LetExpression->addEReferences(m_LetExpression__targetExpression);
        m_LetExpression->addEAllReferences(m_LetExpression__targetExpression);
    }
    {
        m_LetExpression__varName = ecoreFactory->createEReference();
        m_LetExpression__varName->setName("varName");
        m_LetExpression->addEStructuralFeatures(m_LetExpression__varName);
        m_LetExpression->addEAllStructuralFeatures(m_LetExpression__varName);
        m_LetExpression->addEReferences(m_LetExpression__varName);
        m_LetExpression->addEAllReferences(m_LetExpression__varName);
    }
    {
        m_ListLiteral__elements = ecoreFactory->createEReference();
        m_ListLiteral__elements->setName("elements");
        m_ListLiteral->addEStructuralFeatures(m_ListLiteral__elements);
        m_ListLiteral->addEAllStructuralFeatures(m_ListLiteral__elements);
        m_ListLiteral->addEReferences(m_ListLiteral__elements);
        m_ListLiteral->addEAllReferences(m_ListLiteral__elements);
    }
    {
        m_Literal__literalValue = ecoreFactory->createEReference();
        m_Literal__literalValue->setName("literalValue");
        m_Literal->addEStructuralFeatures(m_Literal__literalValue);
        m_Literal->addEAllStructuralFeatures(m_Literal__literalValue);
        m_Literal->addEReferences(m_Literal__literalValue);
        m_Literal->addEAllReferences(m_Literal__literalValue);
    }
    {
        m_SwitchExpression__switchExpr = ecoreFactory->createEReference();
        m_SwitchExpression__switchExpr->setName("switchExpr");
        m_SwitchExpression->addEStructuralFeatures(m_SwitchExpression__switchExpr);
        m_SwitchExpression->addEAllStructuralFeatures(m_SwitchExpression__switchExpr);
        m_SwitchExpression->addEReferences(m_SwitchExpression__switchExpr);
        m_SwitchExpression->addEAllReferences(m_SwitchExpression__switchExpr);
    }
    {
        m_SwitchExpression__defaultExpr = ecoreFactory->createEReference();
        m_SwitchExpression__defaultExpr->setName("defaultExpr");
        m_SwitchExpression->addEStructuralFeatures(m_SwitchExpression__defaultExpr);
        m_SwitchExpression->addEAllStructuralFeatures(m_SwitchExpression__defaultExpr);
        m_SwitchExpression->addEReferences(m_SwitchExpression__defaultExpr);
        m_SwitchExpression->addEAllReferences(m_SwitchExpression__defaultExpr);
    }
    {
        m_SwitchExpression__cases = ecoreFactory->createEReference();
        m_SwitchExpression__cases->setName("cases");
        m_SwitchExpression->addEStructuralFeatures(m_SwitchExpression__cases);
        m_SwitchExpression->addEAllStructuralFeatures(m_SwitchExpression__cases);
        m_SwitchExpression->addEReferences(m_SwitchExpression__cases);
        m_SwitchExpression->addEAllReferences(m_SwitchExpression__cases);
    }
    {
        m_Case__condition = ecoreFactory->createEReference();
        m_Case__condition->setName("condition");
        m_Case->addEStructuralFeatures(m_Case__condition);
        m_Case->addEAllStructuralFeatures(m_Case__condition);
        m_Case->addEReferences(m_Case__condition);
        m_Case->addEAllReferences(m_Case__condition);
    }
    {
        m_Case__thenPart = ecoreFactory->createEReference();
        m_Case__thenPart->setName("thenPart");
        m_Case->addEStructuralFeatures(m_Case__thenPart);
        m_Case->addEAllStructuralFeatures(m_Case__thenPart);
        m_Case->addEReferences(m_Case__thenPart);
        m_Case->addEAllReferences(m_Case__thenPart);
    }
    {
        m_BinaryOperation__left = ecoreFactory->createEReference();
        m_BinaryOperation__left->setName("left");
        m_BinaryOperation->addEStructuralFeatures(m_BinaryOperation__left);
        m_BinaryOperation->addEAllStructuralFeatures(m_BinaryOperation__left);
        m_BinaryOperation->addEReferences(m_BinaryOperation__left);
        m_BinaryOperation->addEAllReferences(m_BinaryOperation__left);
    }
    {
        m_BinaryOperation__right = ecoreFactory->createEReference();
        m_BinaryOperation__right->setName("right");
        m_BinaryOperation->addEStructuralFeatures(m_BinaryOperation__right);
        m_BinaryOperation->addEAllStructuralFeatures(m_BinaryOperation__right);
        m_BinaryOperation->addEReferences(m_BinaryOperation__right);
        m_BinaryOperation->addEAllReferences(m_BinaryOperation__right);
    }
    {
        m_BinaryOperation__operator = ecoreFactory->createEReference();
        m_BinaryOperation__operator->setName("operator");
        m_BinaryOperation->addEStructuralFeatures(m_BinaryOperation__operator);
        m_BinaryOperation->addEAllStructuralFeatures(m_BinaryOperation__operator);
        m_BinaryOperation->addEReferences(m_BinaryOperation__operator);
        m_BinaryOperation->addEAllReferences(m_BinaryOperation__operator);
    }
    {
        m_UnaryOperation__operator = ecoreFactory->createEReference();
        m_UnaryOperation__operator->setName("operator");
        m_UnaryOperation->addEStructuralFeatures(m_UnaryOperation__operator);
        m_UnaryOperation->addEAllStructuralFeatures(m_UnaryOperation__operator);
        m_UnaryOperation->addEReferences(m_UnaryOperation__operator);
        m_UnaryOperation->addEAllReferences(m_UnaryOperation__operator);
    }
    {
        m_UnaryOperation__operand = ecoreFactory->createEReference();
        m_UnaryOperation__operand->setName("operand");
        m_UnaryOperation->addEStructuralFeatures(m_UnaryOperation__operand);
        m_UnaryOperation->addEAllStructuralFeatures(m_UnaryOperation__operand);
        m_UnaryOperation->addEReferences(m_UnaryOperation__operand);
        m_UnaryOperation->addEAllReferences(m_UnaryOperation__operand);
    }
	
	m_AbstractExpression->addESuperTypes(m_SyntaxElement);
	m_AbstractExpression->addAllEAllOperations(m_SyntaxElement->getEOperations());
	m_AbstractExpression->addAllEAllReferences(m_SyntaxElement->getEReferences());
	m_AbstractExpression->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
	m_AbstractExpression->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
	m_BooleanOperation->addESuperTypes(m_BinaryOperation);
	m_BooleanOperation->addAllEAllOperations(m_BinaryOperation->getEOperations());
	m_BooleanOperation->addAllEAllReferences(m_BinaryOperation->getEReferences());
	m_BooleanOperation->addAllEAllAttributes(m_BinaryOperation->getEAttributes());
	m_BooleanOperation->addAllEAllStructuralFeatures(m_BinaryOperation->getEStructuralFeatures());
	m_Cast->addESuperTypes(m_AbstractExpression);
	m_Cast->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_Cast->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_Cast->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_Cast->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_ChainExpression->addESuperTypes(m_AbstractExpression);
	m_ChainExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_ChainExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_ChainExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_ChainExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_ConstructorCallExpression->addESuperTypes(m_AbstractExpression);
	m_ConstructorCallExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_ConstructorCallExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_ConstructorCallExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_ConstructorCallExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_FeatureCall->addESuperTypes(m_AbstractExpression);
	m_FeatureCall->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_FeatureCall->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_FeatureCall->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_FeatureCall->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_CollectionExpression->addESuperTypes(m_FeatureCall);
	m_CollectionExpression->addAllEAllOperations(m_FeatureCall->getEOperations());
	m_CollectionExpression->addAllEAllReferences(m_FeatureCall->getEReferences());
	m_CollectionExpression->addAllEAllAttributes(m_FeatureCall->getEAttributes());
	m_CollectionExpression->addAllEAllStructuralFeatures(m_FeatureCall->getEStructuralFeatures());
	m_OperationCall->addESuperTypes(m_FeatureCall);
	m_OperationCall->addAllEAllOperations(m_FeatureCall->getEOperations());
	m_OperationCall->addAllEAllReferences(m_FeatureCall->getEReferences());
	m_OperationCall->addAllEAllAttributes(m_FeatureCall->getEAttributes());
	m_OperationCall->addAllEAllStructuralFeatures(m_FeatureCall->getEStructuralFeatures());
	m_TypeSelectExpression->addESuperTypes(m_FeatureCall);
	m_TypeSelectExpression->addAllEAllOperations(m_FeatureCall->getEOperations());
	m_TypeSelectExpression->addAllEAllReferences(m_FeatureCall->getEReferences());
	m_TypeSelectExpression->addAllEAllAttributes(m_FeatureCall->getEAttributes());
	m_TypeSelectExpression->addAllEAllStructuralFeatures(m_FeatureCall->getEStructuralFeatures());
	m_GlobalVarExpression->addESuperTypes(m_AbstractExpression);
	m_GlobalVarExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_GlobalVarExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_GlobalVarExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_GlobalVarExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_IfExpression->addESuperTypes(m_AbstractExpression);
	m_IfExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_IfExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_IfExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_IfExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_LetExpression->addESuperTypes(m_AbstractExpression);
	m_LetExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_LetExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_LetExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_LetExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_ListLiteral->addESuperTypes(m_AbstractExpression);
	m_ListLiteral->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_ListLiteral->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_ListLiteral->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_ListLiteral->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_Literal->addESuperTypes(m_AbstractExpression);
	m_Literal->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_Literal->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_Literal->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_Literal->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_BooleanLiteral->addESuperTypes(m_Literal);
	m_BooleanLiteral->addAllEAllOperations(m_Literal->getEOperations());
	m_BooleanLiteral->addAllEAllReferences(m_Literal->getEReferences());
	m_BooleanLiteral->addAllEAllAttributes(m_Literal->getEAttributes());
	m_BooleanLiteral->addAllEAllStructuralFeatures(m_Literal->getEStructuralFeatures());
	m_IntegerLiteral->addESuperTypes(m_Literal);
	m_IntegerLiteral->addAllEAllOperations(m_Literal->getEOperations());
	m_IntegerLiteral->addAllEAllReferences(m_Literal->getEReferences());
	m_IntegerLiteral->addAllEAllAttributes(m_Literal->getEAttributes());
	m_IntegerLiteral->addAllEAllStructuralFeatures(m_Literal->getEStructuralFeatures());
	m_NullLiteral->addESuperTypes(m_Literal);
	m_NullLiteral->addAllEAllOperations(m_Literal->getEOperations());
	m_NullLiteral->addAllEAllReferences(m_Literal->getEReferences());
	m_NullLiteral->addAllEAllAttributes(m_Literal->getEAttributes());
	m_NullLiteral->addAllEAllStructuralFeatures(m_Literal->getEStructuralFeatures());
	m_RealLiteral->addESuperTypes(m_Literal);
	m_RealLiteral->addAllEAllOperations(m_Literal->getEOperations());
	m_RealLiteral->addAllEAllReferences(m_Literal->getEReferences());
	m_RealLiteral->addAllEAllAttributes(m_Literal->getEAttributes());
	m_RealLiteral->addAllEAllStructuralFeatures(m_Literal->getEStructuralFeatures());
	m_StringLiteral->addESuperTypes(m_Literal);
	m_StringLiteral->addAllEAllOperations(m_Literal->getEOperations());
	m_StringLiteral->addAllEAllReferences(m_Literal->getEReferences());
	m_StringLiteral->addAllEAllAttributes(m_Literal->getEAttributes());
	m_StringLiteral->addAllEAllStructuralFeatures(m_Literal->getEStructuralFeatures());
	m_SwitchExpression->addESuperTypes(m_AbstractExpression);
	m_SwitchExpression->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_SwitchExpression->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_SwitchExpression->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_SwitchExpression->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_Case->addESuperTypes(m_SyntaxElement);
	m_Case->addAllEAllOperations(m_SyntaxElement->getEOperations());
	m_Case->addAllEAllReferences(m_SyntaxElement->getEReferences());
	m_Case->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
	m_Case->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
	m_BinaryOperation->addESuperTypes(m_AbstractExpression);
	m_BinaryOperation->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_BinaryOperation->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_BinaryOperation->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_BinaryOperation->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	m_UnaryOperation->addESuperTypes(m_AbstractExpression);
	m_UnaryOperation->addAllEAllOperations(m_AbstractExpression->getEOperations());
	m_UnaryOperation->addAllEAllReferences(m_AbstractExpression->getEReferences());
	m_UnaryOperation->addAllEAllAttributes(m_AbstractExpression->getEAttributes());
	m_UnaryOperation->addAllEAllStructuralFeatures(m_AbstractExpression->getEStructuralFeatures());
	
	
	m_Cast->addFeatureAccesors(m_Cast__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::Cast_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Cast->addFeatureAccesors(m_Cast__target, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::Cast_ptr >(o)->getTarget()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ChainExpression->addFeatureAccesors(m_ChainExpression__first, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::ChainExpression_ptr >(o)->getFirst()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ChainExpression->addFeatureAccesors(m_ChainExpression__next, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::ChainExpression_ptr >(o)->getNext()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ConstructorCallExpression->addFeatureAccesors(m_ConstructorCallExpression__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::ConstructorCallExpression_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_FeatureCall->addFeatureAccesors(m_FeatureCall__target, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::FeatureCall_ptr >(o)->getTarget()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_FeatureCall->addFeatureAccesors(m_FeatureCall__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::FeatureCall_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CollectionExpression->addFeatureAccesors(m_CollectionExpression__closure, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::CollectionExpression_ptr >(o)->getClosure()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CollectionExpression->addFeatureAccesors(m_CollectionExpression__eleName, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::CollectionExpression_ptr >(o)->getEleName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_OperationCall->addFeatureAccesors(m_OperationCall__params, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::OperationCall_ptr >(o)->getParams()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TypeSelectExpression->addFeatureAccesors(m_TypeSelectExpression__typeLiteral, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::TypeSelectExpression_ptr >(o)->getTypeLiteral()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_GlobalVarExpression->addFeatureAccesors(m_GlobalVarExpression__globalVarName, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::GlobalVarExpression_ptr >(o)->getGlobalVarName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_IfExpression->addFeatureAccesors(m_IfExpression__condition, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::IfExpression_ptr >(o)->getCondition()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_IfExpression->addFeatureAccesors(m_IfExpression__thenPart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::IfExpression_ptr >(o)->getThenPart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_IfExpression->addFeatureAccesors(m_IfExpression__elsePart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::IfExpression_ptr >(o)->getElsePart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_LetExpression->addFeatureAccesors(m_LetExpression__varExpression, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::LetExpression_ptr >(o)->getVarExpression()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_LetExpression->addFeatureAccesors(m_LetExpression__targetExpression, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::LetExpression_ptr >(o)->getTargetExpression()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_LetExpression->addFeatureAccesors(m_LetExpression__varName, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::LetExpression_ptr >(o)->getVarName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ListLiteral->addFeatureAccesors(m_ListLiteral__elements, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::ListLiteral_ptr >(o)->getElements()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Literal->addFeatureAccesors(m_Literal__literalValue, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::Literal_ptr >(o)->getLiteralValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SwitchExpression->addFeatureAccesors(m_SwitchExpression__switchExpr, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::SwitchExpression_ptr >(o)->getSwitchExpr()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SwitchExpression->addFeatureAccesors(m_SwitchExpression__defaultExpr, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::SwitchExpression_ptr >(o)->getDefaultExpr()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SwitchExpression->addFeatureAccesors(m_SwitchExpression__cases, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::SwitchExpression_ptr >(o)->getCases()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Case->addFeatureAccesors(m_Case__condition, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::Case_ptr >(o)->getCondition()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Case->addFeatureAccesors(m_Case__thenPart, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::Case_ptr >(o)->getThenPart()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_BinaryOperation->addFeatureAccesors(m_BinaryOperation__left, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::BinaryOperation_ptr >(o)->getLeft()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_BinaryOperation->addFeatureAccesors(m_BinaryOperation__right, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::BinaryOperation_ptr >(o)->getRight()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_BinaryOperation->addFeatureAccesors(m_BinaryOperation__operator, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::BinaryOperation_ptr >(o)->getOperator()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UnaryOperation->addFeatureAccesors(m_UnaryOperation__operator, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::UnaryOperation_ptr >(o)->getOperator()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UnaryOperation->addFeatureAccesors(m_UnaryOperation__operand, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::expression::UnaryOperation_ptr >(o)->getOperand()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const ExpressionPackage_ptr ExpressionPackage::_instance()
{
	static ExpressionPackage __instance;
	return &__instance;
}

ecore::EClass_ptr ExpressionPackage::getAbstractExpression() const
{
	return m_AbstractExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_AbstractExpression() const
{
	return e4c::tag< AbstractExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getBooleanOperation() const
{
	return m_BooleanOperation;
}
  	
e4c::tag_t ExpressionPackage::getTag_BooleanOperation() const
{
	return e4c::tag< BooleanOperation >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getCast() const
{
	return m_Cast;
}
  	
e4c::tag_t ExpressionPackage::getTag_Cast() const
{
	return e4c::tag< Cast >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getChainExpression() const
{
	return m_ChainExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_ChainExpression() const
{
	return e4c::tag< ChainExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getConstructorCallExpression() const
{
	return m_ConstructorCallExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_ConstructorCallExpression() const
{
	return e4c::tag< ConstructorCallExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getFeatureCall() const
{
	return m_FeatureCall;
}
  	
e4c::tag_t ExpressionPackage::getTag_FeatureCall() const
{
	return e4c::tag< FeatureCall >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getCollectionExpression() const
{
	return m_CollectionExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_CollectionExpression() const
{
	return e4c::tag< CollectionExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getOperationCall() const
{
	return m_OperationCall;
}
  	
e4c::tag_t ExpressionPackage::getTag_OperationCall() const
{
	return e4c::tag< OperationCall >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getTypeSelectExpression() const
{
	return m_TypeSelectExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_TypeSelectExpression() const
{
	return e4c::tag< TypeSelectExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getGlobalVarExpression() const
{
	return m_GlobalVarExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_GlobalVarExpression() const
{
	return e4c::tag< GlobalVarExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getIfExpression() const
{
	return m_IfExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_IfExpression() const
{
	return e4c::tag< IfExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getLetExpression() const
{
	return m_LetExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_LetExpression() const
{
	return e4c::tag< LetExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getListLiteral() const
{
	return m_ListLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_ListLiteral() const
{
	return e4c::tag< ListLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getLiteral() const
{
	return m_Literal;
}
  	
e4c::tag_t ExpressionPackage::getTag_Literal() const
{
	return e4c::tag< Literal >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getBooleanLiteral() const
{
	return m_BooleanLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_BooleanLiteral() const
{
	return e4c::tag< BooleanLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getIntegerLiteral() const
{
	return m_IntegerLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_IntegerLiteral() const
{
	return e4c::tag< IntegerLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getNullLiteral() const
{
	return m_NullLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_NullLiteral() const
{
	return e4c::tag< NullLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getRealLiteral() const
{
	return m_RealLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_RealLiteral() const
{
	return e4c::tag< RealLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getStringLiteral() const
{
	return m_StringLiteral;
}
  	
e4c::tag_t ExpressionPackage::getTag_StringLiteral() const
{
	return e4c::tag< StringLiteral >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getSwitchExpression() const
{
	return m_SwitchExpression;
}
  	
e4c::tag_t ExpressionPackage::getTag_SwitchExpression() const
{
	return e4c::tag< SwitchExpression >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getCase() const
{
	return m_Case;
}
  	
e4c::tag_t ExpressionPackage::getTag_Case() const
{
	return e4c::tag< Case >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getBinaryOperation() const
{
	return m_BinaryOperation;
}
  	
e4c::tag_t ExpressionPackage::getTag_BinaryOperation() const
{
	return e4c::tag< BinaryOperation >::get();
}
 
ecore::EClass_ptr ExpressionPackage::getUnaryOperation() const
{
	return m_UnaryOperation;
}
  	
e4c::tag_t ExpressionPackage::getTag_UnaryOperation() const
{
	return e4c::tag< UnaryOperation >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_Cast__type() const
{
	return e4c::tag< Cast__type_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCast__type() const
{
	return m_Cast__type;
}

e4c::tag_t ExpressionPackage::getTag_Cast__target() const
{
	return e4c::tag< Cast__target_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCast__target() const
{
	return m_Cast__target;
}

e4c::tag_t ExpressionPackage::getTag_ChainExpression__first() const
{
	return e4c::tag< ChainExpression__first_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getChainExpression__first() const
{
	return m_ChainExpression__first;
}

e4c::tag_t ExpressionPackage::getTag_ChainExpression__next() const
{
	return e4c::tag< ChainExpression__next_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getChainExpression__next() const
{
	return m_ChainExpression__next;
}

e4c::tag_t ExpressionPackage::getTag_ConstructorCallExpression__type() const
{
	return e4c::tag< ConstructorCallExpression__type_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getConstructorCallExpression__type() const
{
	return m_ConstructorCallExpression__type;
}

e4c::tag_t ExpressionPackage::getTag_FeatureCall__target() const
{
	return e4c::tag< FeatureCall__target_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getFeatureCall__target() const
{
	return m_FeatureCall__target;
}

e4c::tag_t ExpressionPackage::getTag_FeatureCall__name() const
{
	return e4c::tag< FeatureCall__name_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getFeatureCall__name() const
{
	return m_FeatureCall__name;
}

e4c::tag_t ExpressionPackage::getTag_CollectionExpression__closure() const
{
	return e4c::tag< CollectionExpression__closure_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCollectionExpression__closure() const
{
	return m_CollectionExpression__closure;
}

e4c::tag_t ExpressionPackage::getTag_CollectionExpression__eleName() const
{
	return e4c::tag< CollectionExpression__eleName_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCollectionExpression__eleName() const
{
	return m_CollectionExpression__eleName;
}

e4c::tag_t ExpressionPackage::getTag_OperationCall__params() const
{
	return e4c::tag< OperationCall__params_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getOperationCall__params() const
{
	return m_OperationCall__params;
}

e4c::tag_t ExpressionPackage::getTag_TypeSelectExpression__typeLiteral() const
{
	return e4c::tag< TypeSelectExpression__typeLiteral_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getTypeSelectExpression__typeLiteral() const
{
	return m_TypeSelectExpression__typeLiteral;
}

e4c::tag_t ExpressionPackage::getTag_GlobalVarExpression__globalVarName() const
{
	return e4c::tag< GlobalVarExpression__globalVarName_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getGlobalVarExpression__globalVarName() const
{
	return m_GlobalVarExpression__globalVarName;
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__condition() const
{
	return e4c::tag< IfExpression__condition_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getIfExpression__condition() const
{
	return m_IfExpression__condition;
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__thenPart() const
{
	return e4c::tag< IfExpression__thenPart_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getIfExpression__thenPart() const
{
	return m_IfExpression__thenPart;
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__elsePart() const
{
	return e4c::tag< IfExpression__elsePart_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getIfExpression__elsePart() const
{
	return m_IfExpression__elsePart;
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__varExpression() const
{
	return e4c::tag< LetExpression__varExpression_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getLetExpression__varExpression() const
{
	return m_LetExpression__varExpression;
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__targetExpression() const
{
	return e4c::tag< LetExpression__targetExpression_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getLetExpression__targetExpression() const
{
	return m_LetExpression__targetExpression;
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__varName() const
{
	return e4c::tag< LetExpression__varName_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getLetExpression__varName() const
{
	return m_LetExpression__varName;
}

e4c::tag_t ExpressionPackage::getTag_ListLiteral__elements() const
{
	return e4c::tag< ListLiteral__elements_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getListLiteral__elements() const
{
	return m_ListLiteral__elements;
}

e4c::tag_t ExpressionPackage::getTag_Literal__literalValue() const
{
	return e4c::tag< Literal__literalValue_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getLiteral__literalValue() const
{
	return m_Literal__literalValue;
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__switchExpr() const
{
	return e4c::tag< SwitchExpression__switchExpr_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getSwitchExpression__switchExpr() const
{
	return m_SwitchExpression__switchExpr;
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__defaultExpr() const
{
	return e4c::tag< SwitchExpression__defaultExpr_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getSwitchExpression__defaultExpr() const
{
	return m_SwitchExpression__defaultExpr;
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__cases() const
{
	return e4c::tag< SwitchExpression__cases_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getSwitchExpression__cases() const
{
	return m_SwitchExpression__cases;
}

e4c::tag_t ExpressionPackage::getTag_Case__condition() const
{
	return e4c::tag< Case__condition_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCase__condition() const
{
	return m_Case__condition;
}

e4c::tag_t ExpressionPackage::getTag_Case__thenPart() const
{
	return e4c::tag< Case__thenPart_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getCase__thenPart() const
{
	return m_Case__thenPart;
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__left() const
{
	return e4c::tag< BinaryOperation__left_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getBinaryOperation__left() const
{
	return m_BinaryOperation__left;
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__right() const
{
	return e4c::tag< BinaryOperation__right_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getBinaryOperation__right() const
{
	return m_BinaryOperation__right;
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__operator() const
{
	return e4c::tag< BinaryOperation__operator_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getBinaryOperation__operator() const
{
	return m_BinaryOperation__operator;
}

e4c::tag_t ExpressionPackage::getTag_UnaryOperation__operator() const
{
	return e4c::tag< UnaryOperation__operator_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operator() const
{
	return m_UnaryOperation__operator;
}

e4c::tag_t ExpressionPackage::getTag_UnaryOperation__operand() const
{
	return e4c::tag< UnaryOperation__operand_tag >::get();
}

ecore::EReference_ptr ExpressionPackage::getUnaryOperation__operand() const
{
	return m_UnaryOperation__operand;
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_expression()
{
	return ::xpand3::expression::ExpressionPackage::_instance();
}
