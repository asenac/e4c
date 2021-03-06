#ifndef EMF_CPP_IDLMM_CONTAINER__HPP
#define EMF_CPP_IDLMM_CONTAINER__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Container :  public virtual ::idlmm::Contained
{
public:

    typedef Container_ptr ptr_type;

    virtual ~Container();

    typedef std::vector < idlmm::Contained_ptr > contains_t;

    contains_t getContains() const;
    void addContains(idlmm::Contained_ptr contains_);
    void addAllContains(const contains_t& contains_);
    void removeContains(idlmm::Contained_ptr contains_);
    void clearContains();


    /*PROTECTED REGION ID(idlmm::Container public) START*/
    /*PROTECTED REGION END*/

protected:
    Container();

    friend class IdlmmPackage;

    std::vector < std::unique_ptr < idlmm::Contained > > m_contains;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(idlmm::Container protected) START*/
    /*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONTAINER__HPP
