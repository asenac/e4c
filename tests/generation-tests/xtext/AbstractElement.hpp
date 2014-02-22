
#ifndef EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP
#define EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class AbstractElement : ::ecore::EObject
{
public:

    typedef AbstractElement_ptr ptr_type;

    AbstractElement();
    virtual ~AbstractElement();

    typedef ::ecore::EString cardinality_t;

    void setCardinality(cardinality_t _cardinality);
    cardinality_t getCardinality() const;


    /*PROTECTED REGION ID(xtext::AbstractElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    cardinality_t m_cardinality;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::AbstractElement protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTELEMENT__HPP
