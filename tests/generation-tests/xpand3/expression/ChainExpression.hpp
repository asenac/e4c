
#ifndef EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class ChainExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

    typedef ChainExpression_ptr ptr_type;

    ChainExpression();
    virtual ~ChainExpression();

    typedef xpand3::expression::AbstractExpression_ptr first_t;
    typedef xpand3::expression::AbstractExpression_ptr next_t;

    first_t getFirst() const;
    void setFirst(first_t first_);
    first_t releaseFirst();
    next_t getNext() const;
    void setNext(next_t next_);
    next_t releaseNext();


    /*PROTECTED REGION ID(xpand3::expression::ChainExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_first;
    std::unique_ptr < xpand3::expression::AbstractExpression > m_next;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::ChainExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CHAINEXPRESSION__HPP
