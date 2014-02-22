
#ifndef EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class FeatureCall :  public virtual ::xpand3::expression::AbstractExpression
{
public:

    typedef FeatureCall_ptr ptr_type;

    FeatureCall();
    virtual ~FeatureCall();

    typedef xpand3::expression::AbstractExpression_ptr target_t;
    typedef xpand3::Identifier_ptr name_t;

    target_t getTarget() const;
    void setTarget(target_t target_);
    target_t releaseTarget();
    name_t getName() const;
    void setName(name_t name_);
    name_t releaseName();


    /*PROTECTED REGION ID(xpand3::expression::FeatureCall public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_target;
    std::unique_ptr < xpand3::Identifier > m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::FeatureCall protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP
