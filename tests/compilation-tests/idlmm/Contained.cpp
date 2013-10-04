
#include "Contained.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Container.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Contained include) START*/
/*PROTECTED REGION END*/

Contained::Contained() : 
	m_repositoryId(),
    m_version(),
    m_absoluteName(),
    m_definedIn()
{
	/*PROTECTED REGION ID(Contained constructor) START*/
	/*PROTECTED REGION END*/
}

Contained::~Contained()
{
	/*PROTECTED REGION ID(Contained destructor) START*/
	/*PROTECTED REGION END*/
}

void Contained::setRepositoryId(repositoryId_t _repositoryId)
{
	m_repositoryId = _repositoryId;;
}

Contained::repositoryId_t Contained::getRepositoryId() const
{
	return m_repositoryId;
}

void Contained::setVersion(version_t _version)
{
	m_version = _version;;
}

Contained::version_t Contained::getVersion() const
{
	return m_version;
}

void Contained::setAbsoluteName(absoluteName_t _absoluteName)
{
	m_absoluteName = _absoluteName;;
}

Contained::absoluteName_t Contained::getAbsoluteName() const
{
	return m_absoluteName;
}

Contained::definedIn_t Contained::getDefinedIn() const
{
	return e4c::returned(m_definedIn);
}

void Contained::setDefinedIn(definedIn_t definedIn_)
{
	m_definedIn = definedIn_;
}



/*PROTECTED REGION ID(idlmm::Contained implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Contained::eClassImpl() const
{
	return IdlmmPackage::_instance()->getContained();
}
 
