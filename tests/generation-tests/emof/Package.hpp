
#ifndef EMF_CPP_EMOF_PACKAGE__HPP
#define EMF_CPP_EMOF_PACKAGE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Package
class Package :  public virtual ::emof::NamedElement
{
public:

	typedef Package_ptr ptr_type;
	
	Package();
	virtual ~Package();

	typedef boost::ptr_set < emof::Package > nestedPackage_t;
	typedef boost::ptr_set < emof::Type > ownedType_t;
	typedef int uri_t;

	
	// TODO
	// TODO
	void setUri(uri_t _uri);
	uri_t getUri() const;

	
protected:

	nestedPackage_t m_nestedPackage;
	ownedType_t m_ownedType;
	uri_t m_uri;

};

} // emof


#endif // EMF_CPP_EMOF_PACKAGE__HPP
