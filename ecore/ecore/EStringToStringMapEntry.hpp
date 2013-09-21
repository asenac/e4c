
#ifndef EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
#define EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EStringToStringMapEntry
{
public:

	typedef EStringToStringMapEntry_ptr ptr_type;
	
	EStringToStringMapEntry();
	virtual ~EStringToStringMapEntry();

	typedef ::ecore::EString key_t;
	typedef ::ecore::EString value_t;
	
	void setKey(key_t _key);
	key_t getKey() const;
	void setValue(value_t _value);
	value_t getValue() const;
	

	/*PROTECTED REGION ID(ecore::EStringToStringMapEntry public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	key_t m_key;
	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EStringToStringMapEntry protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_ESTRINGTOSTRINGMAPENTRY__HPP
