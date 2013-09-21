
#ifndef EMF_CPP_XTEXT_ABSTRACTRULE__HPP
#define EMF_CPP_XTEXT_ABSTRACTRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::AbstractRule
class AbstractRule
{
public:

	typedef AbstractRule_ptr ptr_type;
	
	AbstractRule();
	virtual ~AbstractRule();

	typedef ::ecore::EString name_t;
	typedef xtext::TypeRef_ptr type_t;
	typedef xtext::AbstractElement_ptr alternatives_t;

	
	void setName(name_t _name);
	name_t getName() const;
	type_t getType() const;
	alternatives_t getAlternatives() const;


	name_t m_name;
	std::unique_ptr < xtext::TypeRef > m_type;
	std::unique_ptr < xtext::AbstractElement > m_alternatives;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTRULE__HPP
