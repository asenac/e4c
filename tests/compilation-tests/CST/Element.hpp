
#ifndef EMF_CPP_CST_ELEMENT__HPP
#define EMF_CPP_CST_ELEMENT__HPP

#include <CST/fwd.hpp>
#include <CST/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace CST
{


class Element : ::ecore::EObject
{
public:

	typedef Element_ptr ptr_type;
	
	Element();
	virtual ~Element();

	typedef ::ecore::EString kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(CST::Element public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CSTPackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(CST::Element protected) START*/
	/*PROTECTED REGION END*/
};

} // CST


#endif // EMF_CPP_CST_ELEMENT__HPP
