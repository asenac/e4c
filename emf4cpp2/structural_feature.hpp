#ifndef EMF4CPP2_STRUCTURAL_FEATURE_HPP
#define EMF4CPP2_STRUCTURAL_FEATURE_HPP

#include <vector>
#include <set>
#include <boost/any.hpp>
#include <emf4cpp2/eclass.hpp>

namespace e4c
{

class eclass;
typedef boost::shared_ptr< eclass > eclass_ptr;
typedef std::vector< eclass_ptr > eclass_vector;
typedef std::set< eclass_ptr > eclass_set;

class structural_feature
{
public:

    enum FeatureType
    {
        ATTRIBUTE,
        REFERENCE
    };

    virtual ~structural_feature();
    virtual const char * name() const = 0;
    virtual tag_t tag() const = 0;

    eclass * owner() const { return m_owner; };
    FeatureType feature_type() const { return m_type; };

    //void to_any(boost::any& any);
    //void from_any(const boost::any& any);

protected:
    structural_feature(eclass * owner_, FeatureType type_);

    eclass * m_owner;
    FeatureType m_type;
};

} // namespace e4c

#endif // EMF4CPP2_STRUCTURAL_FEATURE_HPP

