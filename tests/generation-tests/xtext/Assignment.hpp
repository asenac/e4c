
#ifndef EMF_CPP_XTEXT_ASSIGNMENT__HPP
#define EMF_CPP_XTEXT_ASSIGNMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Assignment :  public virtual ::xtext::AbstractElement
{
public:

	typedef Assignment_ptr ptr_type;
	
	Assignment();
	virtual ~Assignment();

	typedef ::ecore::EString feature_t;
	typedef ::ecore::EString operator_t;
	typedef xtext::AbstractElement_ptr terminal_t;
	
	void setFeature(feature_t _feature);
	feature_t getFeature() const;
	void setOperator(operator_t _operator);
	operator_t getOperator() const;
	terminal_t getTerminal() const;
	void setTerminal(terminal_t terminal_);
	terminal_t releaseTerminal();
	

	/*PROTECTED REGION ID(xtext::Assignment public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	feature_t m_feature;
	operator_t m_operator;
	std::unique_ptr < xtext::AbstractElement > m_terminal;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::Assignment protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ASSIGNMENT__HPP
