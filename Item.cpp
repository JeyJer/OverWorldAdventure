#include "Item.h"

Item::Item( int id, std::string name, ClassType classType, TypeItem typeItem, Statistic stat )
    : m_id( id ), m_name( name ), m_classType( classType ), m_typeItem( typeItem ), m_stat( stat )
{
}

std::string Item::disp()
{
    return "Nom : " + this->m_name + ", Classe : " + getStringClass(this->getClassType()) +
        ", Emplacement : " + getStringTypeItem(this->getTypeItem()) + ", Caracteristiques :\n"
        "Vitalite : " + typeToString<int>(this->m_stat.life) +
        "\t\t| Mana : " + typeToString<int>(this->m_stat.mana) +
        "\nAttaque Phys : " + typeToString<int>(this->m_stat.physicalAtt) +
        "\t| Defense Phys : " + typeToString<int>(this->m_stat.physicalDef) +
        "\nAttaque Magique : " + typeToString<int>(this->m_stat.magicalAtt) +
        "\t| Defense Magique : " + typeToString<int>(this->m_stat.magicalDef);

}

std::string Item::getName()
{
    return this->m_name;
}

ClassType Item::getClassType()
{
    return this->m_classType;
}

TypeItem Item::getTypeItem()
{
    return this->m_typeItem;
}

Statistic Item::getStat()
{
    return this->m_stat;
}
