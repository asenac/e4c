
#ifndef EMF_CPP_IDLMM_CONTAINED__HPP
#define EMF_CPP_IDLMM_CONTAINED__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::Contained
class Contained :  public virtual ::idlmm::NamedElement
{
public:

	typedef Contained_ptr ptr_type;
	
	virtual ~Contained();

	typedef int repositoryId_t;
	typedef int version_t;
	typedef int absoluteName_t;
	typedef idlmm::Container_ptr definedIn_t;

	
	void setRepositoryId(repositoryId_t _repositoryId);
	repositoryId_t getRepositoryId() const;
	void setVersion(version_t _version);
	version_t getVersion() const;
	void setAbsoluteName(absoluteName_t _absoluteName);
	absoluteName_t getAbsoluteName() const;
	// TODO

	
protected:
	Contained();

	repositoryId_t m_repositoryId;
	version_t m_version;
	absoluteName_t m_absoluteName;
	definedIn_t m_definedIn;

};

} // idlmm


#endif // EMF_CPP_IDLMM_CONTAINED__HPP
