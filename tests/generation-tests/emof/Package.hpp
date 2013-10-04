
#ifndef EMF_CPP_EMOF_PACKAGE__HPP
#define EMF_CPP_EMOF_PACKAGE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Package :  public virtual ::emof::NamedElement
{
public:

	typedef Package_ptr ptr_type;
	
	Package();
	virtual ~Package();

	typedef std::set < emof::Package_ptr > nestedPackage_t;
	typedef std::set < emof::Type_ptr > ownedType_t;
	typedef ::emof::String uri_t;
	
	nestedPackage_t getNestedPackage() const;
	void addNestedPackage(emof::Package_ptr nestedPackage_);
	void addAllNestedPackage(const nestedPackage_t& nestedPackage_);
	ownedType_t getOwnedType() const;
	void addOwnedType(emof::Type_ptr ownedType_);
	void addAllOwnedType(const ownedType_t& ownedType_);
	void setUri(uri_t _uri);
	uri_t getUri() const;
	

	/*PROTECTED REGION ID(emof::Package public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	std::set < std::unique_ptr < emof::Package > > m_nestedPackage;
	std::set < std::unique_ptr < emof::Type > > m_ownedType;
	uri_t m_uri;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Package protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_PACKAGE__HPP
