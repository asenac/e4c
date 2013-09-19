
#ifndef EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP
#define EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::AbstractMetamodelDeclaration
class AbstractMetamodelDeclaration
{
public:

	typedef AbstractMetamodelDeclaration_ptr ptr_type;
	
	AbstractMetamodelDeclaration();
	virtual ~AbstractMetamodelDeclaration();

	typedef ecore::EPackage_ptr ePackage_t;
	typedef int alias_t;

	
	// TODO
	void setAlias(alias_t _alias);
	alias_t getAlias() const;

	
protected:

	ePackage_t m_ePackage;
	alias_t m_alias;

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTMETAMODELDECLARATION__HPP
