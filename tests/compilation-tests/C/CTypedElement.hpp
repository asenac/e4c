
#ifndef EMF_CPP_C_CTYPEDELEMENT__HPP
#define EMF_CPP_C_CTYPEDELEMENT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CTypedElement : ::ecore::EObject
{
public:

    typedef CTypedElement_ptr ptr_type;

    CTypedElement();
    virtual ~CTypedElement();

    typedef C::CClassifier_ptr type_t;
    typedef C::CSourceText_ptr source_t;

    type_t getType() const;
    void setType(type_t type_);
    source_t getSource() const;
    void setSource(source_t source_);


    /*PROTECTED REGION ID(C::CTypedElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;

    C::CClassifier_ptr m_type;
    C::CSourceText_ptr m_source;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CTypedElement protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CTYPEDELEMENT__HPP
