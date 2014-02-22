#ifndef EMF_CPP_ECORE_EGENERICTYPE__HPP
#define EMF_CPP_ECORE_EGENERICTYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EGenericType
{
public:

    typedef EGenericType_ptr ptr_type;

    EGenericType();
    virtual ~EGenericType();

    typedef ecore::EGenericType_ptr eUpperBound_t;
    typedef std::vector < ecore::EGenericType_ptr > eTypeArguments_t;
    typedef ecore::EClassifier_ptr eRawType_t;
    typedef ecore::EGenericType_ptr eLowerBound_t;
    typedef ecore::ETypeParameter_ptr eTypeParameter_t;
    typedef ecore::EClassifier_ptr eClassifier_t;

    eUpperBound_t getEUpperBound() const;
    void setEUpperBound(eUpperBound_t eUpperBound_);
    eUpperBound_t releaseEUpperBound();
    eTypeArguments_t getETypeArguments() const;
    void addETypeArguments(ecore::EGenericType_ptr eTypeArguments_);
    void addAllETypeArguments(const eTypeArguments_t& eTypeArguments_);
    void removeETypeArguments(ecore::EGenericType_ptr eTypeArguments_);
    void clearETypeArguments();
    eRawType_t getERawType() const;
    void setERawType(eRawType_t eRawType_);
    eLowerBound_t getELowerBound() const;
    void setELowerBound(eLowerBound_t eLowerBound_);
    eLowerBound_t releaseELowerBound();
    eTypeParameter_t getETypeParameter() const;
    void setETypeParameter(eTypeParameter_t eTypeParameter_);
    eClassifier_t getEClassifier() const;
    void setEClassifier(eClassifier_t eClassifier_);


    /*PROTECTED REGION ID(ecore::EGenericType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EcorePackage;

    std::unique_ptr < ecore::EGenericType > m_eUpperBound;
    std::vector < std::unique_ptr < ecore::EGenericType > > m_eTypeArguments;
    ecore::EClassifier_ptr m_eRawType;
    std::unique_ptr < ecore::EGenericType > m_eLowerBound;
    ecore::ETypeParameter_ptr m_eTypeParameter;
    ecore::EClassifier_ptr m_eClassifier;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(ecore::EGenericType protected) START*/
    /*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EGENERICTYPE__HPP
