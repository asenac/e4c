
#ifndef EMF_CPP_XTEXT_ACTION__HPP
#define EMF_CPP_XTEXT_ACTION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Action :  public virtual ::xtext::AbstractElement
{
public:

    typedef Action_ptr ptr_type;

    Action();
    virtual ~Action();

    typedef xtext::TypeRef_ptr type_t;
    typedef ::ecore::EString feature_t;
    typedef ::ecore::EString operator_t;

    type_t getType() const;
    void setType(type_t type_);
    type_t releaseType();
    void setFeature(feature_t _feature);
    feature_t getFeature() const;
    void setOperator(operator_t _operator);
    operator_t getOperator() const;


    /*PROTECTED REGION ID(xtext::Action public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    std::unique_ptr < xtext::TypeRef > m_type;
    feature_t m_feature;
    operator_t m_operator;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::Action protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ACTION__HPP
