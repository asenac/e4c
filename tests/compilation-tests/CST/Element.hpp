
#ifndef EMF_CPP_CST_ELEMENT__HPP
#define EMF_CPP_CST_ELEMENT__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


// CST::Element
class Element
{
public:

	typedef Element_ptr ptr_type;
	
	Element();
	virtual ~Element();

	typedef ::ecore::EString kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;


	kind_t m_kind;

		
protected:

};

} // CST


#endif // EMF_CPP_CST_ELEMENT__HPP
