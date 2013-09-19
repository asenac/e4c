
#ifndef EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP
#define EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::CompoundElement
class CompoundElement :  public virtual ::xtext::AbstractElement
{
public:

	typedef CompoundElement_ptr ptr_type;
	
	CompoundElement();
	virtual ~CompoundElement();

	typedef boost::ptr_vector < xtext::AbstractElement > elements_t;

	
	// TODO

	
protected:

	elements_t m_elements;

};

} // xtext


#endif // EMF_CPP_XTEXT_COMPOUNDELEMENT__HPP
