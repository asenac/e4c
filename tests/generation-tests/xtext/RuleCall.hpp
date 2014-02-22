
#ifndef EMF_CPP_XTEXT_RULECALL__HPP
#define EMF_CPP_XTEXT_RULECALL__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class RuleCall :  public virtual ::xtext::AbstractElement
{
public:

    typedef RuleCall_ptr ptr_type;

    RuleCall();
    virtual ~RuleCall();

    typedef xtext::AbstractRule_ptr rule_t;

    rule_t getRule() const;
    void setRule(rule_t rule_);


    /*PROTECTED REGION ID(xtext::RuleCall public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    xtext::AbstractRule_ptr m_rule;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::RuleCall protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_RULECALL__HPP
