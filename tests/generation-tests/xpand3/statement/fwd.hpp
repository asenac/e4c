#ifndef EMF_CPP_XPAND3_STATEMENT_FWD_HPP
#define EMF_CPP_XPAND3_STATEMENT_FWD_HPP


#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class StatementPackage;
typedef StatementPackage * StatementPackage_ptr;
class StatementFactory;
typedef StatementFactory * StatementFactory_ptr;

// Data types


// Classes
class AbstractStatement;
typedef AbstractStatement* AbstractStatement_ptr;
class ExpandStatement;
typedef ExpandStatement* ExpandStatement_ptr;
class ExpressionStatement;
typedef ExpressionStatement* ExpressionStatement_ptr;
class ErrorStatement;
typedef ErrorStatement* ErrorStatement_ptr;
class AbstractStatementWithBody;
typedef AbstractStatementWithBody* AbstractStatementWithBody_ptr;
class FileStatement;
typedef FileStatement* FileStatement_ptr;
class ForEachStatement;
typedef ForEachStatement* ForEachStatement_ptr;
class IfStatement;
typedef IfStatement* IfStatement_ptr;
class LetStatement;
typedef LetStatement* LetStatement_ptr;
class ProtectStatement;
typedef ProtectStatement* ProtectStatement_ptr;
class TextStatement;
typedef TextStatement* TextStatement_ptr;


// Structural features
struct ExpandStatement__foreach_tag;
struct ExpandStatement__parameters_tag;
struct ExpandStatement__separator_tag;
struct ExpandStatement__target_tag;
struct ExpandStatement__definition_tag;
struct ExpressionStatement__expression_tag;
struct ErrorStatement__message_tag;
struct AbstractStatementWithBody__body_tag;
struct FileStatement__fileNameExpression_tag;
struct FileStatement__outletNameIdentifier_tag;
struct FileStatement__once_tag;
struct ForEachStatement__target_tag;
struct ForEachStatement__separator_tag;
struct ForEachStatement__variable_tag;
struct ForEachStatement__iteratorName_tag;
struct IfStatement__condition_tag;
struct IfStatement__elseIf_tag;
struct LetStatement__varName_tag;
struct LetStatement__varValue_tag;
struct ProtectStatement__commentStart_tag;
struct ProtectStatement__commentEnd_tag;
struct ProtectStatement__id_tag;
struct ProtectStatement__disable_tag;
struct TextStatement__value_tag;
struct TextStatement__deleteLine_tag;


} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FWD_HPP
