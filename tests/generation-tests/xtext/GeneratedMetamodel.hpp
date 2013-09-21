
#ifndef EMF_CPP_XTEXT_GENERATEDMETAMODEL__HPP
#define EMF_CPP_XTEXT_GENERATEDMETAMODEL__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractMetamodelDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::GeneratedMetamodel
class GeneratedMetamodel :  public virtual ::xtext::AbstractMetamodelDeclaration
{
public:

	typedef GeneratedMetamodel_ptr ptr_type;
	
	GeneratedMetamodel();
	virtual ~GeneratedMetamodel();

	typedef ::ecore::EString name_t;

	
	void setName(name_t _name);
	name_t getName() const;


	name_t m_name;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_GENERATEDMETAMODEL__HPP
