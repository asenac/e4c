
#ifndef EMF_CPP_XTEXT_ACTION__HPP
#define EMF_CPP_XTEXT_ACTION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::Action
class Action :  public virtual ::xtext::AbstractElement
{
public:

	typedef Action_ptr ptr_type;
	
	Action();
	virtual ~Action();

	typedef std::unique_ptr < xtext::TypeRef > type_t;
	typedef int feature_t;
	typedef int operator_t;

	
	// TODO
	void setFeature(feature_t _feature);
	feature_t getFeature() const;
	void setOperator(operator_t _operator);
	operator_t getOperator() const;

	
protected:

	type_t m_type;
	feature_t m_feature;
	operator_t m_operator;

};

} // xtext


#endif // EMF_CPP_XTEXT_ACTION__HPP
