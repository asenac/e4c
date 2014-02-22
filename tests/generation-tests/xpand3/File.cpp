
#include "File.hpp"
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/ImportStatement.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

using namespace xpand3;

/*PROTECTED REGION ID(xpand3::File include) START*/
/*PROTECTED REGION END*/

File::File() :
    m_imports(),
    m_declarations()
{
    /*PROTECTED REGION ID(File constructor) START*/
    /*PROTECTED REGION END*/
}

File::~File()
{
    /*PROTECTED REGION ID(File destructor) START*/
    /*PROTECTED REGION END*/
}

File::imports_t File::getImports() const
{
    return e4c::returned(m_imports);
}


void File::addImports(xpand3::ImportStatement_ptr imports_)
{
    m_imports.push_back(std::unique_ptr < xpand3::ImportStatement >(imports_));
}

void File::addAllImports(const imports_t& imports_)
{
    for (auto i = imports_.begin(); i != imports_.end(); i++)
        addImports(*i);
}

File::declarations_t File::getDeclarations() const
{
    return e4c::returned(m_declarations);
}


void File::addDeclarations(xpand3::declaration::AbstractDeclaration_ptr declarations_)
{
    m_declarations.push_back(std::unique_ptr < xpand3::declaration::AbstractDeclaration >(declarations_));
}

void File::addAllDeclarations(const declarations_t& declarations_)
{
    for (auto i = declarations_.begin(); i != declarations_.end(); i++)
        addDeclarations(*i);
}



/*PROTECTED REGION ID(xpand3::File implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr File::eClassImpl() const
{
    return Xpand3Package::_instance()->getFile();
}

