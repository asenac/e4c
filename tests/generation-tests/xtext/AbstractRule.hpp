
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

	typedef int name_t;
	typedef std::unique_ptr < xtext::TypeRef > type_t;
	typedef std::unique_ptr < xtext::AbstractElement > alternatives_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO
	// TODO

	
protected:

	name_t m_name;
	type_t m_type;
	alternatives_t m_alternatives;

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTRULE__HPP
