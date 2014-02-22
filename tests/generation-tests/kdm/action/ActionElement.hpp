
#ifndef EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
#define EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class ActionElement :  public virtual ::kdm::code::AbstractCodeElement
{
public:

    typedef ActionElement_ptr ptr_type;

    ActionElement();
    virtual ~ActionElement();

    typedef ::kdm::core::String kind_t;
    typedef std::set < kdm::code::AbstractCodeElement_ptr > codeElement_t;
    typedef std::vector < kdm::action::AbstractActionRelationship_ptr > actionRelation_t;

    void setKind(kind_t _kind);
    kind_t getKind() const;
    codeElement_t getCodeElement() const;
    void addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_);
    void addAllCodeElement(const codeElement_t& codeElement_);
    actionRelation_t getActionRelation() const;
    void addActionRelation(kdm::action::AbstractActionRelationship_ptr actionRelation_);
    void addAllActionRelation(const actionRelation_t& actionRelation_);


    /*PROTECTED REGION ID(kdm::action::ActionElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ActionPackage;

    kind_t m_kind;
    std::set < std::unique_ptr < kdm::code::AbstractCodeElement > > m_codeElement;
    std::vector < std::unique_ptr < kdm::action::AbstractActionRelationship > > m_actionRelation;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::action::ActionElement protected) START*/
    /*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ACTIONELEMENT__HPP
