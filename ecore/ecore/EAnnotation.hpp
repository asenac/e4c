#ifndef EMF_CPP_ECORE_EANNOTATION__HPP
#define EMF_CPP_ECORE_EANNOTATION__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EAnnotation :  public virtual ::ecore::EModelElement
{
public:

    typedef EAnnotation_ptr ptr_type;

    EAnnotation();
    virtual ~EAnnotation();

    typedef ::ecore::EString source_t;
    typedef std::vector < ecore::EStringToStringMapEntry_ptr > details_t;
    typedef ecore::EModelElement_ptr eModelElement_t;
    typedef std::vector < ecore::EObject_ptr > contents_t;
    typedef std::vector < ecore::EObject_ptr > references_t;

    void setSource(source_t _source);
    source_t getSource() const;
    details_t getDetails() const;
    void addDetails(ecore::EStringToStringMapEntry_ptr details_);
    void addAllDetails(const details_t& details_);
    void removeDetails(ecore::EStringToStringMapEntry_ptr details_);
    void clearDetails();
    eModelElement_t getEModelElement() const;
    contents_t getContents() const;
    void addContents(ecore::EObject_ptr contents_);
    void addAllContents(const contents_t& contents_);
    void removeContents(ecore::EObject_ptr contents_);
    void clearContents();
    references_t getReferences() const;
    void addReferences(ecore::EObject_ptr references_);
    void addAllReferences(const references_t& references_);
    void removeReferences(ecore::EObject_ptr references_);
    void clearReferences();


    /*PROTECTED REGION ID(ecore::EAnnotation public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EcorePackage;

    source_t m_source;
    std::vector < std::unique_ptr < ecore::EStringToStringMapEntry > > m_details;
    ecore::EModelElement_ptr m_eModelElement;
    std::vector < std::unique_ptr < ecore::EObject > > m_contents;
    std::vector < ecore::EObject_ptr > m_references;


    friend class ::ecore::EModelElement;
    void setEModelElement(eModelElement_t eModelElement_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(ecore::EAnnotation protected) START*/
    /*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EANNOTATION__HPP
