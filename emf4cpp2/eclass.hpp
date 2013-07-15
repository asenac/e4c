#ifndef EMF4CPP2_ECLASS_HPP
#define EMF4CPP2_ECLASS_HPP

#include <set>
#include <map>
#include <emf4cpp2/tag.hpp>

namespace e4c
{

class structural_feature;
class set_reference;

class eclass
{
public:
    virtual ~eclass();

    friend class structural_feature;
    friend class reference;

    typedef std::set< structural_feature * > structural_features_t;
    typedef structural_features_t::iterator 
        structural_features_iterator;
    typedef structural_features_t::const_iterator 
        structural_features_const_iterator;

    structural_features_iterator _begin(); 

    structural_features_iterator _end();

    structural_features_const_iterator _begin() const;

    structural_features_const_iterator _end() const;

protected:

    eclass();

    // Called from structural_feature's constructor
    // Do not use it
    void register_feature(structural_feature * sf);

    void set_reference(tag_t tag, eclass * value, bool set);

    structural_features_t m_structural_features;
};

} // namespace e4c

#endif // EMF4CPP2_ECLASS_HPP

