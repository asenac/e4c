
#ifndef EMF_CPP_XTEXT_REFERENCEDMETAMODEL__HPP
#define EMF_CPP_XTEXT_REFERENCEDMETAMODEL__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractMetamodelDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class ReferencedMetamodel :  public virtual ::xtext::AbstractMetamodelDeclaration
{
public:

    typedef ReferencedMetamodel_ptr ptr_type;

    ReferencedMetamodel();
    virtual ~ReferencedMetamodel();




    /*PROTECTED REGION ID(xtext::ReferencedMetamodel public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::ReferencedMetamodel protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_REFERENCEDMETAMODEL__HPP
