
#ifndef EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP
#define EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class AbstractMetamodelDeclaration : ::ecore::EObject
{
public:

	typedef AbstractMetamodelDeclaration_ptr ptr_type;
	
	AbstractMetamodelDeclaration();
	virtual ~AbstractMetamodelDeclaration();

	typedef ecore::EPackage_ptr ePackage_t;
	typedef ::ecore::EString alias_t;
	
	ePackage_t getEPackage() const;
	void setEPackage(ePackage_t ePackage_);
	void setAlias(alias_t _alias);
	alias_t getAlias() const;
	

	/*PROTECTED REGION ID(xtext::AbstractMetamodelDeclaration public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	ecore::EPackage_ptr m_ePackage;
	alias_t m_alias;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::AbstractMetamodelDeclaration protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP
