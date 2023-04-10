#include "Bay.h"
#include <string>
#include <iostream>

Bay::Bay(){
    Union();
    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string nm, std::string loc) {
    name = nm;
    deep = size = 0;

    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string nm, std::string loc, Ocean* _parent){
    name = nm;
    deep = size = 0;

    oceanParent = _parent;
    seaParent = nullptr;
}

Bay::Bay(std::string nm, std::string loc, Sea* _parent){
    name = nm;
    deep = size = 0;

    seaParent = _parent;
    oceanParent = _parent->getParent();
}

Bay::Bay(std::string nm, std::string loc, double sz, double dp){
    name = nm;
    location = loc;
    deep = dp;
    size = sz;

    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(std::string nm, std::string loc, double dp, double sz, Ocean* _parent)
{
    name = nm;
    location = loc;
    deep = dp;
    size = sz;

    oceanParent = _parent;
    seaParent = nullptr;
}

Bay::Bay(std::string nm, std::string loc, double dp, double sz, Sea* _parent)
{
    name = nm;
    location = loc;
    deep = dp;
    size = sz;

    seaParent = _parent;
    oceanParent = _parent->getParent();
}

std::ostream& operator<<(std::ostream& stream, Bay& obj)
{
    stream << "Âèä âîäîåìà - çàëèâ\n";

    std::string parentName;

    if (obj.seaParent)
    {
        parentName = obj.seaParent->getName();
    }
    else
    {
        parentName = "íè â êàêîì";
    }

    stream << "Â êàêîì ìîðå íàõîäèòñÿ - " << parentName << '\n';

    if (obj.oceanParent)
    {
        parentName = obj.oceanParent->getName();
    }
    else
    {
        parentName = "íè â êàêîì";
    }

    stream << "Â êàêîì îêåàíå íàõîäèòñÿ - " << parentName << '\n';

    obj.Print();

    return stream;
}
