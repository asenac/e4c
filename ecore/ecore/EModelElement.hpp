#ifndef EMF_CPP_ECORE_EMODELELEMENT__HPP
#define EMF_CPP_ECORE_EMODELELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EModelElement
{
public:

	typedef EModelElement_ptr ptr_type;
	
	virtual ~EModelElement();

	typedef std::vector < ecore::EAnnotation_ptr > eAnnotations_t;
	
	eAnnotations_t getEAnnotations() const;
	void addEAnnotations(ecore::EAnnotation_ptr eAnnotations_);
	void addAllEAnnotations(const eAnnotations_t& eAnnotations_);
	void removeEAnnotations(ecore::EAnnotation_ptr eAnnotations_);
	void clearEAnnotations();
	
	ecore::EAnnotation_ptr getEAnnotation(ecore::EString source);

	/*PROTECTED REGION ID(ecore::EModelElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	EModelElement();

	friend class EcorePackage;

	std::vector < std::unique_ptr < ecore::EAnnotation > > m_eAnnotations;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EModelElement protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EMODELELEMENT__HPP
