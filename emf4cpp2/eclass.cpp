#include "eclass.hpp"
#include "structural_feature.hpp"
#include "reference.hpp"

using namespace e4c;

eclass::eclass()
{
}

eclass::~eclass()
{
}

eclass::structural_features_iterator eclass::_begin() 
{
    return m_structural_features.begin();
}

eclass::structural_features_iterator eclass::_end() 
{
    return m_structural_features.end();
}

eclass::structural_features_const_iterator eclass::_begin() const 
{
    return m_structural_features.begin();
}

eclass::structural_features_const_iterator eclass::_end() const
{
    return m_structural_features.end();
}

void eclass::register_feature(structural_feature * sf)
{
    m_structural_features.insert(sf);
}

void eclass::set_reference(tag_t tag, eclass * value, bool set)
{
    // TODO Use a map
    structural_features_iterator it = _begin();
    for (; it != _end(); it++)
    {
        if ((*it)->tag() == tag)
        {
            dynamic_cast< reference * >(*it)->set(set, value);
            break;
        }
    }
}
