#include "../../../includes/FileSet/PdbFileSpace/pdbcompoundcard.hpp"

using namespace std;
using namespace PdbFileSpace;

//////////////////////////////////////////////////////////
//                       CONSTRUCTOR                    //
//////////////////////////////////////////////////////////
PdbCompoundCard::PdbCompoundCard() : record_name_("COMPND"){}
PdbCompoundCard::PdbCompoundCard(const string& record_name) : record_name_(record_name) {}

//////////////////////////////////////////////////////////
//                         ACCESSOR                     //
//////////////////////////////////////////////////////////
string PdbCompoundCard::GetRecordName()
{
    return record_name_;
}

PdbCompoundCard::PdbCompoundSpecificationMap PdbCompoundCard::GetCompoundSpecifications()
{
    return compound_specifications_;
}

//////////////////////////////////////////////////////////
//                          MUTATOR                     //
//////////////////////////////////////////////////////////
void PdbCompoundCard::SetRecordName(const string record_name)
{
    record_name_ = record_name;
}

//////////////////////////////////////////////////////////
//                        FUNCTIONS                     //
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//                      DISPLAY FUNCTION                //
//////////////////////////////////////////////////////////