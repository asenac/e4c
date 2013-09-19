
#ifndef EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
#define EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EStringToStringMapEntry
class EStringToStringMapEntry
{
public:

	typedef EStringToStringMapEntry_ptr ptr_type;
	
	EStringToStringMapEntry();
	virtual ~EStringToStringMapEntry();

	typedef int key_t;
	typedef int value_t;

	
	void setKey(key_t _key);
	key_t getKey() const;
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	key_t m_key;
	value_t m_value;

};

} // ecore


#endif // EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
