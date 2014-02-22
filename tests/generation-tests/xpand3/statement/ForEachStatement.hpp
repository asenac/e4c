
#ifndef EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class ForEachStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

    typedef ForEachStatement_ptr ptr_type;

    ForEachStatement();
    virtual ~ForEachStatement();

    typedef xpand3::expression::AbstractExpression_ptr target_t;
    typedef xpand3::expression::AbstractExpression_ptr separator_t;
    typedef xpand3::Identifier_ptr variable_t;
    typedef xpand3::Identifier_ptr iteratorName_t;

    target_t getTarget() const;
    void setTarget(target_t target_);
    target_t releaseTarget();
    separator_t getSeparator() const;
    void setSeparator(separator_t separator_);
    separator_t releaseSeparator();
    variable_t getVariable() const;
    void setVariable(variable_t variable_);
    variable_t releaseVariable();
    iteratorName_t getIteratorName() const;
    void setIteratorName(iteratorName_t iteratorName_);
    iteratorName_t releaseIteratorName();


    /*PROTECTED REGION ID(xpand3::statement::ForEachStatement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class StatementPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_target;
    std::unique_ptr < xpand3::expression::AbstractExpression > m_separator;
    std::unique_ptr < xpand3::Identifier > m_variable;
    std::unique_ptr < xpand3::Identifier > m_iteratorName;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::statement::ForEachStatement protected) START*/
    /*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FOREACHSTATEMENT__HPP
