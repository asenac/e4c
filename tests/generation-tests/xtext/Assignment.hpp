
#ifndef EMF_CPP_XTEXT_ASSIGNMENT__HPP
#define EMF_CPP_XTEXT_ASSIGNMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::Assignment
class Assignment :  public virtual ::xtext::AbstractElement
{
public:

	typedef Assignment_ptr ptr_type;
	
	Assignment();
	virtual ~Assignment();

	typedef int feature_t;
	typedef int operator_t;
	typedef std::unique_ptr < xtext::AbstractElement > terminal_t;

	
	void setFeature(feature_t _feature);
	feature_t getFeature() const;
	void setOperator(operator_t _operator);
	operator_t getOperator() const;
	// TODO

	
protected:

	feature_t m_feature;
	operator_t m_operator;
	terminal_t m_terminal;

};

} // xtext


#endif // EMF_CPP_XTEXT_ASSIGNMENT__HPP
