
#ifndef EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP
#define EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::AbstractElement
class AbstractElement
{
public:

	typedef AbstractElement_ptr ptr_type;
	
	AbstractElement();
	virtual ~AbstractElement();

	typedef ::ecore::EString cardinality_t;

	
	void setCardinality(cardinality_t _cardinality);
	cardinality_t getCardinality() const;


	cardinality_t m_cardinality;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP
