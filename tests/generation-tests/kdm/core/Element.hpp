
#ifndef EMF_CPP_KDM_CORE_ELEMENT__HPP
#define EMF_CPP_KDM_CORE_ELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class Element : ::ecore::EObject
{
public:

    typedef Element_ptr ptr_type;

    virtual ~Element();

    typedef std::set < kdm::kdm::Attribute_ptr > attribute_t;
    typedef std::set < kdm::kdm::Annotation_ptr > annotation_t;

    attribute_t getAttribute() const;
    void addAttribute(kdm::kdm::Attribute_ptr attribute_);
    void addAllAttribute(const attribute_t& attribute_);
    annotation_t getAnnotation() const;
    void addAnnotation(kdm::kdm::Annotation_ptr annotation_);
    void addAllAnnotation(const annotation_t& annotation_);


    /*PROTECTED REGION ID(kdm::core::Element public) START*/
    /*PROTECTED REGION END*/

protected:
    Element();

    friend class CorePackage;

    std::set < std::unique_ptr < kdm::kdm::Attribute > > m_attribute;
    std::set < std::unique_ptr < kdm::kdm::Annotation > > m_annotation;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::core::Element protected) START*/
    /*PROTECTED REGION END*/
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_ELEMENT__HPP
