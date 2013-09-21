
#ifndef EMF_CPP_XTEXT_RULECALL__HPP
#define EMF_CPP_XTEXT_RULECALL__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::RuleCall
class RuleCall :  public virtual ::xtext::AbstractElement
{
public:

	typedef RuleCall_ptr ptr_type;
	
	RuleCall();
	virtual ~RuleCall();

	typedef xtext::AbstractRule_ptr rule_t;

	
	rule_t getRule() const;


	xtext::AbstractRule_ptr m_rule;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_RULECALL__HPP
