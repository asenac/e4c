#include "ExpressionFactory.hpp"
#include "ExpressionPackage.hpp"
#include "include.hpp"

using namespace xpand3::expression;

ExpressionFactory::ExpressionFactory()
{
	m_ePackage = ExpressionPackage::_instance();
	// std::bind(&ExpressionFactory::createBooleanOperation, this);
	// m_ePackage->getTag_BooleanOperation();
	// std::bind(&ExpressionFactory::createCast, this);
	// m_ePackage->getTag_Cast();
	// std::bind(&ExpressionFactory::createChainExpression, this);
	// m_ePackage->getTag_ChainExpression();
	// std::bind(&ExpressionFactory::createConstructorCallExpression, this);
	// m_ePackage->getTag_ConstructorCallExpression();
	// std::bind(&ExpressionFactory::createFeatureCall, this);
	// m_ePackage->getTag_FeatureCall();
	// std::bind(&ExpressionFactory::createCollectionExpression, this);
	// m_ePackage->getTag_CollectionExpression();
	// std::bind(&ExpressionFactory::createOperationCall, this);
	// m_ePackage->getTag_OperationCall();
	// std::bind(&ExpressionFactory::createTypeSelectExpression, this);
	// m_ePackage->getTag_TypeSelectExpression();
	// std::bind(&ExpressionFactory::createGlobalVarExpression, this);
	// m_ePackage->getTag_GlobalVarExpression();
	// std::bind(&ExpressionFactory::createIfExpression, this);
	// m_ePackage->getTag_IfExpression();
	// std::bind(&ExpressionFactory::createLetExpression, this);
	// m_ePackage->getTag_LetExpression();
	// std::bind(&ExpressionFactory::createListLiteral, this);
	// m_ePackage->getTag_ListLiteral();
	// std::bind(&ExpressionFactory::createBooleanLiteral, this);
	// m_ePackage->getTag_BooleanLiteral();
	// std::bind(&ExpressionFactory::createIntegerLiteral, this);
	// m_ePackage->getTag_IntegerLiteral();
	// std::bind(&ExpressionFactory::createNullLiteral, this);
	// m_ePackage->getTag_NullLiteral();
	// std::bind(&ExpressionFactory::createRealLiteral, this);
	// m_ePackage->getTag_RealLiteral();
	// std::bind(&ExpressionFactory::createStringLiteral, this);
	// m_ePackage->getTag_StringLiteral();
	// std::bind(&ExpressionFactory::createSwitchExpression, this);
	// m_ePackage->getTag_SwitchExpression();
	// std::bind(&ExpressionFactory::createCase, this);
	// m_ePackage->getTag_Case();
	// std::bind(&ExpressionFactory::createBinaryOperation, this);
	// m_ePackage->getTag_BinaryOperation();
	// std::bind(&ExpressionFactory::createUnaryOperation, this);
	// m_ePackage->getTag_UnaryOperation();
}

const ExpressionFactory_ptr ExpressionFactory::_instance()
{
	static ExpressionFactory __instance;
	return &__instance;
}

BooleanOperation_ptr ExpressionFactory::createBooleanOperation() const
{
	return new BooleanOperation();
}

Cast_ptr ExpressionFactory::createCast() const
{
	return new Cast();
}

ChainExpression_ptr ExpressionFactory::createChainExpression() const
{
	return new ChainExpression();
}

ConstructorCallExpression_ptr ExpressionFactory::createConstructorCallExpression() const
{
	return new ConstructorCallExpression();
}

FeatureCall_ptr ExpressionFactory::createFeatureCall() const
{
	return new FeatureCall();
}

CollectionExpression_ptr ExpressionFactory::createCollectionExpression() const
{
	return new CollectionExpression();
}

OperationCall_ptr ExpressionFactory::createOperationCall() const
{
	return new OperationCall();
}

TypeSelectExpression_ptr ExpressionFactory::createTypeSelectExpression() const
{
	return new TypeSelectExpression();
}

GlobalVarExpression_ptr ExpressionFactory::createGlobalVarExpression() const
{
	return new GlobalVarExpression();
}

IfExpression_ptr ExpressionFactory::createIfExpression() const
{
	return new IfExpression();
}

LetExpression_ptr ExpressionFactory::createLetExpression() const
{
	return new LetExpression();
}

ListLiteral_ptr ExpressionFactory::createListLiteral() const
{
	return new ListLiteral();
}

BooleanLiteral_ptr ExpressionFactory::createBooleanLiteral() const
{
	return new BooleanLiteral();
}

IntegerLiteral_ptr ExpressionFactory::createIntegerLiteral() const
{
	return new IntegerLiteral();
}

NullLiteral_ptr ExpressionFactory::createNullLiteral() const
{
	return new NullLiteral();
}

RealLiteral_ptr ExpressionFactory::createRealLiteral() const
{
	return new RealLiteral();
}

StringLiteral_ptr ExpressionFactory::createStringLiteral() const
{
	return new StringLiteral();
}

SwitchExpression_ptr ExpressionFactory::createSwitchExpression() const
{
	return new SwitchExpression();
}

Case_ptr ExpressionFactory::createCase() const
{
	return new Case();
}

BinaryOperation_ptr ExpressionFactory::createBinaryOperation() const
{
	return new BinaryOperation();
}

UnaryOperation_ptr ExpressionFactory::createUnaryOperation() const
{
	return new UnaryOperation();
}

