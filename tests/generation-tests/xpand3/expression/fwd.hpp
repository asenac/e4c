#ifndef EMF_CPP_XPAND3_EXPRESSION_FWD_HPP
#define EMF_CPP_XPAND3_EXPRESSION_FWD_HPP


namespace xpand3
{
namespace expression
{


class ExpressionPackage;
typedef ExpressionPackage * ExpressionPackage_ptr;
class ExpressionFactory;
typedef ExpressionFactory * ExpressionFactory_ptr;

// Data types


// Classes
class AbstractExpression;
typedef AbstractExpression* AbstractExpression_ptr;
class BooleanOperation;
typedef BooleanOperation* BooleanOperation_ptr;
class Cast;
typedef Cast* Cast_ptr;
class ChainExpression;
typedef ChainExpression* ChainExpression_ptr;
class ConstructorCallExpression;
typedef ConstructorCallExpression* ConstructorCallExpression_ptr;
class FeatureCall;
typedef FeatureCall* FeatureCall_ptr;
class CollectionExpression;
typedef CollectionExpression* CollectionExpression_ptr;
class OperationCall;
typedef OperationCall* OperationCall_ptr;
class TypeSelectExpression;
typedef TypeSelectExpression* TypeSelectExpression_ptr;
class GlobalVarExpression;
typedef GlobalVarExpression* GlobalVarExpression_ptr;
class IfExpression;
typedef IfExpression* IfExpression_ptr;
class LetExpression;
typedef LetExpression* LetExpression_ptr;
class ListLiteral;
typedef ListLiteral* ListLiteral_ptr;
class Literal;
typedef Literal* Literal_ptr;
class BooleanLiteral;
typedef BooleanLiteral* BooleanLiteral_ptr;
class IntegerLiteral;
typedef IntegerLiteral* IntegerLiteral_ptr;
class NullLiteral;
typedef NullLiteral* NullLiteral_ptr;
class RealLiteral;
typedef RealLiteral* RealLiteral_ptr;
class StringLiteral;
typedef StringLiteral* StringLiteral_ptr;
class SwitchExpression;
typedef SwitchExpression* SwitchExpression_ptr;
class Case;
typedef Case* Case_ptr;
class BinaryOperation;
typedef BinaryOperation* BinaryOperation_ptr;
class UnaryOperation;
typedef UnaryOperation* UnaryOperation_ptr;


// Structural features
struct Cast__type_tag;
struct Cast__target_tag;
struct ChainExpression__first_tag;
struct ChainExpression__next_tag;
struct ConstructorCallExpression__type_tag;
struct FeatureCall__target_tag;
struct FeatureCall__name_tag;
struct CollectionExpression__closure_tag;
struct CollectionExpression__eleName_tag;
struct OperationCall__params_tag;
struct TypeSelectExpression__typeLiteral_tag;
struct GlobalVarExpression__globalVarName_tag;
struct IfExpression__condition_tag;
struct IfExpression__thenPart_tag;
struct IfExpression__elsePart_tag;
struct LetExpression__varExpression_tag;
struct LetExpression__targetExpression_tag;
struct LetExpression__varName_tag;
struct ListLiteral__elements_tag;
struct Literal__literalValue_tag;
struct SwitchExpression__switchExpr_tag;
struct SwitchExpression__defaultExpr_tag;
struct SwitchExpression__cases_tag;
struct Case__condition_tag;
struct Case__thenPart_tag;
struct BinaryOperation__left_tag;
struct BinaryOperation__right_tag;
struct BinaryOperation__operator_tag;
struct UnaryOperation__operator_tag;
struct UnaryOperation__operand_tag;


} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_FWD_HPP
