
#include "Annotation.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::Annotation include) START*/
/*PROTECTED REGION END*/

Annotation::Annotation() :
    m_text()
{
    /*PROTECTED REGION ID(Annotation constructor) START*/
    /*PROTECTED REGION END*/
}

Annotation::~Annotation()
{
    /*PROTECTED REGION ID(Annotation destructor) START*/
    /*PROTECTED REGION END*/
}

void Annotation::setText(text_t _text)
{
    m_text = _text;;
}

Annotation::text_t Annotation::getText() const
{
    return m_text;
}



/*PROTECTED REGION ID(kdm::kdm::Annotation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Annotation::eClassImpl() const
{
    return KdmPackage::_instance()->getAnnotation();
}

